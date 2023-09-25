#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>

#include "bushound.h"

struct field fields[20];
int bushound_log_to_app( struct bushound *p, int32_t count);
int bushound_log_to_device_data( struct bushound *p, int32_t count);



int field_get(char *line, int32_t field_num, char*field_data)
{
	memcpy(field_data, &line[fields[field_num].start], fields[field_num].end - fields[field_num].start+1);
	field_data[ fields[field_num].end - fields[field_num].start+1 ] = 0;
	return 0;
}

int hexdump(FILE *fp, uint8_t *buf, int count)
{
	int i;

	for(i = 0; i<count; i++)
	{
		fprintf(fp, "0x%02x ", buf[i]);
		if (i!=count-1){
			fprintf(fp, ",");
		}
	}
	
	return 0;
}


int bushound_dump(struct bushound *p, int count)
{
	int i;
	for (i=0; i<count; i++)
	{
		printf("length %10d     delta=%10u     device =%d    endpoint=%d data = ",p[i].length, p[i].delta, p[i].device, p[i].endpoint);
		hexdump(stdout, p[i].data, p[i].length);
		printf("\n");
	}
}

int bushound_format(struct bushound *p)
{
	uint32_t us;
	uint32_t ms;
	uint32_t i;

	uint32_t device;
	uint32_t endpoint;
	
	uint32_t length;
	long data;

	char *cur_pos;
	char *end_pos;

	if (strstr(p->delta_raw, "us")) {

		if (1 == sscanf(p->delta_raw, "%u", &us)){
			p->delta = us;
		} else {
			assert(0);
		}

	} else if(strstr(p->delta_raw, "ms")) {
		if (2 == sscanf(p->delta_raw, "%u.%u", &ms, &us)) {
			p->delta = ms*1000+us;
		} else if ( 1 == sscanf(p->delta_raw, "%u", &ms) ) {
			p->delta = ms*1000;
		}
		else  {
			assert(0);
		}
	} else {
		assert(0);
	}
	
	if (2 == sscanf(p->device_raw, "%u.%u", &device, &endpoint)) {
		p->device = device;
		p->endpoint = endpoint;
	} else {
		assert(0);
	}

	if (1 == sscanf(p->length_raw, "%u", &length)) {
		p->length = length;
	} else {
		assert(0);
	}
	assert(p->length <= sizeof(p->data) );

	cur_pos = p->data_raw;
	for ( i = 0; i < p->length; i++) {
		data = strtol(cur_pos, &end_pos, 16);
		p->data[i] = data;
		cur_pos = end_pos+1;
	}
}
//buf should
int field_width_compute(char *buf)
{
	int i;
	int field_start;
	int field_end;
	int j;
	int field_count  = 0;

	int32_t fieldCnt;
	if (buf[strlen(buf)-1]=='\n') {
		buf[strlen(buf)-1] = 0;
	}
	i = 0;
	while ('-'==buf[i]) {
		field_start = i;
		j = 0; 
		for (j=0;;j++){
			if (buf[i+j]=='-') {
				continue;
			} else {
				break;
			}
		}
		field_end = i+j-1;
		fields[field_count].start = field_start;
		fields[field_count].end   = field_end;
		field_count++;
	
		printf("field_start/field_end = %d/%d \n", field_start,field_end);
		if (buf[i+j]==' ') {
			i = i+j+2;
		} else {
			i = i+j;
		}
	}
	return 0;
}

struct bushound data[100000];
int main(int argc, char **argv)
{
	char line[100*1024];
	char field_data[1024];
	FILE *fp = NULL;
	int i;
	int count;

	if (argc != 2){
		printf("usuage %s bushound_log_file", argv[0]);
		exit(1);
	}
	fp = fopen( argv[1], "r" );
	if (NULL == fp) {
		printf("Error failed to open %s\n", argv[1]);
		exit(1);
	}

	memset(line, 0, sizeof(line));
	fgets(line, sizeof(line), fp);
	field_width_compute(line);

	i = 0;
	while (fgets(line, sizeof(line),fp)) {

		field_get(line, FIELD_DEVICE, field_data);
		strcpy( data[i].device_raw, field_data);
		
		field_get(line, FIELD_TIME, field_data );
		strcpy( data[i].time_raw, field_data);

		field_get(line, FIELD_CMD_PHASE_OFS, field_data);
		strcpy( data[i].cmd_phase_ofs_raw, field_data);
		
		field_get(line, FIELD_PHASE, field_data);
		strcpy( data[i].phase_raw, field_data);
	
		field_get(line, FIELD_DATA, field_data);
		strcpy( data[i].data_raw, field_data);
	
		field_get(line, FIELD_DELTA, field_data);
		strcpy( data[i].delta_raw, field_data);

		field_get(line, FIELD_DATE, field_data);
		strcpy( data[i].date_raw, field_data);
	
		field_get(line, FIELD_LENGTH, field_data);
		strcpy( data[i].length_raw, field_data);
		i++;
		if (i >= sizeof(data)/sizeof(data[0]) ) {
			printf("overflow \n");
			assert(0);
		}
	}

	count = i;
	for (i=0;i<count;i++)
	{
		bushound_format(&data[i]);
	}
	bushound_dump(data, count);

	bushound_log_to_app( data, count);
	bushound_log_to_device_data( data, count);
	return 0;

}
//retval = usb_bulk_write(dev, 0x2, outdata, sizeof(outdata), 5000);
//retval = usb_bulk_read(dev, 0x81, indata,  sizeof(indata),  0);

int bushound_log_to_app( struct bushound *p, int32_t count)
{
	int i;
	int j;
	FILE *fp = NULL;

	fp = fopen("build/app.c", "w+");

	fprintf( fp, "#include <assert.h>\n");
	fprintf( fp, "#include <stdio.h>\n");
	fprintf( fp, "#include <stdint.h>\n");
	fprintf( fp, "#include <lusb0_usb.h>\n");

	fprintf( fp,  "void app(usb_dev_handle *dev) {\n");
	fprintf( fp,  "\tchar buf[4096];\n");
	fprintf( fp,  "\tint32_t i;\n");
	fprintf( fp,  "\tint32_t retval;\n");

	for (i=0; i<count; i++)	{

		if (IS_CTRL(p[i].endpoint)) {
			continue;
		}

		if (IS_IN(p[i].endpoint)) {

			fprintf(fp, "\tretval = usb_bulk_read(dev, 0x%02x, buf, sizeof(buf), 0);\n", p[i].endpoint+0x80);

			fprintf(fp, "\tif (retval<0) {\n");
			fprintf(fp, "\t\tprintf(\"Error read retval = %%d\",retval);\n");
			fprintf(fp, "\t}\n");

		} else if (IS_OUT(p[i].endpoint)) {
			printf("endpoint = %d\n", p[i].endpoint);
			fprintf(fp, "\n");
			fprintf(fp, "\ti=0;\n");
			for(j=0; j<p[i].length; j++) {
				if ( 0 == j) {
					fprintf(fp, "\t");
				}
				fprintf(fp, "buf[i++] = 0x%02x;", p[i].data[j]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "\tretval = usb_bulk_write(dev, 0x%02x, buf, %d, 5000);\n", p[i].endpoint, p[i].length);
			fprintf(fp, "\tif (retval<0) {\n");
			fprintf(fp, "\t\tprintf(\"Error read retval = %%d\",retval);\n");
			fprintf(fp, "\t}\n");
		} else {
			assert(0);
		}
	}
	fprintf(fp,"}\n" );
	fclose(fp);
}


int bushound_log_to_device_data( struct bushound *p, int32_t count)
{
	int i;
	FILE *fp = NULL;
	int32_t last = -1;

	fp = fopen("build/device.c", "w+");

	fprintf(fp, "#include <stdint.h>\n");
	fprintf(fp, "#include \"device_data.h\"\n");


	for(i=0; i<count; i++){
		if(!IS_IN( p[i].endpoint)) {
			continue;
		}
		fprintf(fp, "const uint8_t buf%d[] = { ", i);
		hexdump(fp,p[i].data, p[i].length);
		fprintf(fp, "};\n");
		last = i;	
	}

	fprintf(fp, "const struct device_data in_data[]= {\n");
	for(i=0; i<count; i++) {
		if(!IS_IN( p[i].endpoint)) {
			continue;
		}
		fprintf(fp, "\t{ buf%i, 0	     },", i, i);
		fprintf(fp, "\t{ buf%i, 0	     },", i);
		fprintf(fp, "\t{ buf%i, 0	     }",  i);
		if (i!=last) {
			fprintf(fp, ",\n");
		}
	}
	fprintf(fp, "\n};\n");

	fprintf(fp, "int32_t in_data_size = sizeof(in_data)/sizeof(in_data[0]);\n");

	fclose(fp);
	return 0;
}
