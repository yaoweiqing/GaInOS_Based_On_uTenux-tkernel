/*
* Configuration of module: Com (Com_PbCfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.7
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 2)) )
#error Com: Configuration file expected BSW module version to be 1.2.*
#endif

#ifndef COM_PBCFG_H
#define COM_PBCFG_H

#include "Com_Types.h"

extern const Com_ConfigType ComConfiguration;

//  COM Polite Defines.
#define COM_PDU_ID_FreqInd		0
#define COM_PDU_ID_FreqReq		1



// PDU group definitions
#define ComPduGroup 0


// Signal definitions
#define FreqIndSig 0
#define FreqReqSig 1



// Notifications



// Callouts
extern boolean IncommingFreqReq(PduIdType PduId, const uint8 *IPduData);


#endif /* COM_PBCFG_H */
