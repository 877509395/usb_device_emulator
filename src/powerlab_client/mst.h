#ifndef USB_MST_H
#define USB_MST_H
struct usb_device_desc {
         /* Hardware fields */
        char bLength;
        char bDescriptorType;
        short int bcdUSB;
        char bDeviceClass;
        char bDeviceSubClass;
        char bDeviceProtocol;
        char bMaxPacketSize;
        short int idVendor;
        short int idProduct;
        short int bcdDevice;
        char iManufacturer;
        char iProduct;
        char iSerialNumber;
        char bNumConfigurations;
} __attribute__ ((packed));

struct usbfs_ctrlcmd {
	/* keep in sync with usbdevice_fs.h:usbdevfs_ctrltransfer */
	uint8_t  bmRequestType;
	uint8_t  bRequest;
	uint16_t wValue;
	uint16_t wIndex;
	uint16_t wLength;
};


#endif /* USB_MST_H */

