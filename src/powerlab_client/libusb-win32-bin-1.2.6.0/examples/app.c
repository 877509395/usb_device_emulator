#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <lusb0_usb.h>
void app(usb_dev_handle *dev) {
	char buf[4096];
	int32_t i;
	int32_t retval;

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
	retval = usb_bulk_read(dev, 0x81, buf, sizeof(buf), 0);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}

	i=0;
	buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;buf[i++] = 0x88;
	retval = usb_bulk_write(dev, 0x02, buf, 10, 5000);
	if (retval<0) {
		printf("Error read retval = %d",retval);
	}
}
