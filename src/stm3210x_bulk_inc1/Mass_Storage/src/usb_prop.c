/**
  ******************************************************************************
  * @file    usb_prop.c
  * @author  MCD Application Team
  * @version V3.4.0
  * @date    29-June-2012
  * @brief   All processing related to Mass Storage Demo
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
#include "hw_config.h"
#include "usb_lib.h"
#include "usb_desc.h"
#include "usb_pwr.h"
#include "usb_bot.h"
#include "memory.h"
#include "mass_mal.h"
#include "usb_prop.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
//#ifdef USE_STM3210B_EVAL
// uint32_t Max_Lun = 0;
//#elif defined (USE_STM3210E_EVAL)
// uint32_t Max_Lun = 1;
//#elif defined (USE_STM3210C_EVAL)
// uint32_t Max_Lun = 0;
//#elif defined (USE_STM32L152_EVAL) || defined (USE_STM32L152D_EVAL)
 uint32_t Max_Lun = 0; 
//#endif

DEVICE Device_Table =
  {
    EP_NUM,
    1
  };

DEVICE_PROP Device_Property =
  {
    MASS_init,
    MASS_Reset,
    MASS_Status_In,
    MASS_Status_Out,
    MASS_Data_Setup,
    MASS_NoData_Setup,
    MASS_Get_Interface_Setting,
    MASS_GetDeviceDescriptor,
    MASS_GetConfigDescriptor,
    MASS_GetStringDescriptor,
    0,
   	0x40 /*MAX PACKET SIZE*/
  };

USER_STANDARD_REQUESTS User_Standard_Requests =
  {
    Mass_Storage_GetConfiguration,
    Mass_Storage_SetConfiguration,
    Mass_Storage_GetInterface,
    Mass_Storage_SetInterface,
    Mass_Storage_GetStatus,
    Mass_Storage_ClearFeature,
    Mass_Storage_SetEndPointFeature,
    Mass_Storage_SetDeviceFeature,
    Mass_Storage_SetDeviceAddress
  };
const uint8_t MASS_DeviceDescriptor[] =
{
        0x12,   //length
        0x01,   //device descriptor
        0x00,   //bcdUSB version 2.00.below two
        0x02,
        0xFF,   //device class
        0x00,   //device sub class
        0xFF,   //protocol
        0x40,   //bMaxPacketSize0
        0xEC,   //vender id. below two.
        0x06, 
        0x01,   //product id. below two
        0x00, 
        0x01,   //bcd below two bytes.
        0x01,   
        0x01,   //index of string Manufacturer
        0x02,   //index of string descripting product
        0x03,   //device string descriptor
        0x01    //number of configuration
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
    0x81, //endpoint address
    0x02, //Bulk endpoint.
    0x00, //
    0x02, //maxpackage 256
    0x00, //unused for non-iso endpoint.
        //endpoint
    0x07, //length of endpoint descritpor
    0x05, //descriptor type: endpoint
    0x02, //endpoint address
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



ONE_DESCRIPTOR Device_Descriptor =
  {
    (uint8_t*)MASS_DeviceDescriptor,
    sizeof(MASS_DeviceDescriptor)
  };

ONE_DESCRIPTOR Config_Descriptor =
  {
    (uint8_t*)MASS_ConfigDescriptor,
    sizeof(MASS_ConfigDescriptor)
  };

#if 0
ONE_DESCRIPTOR String_Descriptor[5] =
  {
    {(uint8_t*)MASS_StringLangID, MASS_SIZ_STRING_LANGID},
    {(uint8_t*)MASS_StringVendor, MASS_SIZ_STRING_VENDOR},
    {(uint8_t*)MASS_StringProduct, MASS_SIZ_STRING_PRODUCT},
    {(uint8_t*)MASS_StringSerial, MASS_SIZ_STRING_SERIAL},
    {(uint8_t*)MASS_StringInterface, MASS_SIZ_STRING_INTERFACE},
  };
#endif

uint8_t string0[] = {
    0x06,
    0x03,
    0x09,
    0x00,
    0x09,
    0x04
};

uint8_t string1[] = {
    0x1C,
    0x03,
    0x41,
    0x00,
    0x44,
    0x00,
    0x49,
    0x00,
    0x6E,
    0x00,
    0x73,
    0x00,
    0x74,
    0x00,
    0x72,
    0x00,
    0x75,
    0x00,
    0x6D,
    0x00,
    0x65,
    0x00,
    0x6E,
    0x00,
    0x74,
    0x00,
    0x73,
    0x00
};

uint8_t string2[] = {
    0x1C,
    0x03,
    0x50,
    0x00,
    0x6F,
    0x00,
    0x77,
    0x00,
    0x65,
    0x00,
    0x72,
    0x00,
    0x4C,
    0x00,
    0x61,
    0x00,
    0x62,
    0x00,
    0x20,
    0x00,
    0x34,
    0x00,
    0x2F,
    0x00,
    0x32,
    0x00,
    0x35,
    0x00
};

uint8_t string3[] = {
    0x12,
    0x03,
    0x34,
    0x00,
    0x32,
    0x00,
    0x35,
    0x00,
    0x2D,
    0x00,
    0x30,
    0x00,
    0x31,
    0x00,
    0x37,
    0x00,
    0x30,
    0x00
};


ONE_DESCRIPTOR String_Descriptor[] = 
{
	{(uint8_t*)string0, sizeof(string0)},
	{(uint8_t*)string1, sizeof(string1)},
	{(uint8_t*)string2, sizeof(string2)},
	{(uint8_t*)string3, sizeof(string3)}
};


/* Extern variables ----------------------------------------------------------*/
extern unsigned char Bot_State;
extern Bulk_Only_CBW CBW;

/* Private function prototypes -----------------------------------------------*/
/* Extern function prototypes ------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/*******************************************************************************
* Function Name  : MASS_init
* Description    : Mass Storage init routine.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void MASS_init()
{
  /* Update the serial number string descriptor with the data from the unique
  ID*/
  Get_SerialNum();

  pInformation->Current_Configuration = 0;

  /* Connect the device */
  PowerOn();

  /* Perform basic device initialization operations */
  USB_SIL_Init();

  bDeviceState = UNCONNECTED;
}

/*******************************************************************************
* Function Name  : MASS_Reset
* Description    : Mass Storage reset routine.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void MASS_Reset()
{
  /* Set the device as not configured */
  Device_Info.Current_Configuration = 0;

  /* Current Feature initialization */
  pInformation->Current_Feature = MASS_ConfigDescriptor[7];

#ifdef STM32F10X_CL   
  
  /* EP0 is already configured by USB_SIL_Init() function */

  /* Init EP1 IN as Bulk endpoint */
  OTG_DEV_EP_Init(EP1_IN, OTG_DEV_EP_TYPE_BULK, BULK_MAX_PACKET_SIZE);
  
  /* Init EP2 OUT as Bulk endpoint */
  OTG_DEV_EP_Init(EP2_OUT, OTG_DEV_EP_TYPE_BULK, BULK_MAX_PACKET_SIZE); 
  
#else 

  SetBTABLE(BTABLE_ADDRESS);

  /* Initialize Endpoint 0 */
  SetEPType(ENDP0, EP_CONTROL);
  SetEPTxStatus(ENDP0, EP_TX_NAK);
  SetEPRxAddr(ENDP0, ENDP0_RXADDR);
  SetEPRxCount(ENDP0, Device_Property.MaxPacketSize);
  SetEPTxAddr(ENDP0, ENDP0_TXADDR);
  Clear_Status_Out(ENDP0);
  SetEPRxValid(ENDP0);

  /* Initialize Endpoint 1 */
  SetEPType(ENDP1, EP_BULK);
  SetEPTxAddr(ENDP1, ENDP1_TXADDR);
  SetEPTxStatus(ENDP1, EP_TX_NAK);
  SetEPRxStatus(ENDP1, EP_RX_DIS);

  /* Initialize Endpoint 2 */
  SetEPType(ENDP2, EP_BULK);
  SetEPRxAddr(ENDP2, ENDP2_RXADDR);
  SetEPRxCount(ENDP2, Device_Property.MaxPacketSize);
  SetEPRxStatus(ENDP2, EP_RX_VALID);
  SetEPTxStatus(ENDP2, EP_TX_DIS);

  /****************/




  SetEPRxCount(ENDP0, Device_Property.MaxPacketSize);
  SetEPRxValid(ENDP0);

  /* Set the device to response on default address */
  SetDeviceAddress(0);
#endif /* STM32F10X_CL */

  bDeviceState = ATTACHED;

  CBW.dSignature = BOT_CBW_SIGNATURE;
  Bot_State = BOT_IDLE;

//  USB_NotConfigured_LED();
}

/*******************************************************************************
* Function Name  : Mass_Storage_SetConfiguration
* Description    : Handle the SetConfiguration request.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void Mass_Storage_SetConfiguration(void)
{
  if (pInformation->Current_Configuration != 0)
  {
    /* Device configured */
    bDeviceState = CONFIGURED;

#ifdef STM32F10X_CL 
    /* Init EP1 IN as Bulk endpoint */
    OTG_DEV_EP_Init(EP1_IN, OTG_DEV_EP_TYPE_BULK, BULK_MAX_PACKET_SIZE);
  
    /* Init EP2 OUT as Bulk endpoint */
    OTG_DEV_EP_Init(EP2_OUT, OTG_DEV_EP_TYPE_BULK, BULK_MAX_PACKET_SIZE);     
#else    
    ClearDTOG_TX(ENDP1);
    ClearDTOG_RX(ENDP2);
#endif /* STM32F10X_CL */

    Bot_State = BOT_IDLE; /* set the Bot state machine to the IDLE state */
  }
  Set_CSW(0,1);
}

/*******************************************************************************
* Function Name  : Mass_Storage_ClearFeature
* Description    : Handle the ClearFeature request.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void Mass_Storage_ClearFeature(void)
{
  /* when the host send a CBW with invalid signature or invalid length the two
     Endpoints (IN & OUT) shall stall until receiving a Mass Storage Reset     */
  if (CBW.dSignature != BOT_CBW_SIGNATURE)
    Bot_Abort(BOTH_DIR);
}

/*******************************************************************************
* Function Name  : Mass_Storage_SetConfiguration.
* Description    : Update the device state to addressed.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void Mass_Storage_SetDeviceAddress (void)
{
  bDeviceState = ADDRESSED;
}
/*******************************************************************************
* Function Name  : MASS_Status_In
* Description    : Mass Storage Status IN routine.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void MASS_Status_In(void)
{
  return;
}

/*******************************************************************************
* Function Name  : MASS_Status_Out
* Description    : Mass Storage Status OUT routine.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void MASS_Status_Out(void)
{
  return;
}

/*******************************************************************************
* Function Name  : MASS_Data_Setup.
* Description    : Handle the data class specific requests..
* Input          : RequestNo.
* Output         : None.
* Return         : RESULT.
*******************************************************************************/
RESULT MASS_Data_Setup(uint8_t RequestNo)
{
  uint8_t    *(*CopyRoutine)(uint16_t);

  CopyRoutine = NULL;
  if ((Type_Recipient == (CLASS_REQUEST | INTERFACE_RECIPIENT))
      && (RequestNo == GET_MAX_LUN) && (pInformation->USBwValue == 0)
      && (pInformation->USBwIndex == 0) && (pInformation->USBwLength == 0x01))
  {
    CopyRoutine = Get_Max_Lun;
  }
  else
  {
    return USB_UNSUPPORT;
  }

  if (CopyRoutine == NULL)
  {
    return USB_UNSUPPORT;
  }

  pInformation->Ctrl_Info.CopyData = CopyRoutine;
  pInformation->Ctrl_Info.Usb_wOffset = 0;
  (*CopyRoutine)(0);

  return USB_SUCCESS;

}

/*******************************************************************************
* Function Name  : MASS_NoData_Setup.
* Description    : Handle the no data class specific requests.
* Input          : RequestNo.
* Output         : None.
* Return         : RESULT.
*******************************************************************************/
RESULT MASS_NoData_Setup(uint8_t RequestNo)
{
  if ((Type_Recipient == (CLASS_REQUEST | INTERFACE_RECIPIENT))
      && (RequestNo == MASS_STORAGE_RESET) && (pInformation->USBwValue == 0)
      && (pInformation->USBwIndex == 0) && (pInformation->USBwLength == 0x00))
  {
   #ifdef STM32F10X_CL 
    /* Init EP1 IN as Bulk endpoint */
    OTG_DEV_EP_Init(EP1_IN, OTG_DEV_EP_TYPE_BULK, BULK_MAX_PACKET_SIZE);
  
    /* Init EP2 OUT as Bulk endpoint */
    OTG_DEV_EP_Init(EP2_OUT, OTG_DEV_EP_TYPE_BULK, BULK_MAX_PACKET_SIZE);     
   #else
    /* Initialize Endpoint 1 */
    ClearDTOG_TX(ENDP1);

    /* Initialize Endpoint 2 */
    ClearDTOG_RX(ENDP2);
   #endif /* STM32F10X_CL */

    /*initialize the CBW signature to enable the clear feature*/
    CBW.dSignature = BOT_CBW_SIGNATURE;
    Bot_State = BOT_IDLE;

    return USB_SUCCESS;
  }
  return USB_UNSUPPORT;
}

/*******************************************************************************
* Function Name  : MASS_Get_Interface_Setting
* Description    : Test the interface and the alternate setting according to the
*                  supported one.
* Input          : uint8_t Interface, uint8_t AlternateSetting.
* Output         : None.
* Return         : RESULT.
*******************************************************************************/
RESULT MASS_Get_Interface_Setting(uint8_t Interface, uint8_t AlternateSetting)
{
  if (AlternateSetting > 0)
  {
    return USB_UNSUPPORT;/* in this application we don't have AlternateSetting*/
  }
  else if (Interface > 0)
  {
    return USB_UNSUPPORT;/*in this application we have only 1 interfaces*/
  }
  return USB_SUCCESS;
}

/*******************************************************************************
* Function Name  : MASS_GetDeviceDescriptor
* Description    : Get the device descriptor.
* Input          : uint16_t Length.
* Output         : None.
* Return         : None.
*******************************************************************************/
uint8_t *MASS_GetDeviceDescriptor(uint16_t Length)
{
  return Standard_GetDescriptorData(Length, &Device_Descriptor );
}

/*******************************************************************************
* Function Name  : MASS_GetConfigDescriptor
* Description    : Get the configuration descriptor.
* Input          : uint16_t Length.
* Output         : None.
* Return         : None.
*******************************************************************************/
uint8_t *MASS_GetConfigDescriptor(uint16_t Length)
{
  return Standard_GetDescriptorData(Length, &Config_Descriptor );
}

/*******************************************************************************
* Function Name  : MASS_GetStringDescriptor
* Description    : Get the string descriptors according to the needed index.
* Input          : uint16_t Length.
* Output         : None.
* Return         : None.
*******************************************************************************/
uint8_t *MASS_GetStringDescriptor(uint16_t Length)
{
  uint8_t wValue0 = pInformation->USBwValue0;

  if (wValue0 > 5)
  {
    return NULL;
  }
  else
  {
    return Standard_GetDescriptorData(Length, &String_Descriptor[wValue0]);
  }
}

/*******************************************************************************
* Function Name  : Get_Max_Lun
* Description    : Handle the Get Max Lun request.
* Input          : uint16_t Length.
* Output         : None.
* Return         : None.
*******************************************************************************/
uint8_t *Get_Max_Lun(uint16_t Length)
{
  if (Length == 0)
  {
    pInformation->Ctrl_Info.Usb_wLength = LUN_DATA_LENGTH;
    return 0;
  }
  else
  {
    return((uint8_t*)(&Max_Lun));
  }
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
