/**
  ******************************************************************************
  * @file    usb_desc.c
  * @author  MCD Application Team
  * @version V3.4.0
  * @date    29-June-2012
  * @brief   Descriptors for Mass Storage Device
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */


/* Includes ------------------------------------------------------------------*/
#include "usb_desc.h"

const uint8_t MASS_DeviceDescriptor[] =
{
	0x12, 	//length
	0x01, 	//device descriptor
	0x00, 	//bcdUSB version 2.00.below two
	0x02,
	0xFF,	//device class
	0x00, 	//device sub class
	0xFF, 	//protocol
	0x40,   //bMaxPacketSize0
	0xEC,   //vender id. below two.
	0x06, 
	0x01, 	//product id. below two
	0x00, 
	0x01, 	//bcd below two bytes.
	0x01, 	
	0x01,	//index of string Manufacturer
	0x02,	//index of string descripting product
	0x03,   //device string descriptor
	0x01  	//number of configuration
};

const uint8_t MASS_ConfigDescriptor[] =
{
    //configuration desc
    0x09, //length of configuration descriptor 
    0x02, //descript type: configuration.
    0x20, //total length: not correct.
    0x00, // 
    0x01, //interface number.
    0x01, //configuration value.
    0x00, //index of string decriptor, describing the configuration.
    0xC0, //bmAttributes
    0x00, //max power 0ma
	//interface
    0x09, //length of interface descriptor
    0x04, //type: interface
    0x00, //interface number
    0x00, //bAlternateSetting
    0x02, //number of endpoint
    0xFF, //interface class:
    0x00, //interface sub class 
    0xFF, //interface protocol
    0x00, //index of string descritpor this interface.
	//endpint
    0x07, //length of endpoint descriptor.
    0x05, //descriptor type: endpoint
    0x83, //endpoint address
    0x02, //Bulk endpoint.
    0x00, //
    0x02, //maxpackage 256
    0x00, //unused for non-iso endpoint.
	//endpoint
    0x07, //length of endpoint descritpor
    0x05, //descriptor type: endpoint
    0x04, //endpoint address
    0x02, //Bulk 
    0x00, 
    0x02, //max package size
    0x00, //unused for non iso endpoint
	  //
    0x12,
    0x01,
    0x00,
    0x02,
    0xFF,
    0x00,
    0xFF
};
