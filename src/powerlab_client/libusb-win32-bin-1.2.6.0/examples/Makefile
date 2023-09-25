#
CPU	= i386

INCLUDE	= -I. -I ../ -L. -I../include

CFLAGS	= -g $(INCLUDE) -pthread

#FTP	= $(HOME)/wnos/shadow/test
FTP	= $(HOME)/wnos/shadow/i386/test

AP_OBJS = bulk.o
#WTOS_LIBS = libusb-1.0.a
all:	libusb_test

#	sample WTOS event thread, linked with libwtos.a

libusb_test:	$(AP_OBJS)
	$(CC) $(CFLAGS) $(WFLAGS) -g -o libusb_test $(AP_OBJS) $(WTOS_LIBS)  -lrt 
#cp $@ $(FTP)
	rm -f *.o

clean:
	rm -f libusb_test *.o
