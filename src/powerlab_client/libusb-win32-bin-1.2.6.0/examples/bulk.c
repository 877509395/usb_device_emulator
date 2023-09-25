#include <lusb0_usb.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#include "app.h"
// Enables this example to work with a device running the
// libusb-win32 PIC Benchmark Firmware.
#define BENCHMARK_DEVICE

//////////////////////////////////////////////////////////////////////////////
// TEST SETUP (User configurable)

// Issues a Set configuration request
#define TEST_SET_CONFIGURATION

// Issues a claim interface request
#define TEST_CLAIM_INTERFACE

// Use the libusb-win32 async transfer functions. see
// transfer_bulk_async() below.
#define TEST_ASYNC

// Attempts one bulk read.
#define TEST_BULK_READ

// Attempts one bulk write.
// #define TEST_BULK_WRITE

//////////////////////////////////////////////////////////////////////////////
// DEVICE SETUP (User configurable)

// Device vendor and product id.
//#define MY_VID 0x0666
#define MY_VID 0x06EC
#define MY_PID 0x0001

// Device configuration and interface id.
#define MY_CONFIG 1
#define MY_INTF 0

// Device endpoint(s)
#define EP_IN 0x81
#define EP_OUT 0x02

// Device of bytes to transfer.
#define BUF_SIZE 64

//////////////////////////////////////////////////////////////////////////////
usb_dev_handle *open_dev(void);

static int transfer_bulk_async(usb_dev_handle *dev,
                               int ep,
                               char *bytes,
                               int size,
                               int timeout);

usb_dev_handle *open_dev(void)
{
    struct usb_bus *bus;
    struct usb_device *dev;

    for (bus = usb_get_busses(); bus; bus = bus->next)
    {
        for (dev = bus->devices; dev; dev = dev->next)
        {
            if (dev->descriptor.idVendor == MY_VID
                    && dev->descriptor.idProduct == MY_PID)
            {
                return usb_open(dev);
            }
        }
    }
    return NULL;
}

int main(int argc, char**argv)
{
    usb_dev_handle *dev = NULL; /* the device handle */
    char tmp[BUF_SIZE];
    int ret;
    void* async_read_context = NULL;
    void* async_write_context = NULL;
    char outdata[10];
    char indata[1000];
    int i;
    int j;
    int retval;
    time_t time_start;
    time_t time_end;
    int count;
    long delta;
    int failCnt = 0;
    struct timeval app_start_time,app_end_time;

    usb_init(); /* initialize the library */
    usb_find_busses(); /* find all busses */
    usb_find_devices(); /* find all connected devices */

    count = atoi(argv[1]);
    printf("count = %d\n", count);
    if (!(dev = open_dev()))
    {
        printf("error opening device: \n%s\n", usb_strerror());
        return 0;
    }
    else
    {
        printf("success: device %04X:%04X opened\n", MY_VID, MY_PID);
    }

#ifdef TEST_SET_CONFIGURATION
    if (usb_set_configuration(dev, MY_CONFIG) < 0)
    {
        printf("error setting config #%d: %s\n", MY_CONFIG, usb_strerror());
        usb_close(dev);
        return 0;
    }
    else
    {
        printf("success: set configuration #%d\n", MY_CONFIG);
    }
#endif

#ifdef TEST_CLAIM_INTERFACE
    if (usb_claim_interface(dev, 0) < 0)
    {
        printf("error claiming interface #%d:\n%s\n", MY_INTF, usb_strerror());
        usb_close(dev);
        return 0;
    }
    else
    {
        printf("success: claim_interface #%d\n", MY_INTF);
    }
#endif
    time_start = time(NULL);
#if 0
    memset(outdata, 0x88, sizeof(outdata));
    for(i=0; i<count;i++)
    {
#if 0
	retval = usb_bulk_write(dev, 0x2, outdata, sizeof(outdata), 5000);
        if (retval<0) {
            printf("Error write, retval = %d\n",retval );
	} else {
	    printf("write success i = %d\n", i);
	}
#endif
restart:
	memset(indata, 0x00, sizeof(indata));
        retval = usb_bulk_read(dev, 0x81, indata,  sizeof(indata),  0);
	if(retval < 0) {
		printf("Error read  retval = %d\n", retval);
		sleep(1);
		failCnt++;
	} else {
		printf("read len = %d\r\n", retval);
		printf("\t");
		for(j=0; j<retval; j++)	{
			printf("%02x ", indata[j]);
		}
		printf("\n");
	}
    }
#endif
    //for(;;);
    // clock_gettime(CLOCK_REALTIME, &app_start_time);
    //gettimeofday(&app_start_time,NULL);
    printf("%s %d\n", __FUNCTION__, __LINE__);
    app(dev);
    app(dev);
    app(dev);
    app(dev);
    app(dev);
    printf("%s %d\n", __FUNCTION__, __LINE__);
    //gettimeofday(&app_end_time,NULL);
    printf("%s %d delta=%d\n", __FUNCTION__, __LINE__, time(NULL)-time_start);
    time_end = time(NULL);

    //clock_gettime(CLOCK_REALTIME, &app_end_time);

    //delta = app_end_time.tv_sec*1000*1000*1000 + app_end_time.tv_usec - (app_start_time.tv_sec*1000*1000*1000+app_start_time.tv_usec);
    
    //printf("delta time %ld.%ld seconds\n", delta/1000000000, delta%1000000000); 
    printf("delta %s seconds\n", time_end - time_start); 
    printf("read write times = %d\n", i);
    printf("average time=%d us\n", (time_end-time_start)*1000000/i);
    printf("failCnt=%d \n", failCnt);
    usb_close(dev);
    return 0;

#ifdef TEST_BULK_WRITE

#ifdef BENCHMARK_DEVICE
    ret = usb_control_msg(dev, USB_TYPE_VENDOR | USB_RECIP_DEVICE | USB_ENDPOINT_IN,
                          14, /* set/get test */
                          2,  /* test type    */
                          MY_INTF,  /* interface id */
                          tmp, 1, 1000);
#endif

#ifdef TEST_ASYNC
    // Running an async write test
    ret = transfer_bulk_async(dev, EP_OUT, tmp, sizeof(tmp), 5000);
#else
    // Running a sync write test
    ret = usb_bulk_write(dev, EP_OUT, tmp, sizeof(tmp), 5000);
#endif
    if (ret < 0)
    {
        printf("error writing:\n%s\n", usb_strerror());
    }
    else
    {
        printf("success: bulk write %d bytes\n", ret);
    }
#endif

#ifdef TEST_BULK_READ

#ifdef BENCHMARK_DEVICE
    ret = usb_control_msg(dev, USB_TYPE_VENDOR | USB_RECIP_DEVICE | USB_ENDPOINT_IN,
                          14, /* set/get test */
                          1,  /* test type    */
                          MY_INTF,  /* interface id */
                          tmp, 1, 1000);
#endif

#ifdef TEST_ASYNC
    // Running an async read test
    ret = transfer_bulk_async(dev, EP_IN, tmp, sizeof(tmp), 5000);
#else
    // Running a sync read test
    ret = usb_bulk_read(dev, EP_IN, tmp, sizeof(tmp), 5000);
#endif
    if (ret < 0)
    {
        printf("error reading:\n%s\n", usb_strerror());
    }
    else
    {
        printf("success: bulk read %d bytes\n", ret);
    }
#endif

#ifdef TEST_CLAIM_INTERFACE
    usb_release_interface(dev, 0);
#endif

    if (dev)
    {
        usb_close(dev);
    }
    printf("Done.\n");

    return 0;
}

/*
* Read/Write using async transfer functions.
*
* NOTE: This function waits for the transfer to complete essentially making
* it a sync transfer function so it only serves as an example of how one might
* implement async transfers into thier own code.
*/
static int transfer_bulk_async(usb_dev_handle *dev,
                               int ep,
                               char *bytes,
                               int size,
                               int timeout)
{
    // Each async transfer requires it's own context. A transfer
    // context can be re-used.  When no longer needed they must be
    // freed with usb_free_async().
    //
    void* async_context = NULL;
    int ret;

    // Setup the async transfer.  This only needs to be done once
    // for multiple submit/reaps. (more below)
    //
    ret = usb_bulk_setup_async(dev, &async_context, ep);
    if (ret < 0)
    {
        printf("error usb_bulk_setup_async:\n%s\n", usb_strerror());
        goto Done;
    }

    // Submit this transfer.  This function returns immediately and the
    // transfer is on it's way to the device.
    //
    ret = usb_submit_async(async_context, bytes, size);
    if (ret < 0)
    {
        printf("error usb_submit_async:\n%s\n", usb_strerror());
        usb_free_async(&async_context);
        goto Done;
    }

    // Wait for the transfer to complete.  If it doesn't complete in the
    // specified time it is cancelled.  see also usb_reap_async_nocancel().
    //
    ret = usb_reap_async(async_context, timeout);

    // Free the context.
    usb_free_async(&async_context);

Done:
    return ret;
}
