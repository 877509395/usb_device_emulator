#ifndef USB_H
#define USB_H

//type 
#define RQIN	0x80
#define RQOUT	0x00
#define RQZRO	0x00
#define RQSTD	0x00
#define RQCLASS	0x20
#define RQVEND	0x40

//recipient
#define RQDEV 0x00
#define RQINT 0x01
#define RQEP  0x02
#define RQOTHER 0x03

//class  set/get
#define SET_CLASS (RQOUT | RQCLASS | RQINT)
#define GET_CLASS (RQIN  | RQCLASS | RQINT)

//interface set/get
#define SET_INTER (RQOUT | RQSTD | RQINT)
#define GET_INTER (RQIN  | RQSTD | RQINT)

//device set/get
#define SET_DEVICE (RQOUT | RQDEV | RQSTD)
#define GET_DEVICE (RQIN  | RQDEV | RQSTD)

//feature selector
#define USB_ENDPOINT_HALT		0
#define USB_DEVICE_REMOTE_WAKEUP	1
#define USB_TEST_MODE			2

#define USB_CFG_SELF_POWER	(1 << 6)
#define USB_CFG_REMOTE_WAKEUP	(1 << 5)

// Mask on endpoint number
#define ENDPT_IN	0x80
#define ENDPT_OUT	0x00

// Endpoint type
#define ENDPT_CTRL	0
#define ENDPT_ISOCH	1
#define ENDPT_BULK	2
#define ENDPT_INTR	3

//device attributes
#define BUS_POWER	0x80
#define EXTERNAL_POWER  0x40

//endpoint request
#define RQENP (u_char) 0x02
#define GET_STATUS (u_char) 0x0
#define CLEAR_FEATURE (u_char) 0x1
#define SET_FEATURE (u_char) 0x3
#define SET_ADDRESS (u_char) 0x5
#define GET_DESCRIPTOR (u_char) 0x6
#define SET_DESCRIPTOR (u_char) 0x7
#define GET_CONFIGURATION (u_char) 0x8
#define SET_CONFIGURATION (u_char) 0x9
#define GET_INTERFACE (u_char) 0xa
#define SET_INTERFACE (u_char) 0xb
#define SYNC_FRAME (u_char) 0xc

// *********************************************************
//USB descriptor types requests Table9-5

#define USB_DEVICE 	1
#define USB_CONFIG 	2
#define USB_STRING 	3
#define USB_INTERF	4
#define USB_ENDPNT	5

// *********************************************************
// USB Device classes
#define USB_CLASS_AUDIO 	1
#define USB_CLASS_COMM		2       /* Communications: modem,network...*/
#define USB_CLASS_HID		3
#define USB_CLASS_PRINTER	7
#define USB_CLASS_HUB		9
#define USB_CLASS_DATA		0x0a    /* Data pipe of modem. */
#define USB_CLASS_CCID		0xb
#define USB_CLASS_DFU		0xfe    /* Device Firmware Upgrade */

#define USB_PRINTER_SUBCLASS_PRINTER	1
#define USB_PRINTER_UNIDIRECTIONAL	1
#define USB_PRINTER_BIDIRECTIONAL	2
#define USB_PRINTER_IEEE1284		3

#define USB_SUBCLASS_CCID	0
#define USB_PROTO_CCID		0
#define USB_SUBCLASS_ACTIVCARD	1
#define USB_PROTO_ACTIVCARD	1

#define USB_SUBCLASS_ACM	2
#define USB_PROTO_AT_CMD	1

#define	MAX_USB_ADDR		127

/* USB 2.0 Section 9.1.2 "Bus Enumeration" requires at least 100ms delay
   for power stabilization. */
#define USB_MIN_POWER_DELAY	10 /* in units of 10ms */

#endif /* USB_H_ */
