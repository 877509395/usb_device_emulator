
SrcFiles=$(wildcard *.c)

ObjFiles=$(patsubst %.c,%.o,$(SrcFiles))

TARGET=bushound_data_format
all:$(TARGET)

$(TARGET):$(ObjFiles) FORCE
	gcc -g -o $@ -I ../include $(SrcFiles)
	./bushound_data_format ./checkformat.txt

%.o:%.c
	gcc -g -c -I ../include $<

.PHONY:clean all

clean:
	rm -f *.o
	rm -f $(TARGET)
	rm -f core-bus*
	rm -f build/*.o
	
install:
	cp -f build/app.c 	../../bsd_kernel_test/usb/libusb_test/powerlab_client/libusb-win32-bin-1.2.6.0/examples/
	
	cp -f build/device.c 	   ../../tools/stm3210x_bulk_inc1/User/
	cp -f build/device_data.h  ../../tools/stm3210x_bulk_inc1/User
	cp -f build/device_data.c  ../../tools/stm3210x_bulk_inc1/User


FORCE:
