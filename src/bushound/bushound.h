#ifndef __BUSHOUND_H__

#define __BUSHOUND_H__


#define FIELD_TIME     		0
#define FIELD_ADDRESS  		1
#define FIELD_CMD_PHASE_OFS 	2
#define FIELD_DEVICE   		3
#define FIELD_LENGTH		4
#define FIELD_PHASE 		5
#define FIELD_DATA		6
#define FIELD_DESCRIPTION       7
#define FIELD_DELTA		8
#define FIELD_DATE		9
#define FIELD_DRIVER		10

#if 0
#define DEVICE_START 		55
#define DEVICE_END		60
 
#define TIME_START 		0
#define TIME_END		11

#define CMD_PHASE_OFS_START	35
#define CMD_PHASE_OFS_END	52

#define PHASE_START		73
#define PHASE_END		77

#define DATA_START		80	
#define DATA_END		129

#define DELTA_START		150
#define DELTA_END		154	

#define DATE_START		157
#define DATE_END		166

#define LENGTH_START 		63
#define LENGTH_END		70
#endif

struct bushound
{
	char device_raw		[10];
	char time_raw		[20];
	char cmd_phase_ofs_raw	[20];
	char phase_raw		[10];
	uint8_t data_raw	[1024];
	char delta_raw		[10];
	char date_raw		[20];
	char length_raw		[10];
	
	int device;	
	int endpoint;
	
	int delta;//in us
	uint8_t data[2000];
	uint32_t length;
};

struct field{
	int start;
	int end;
};

#define IS_CTRL(a) 	(((a)==0)||(0x80 == (a)))
#define IS_IN(a) 	(!IS_CTRL(a) && ((a)%2==1))
#define IS_OUT(a)	(!IS_CTRL(a) && ((a)%2==0))

#endif
