cd c:\\Users\\jwang\\Desktop\\powerlab_client
gcc -Llibusb-win32-bin-1.2.6.0/lib/gcc -Ilibusb-win32-bin-1.2.6.0/include -lusb libusb-win32-bin-1.2.6.0/examples/bulk.c  -o PowerLabClient libusb-win32-bin-1.2.6.0/examples/app.c -lusb
