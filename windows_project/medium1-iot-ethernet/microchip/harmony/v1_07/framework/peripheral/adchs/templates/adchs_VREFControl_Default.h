/*******************************************************************************
  ADCHS Peripheral Library Template Implementation

  File Name:
    adchs_VREFControl_Default.h

  Summary:
    ADCHS PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : VREFControl
    and its Variant : Default
    For following APIs :
        PLIB_ADCHS_VREFIsReady
        PLIB_ADCHS_VREFFaultHasOccurred
        PLIB_ADCHS_VREFReadyInterruptEnable
        PLIB_ADCHS_VREFReadyInterruptDisable
        PLIB_ADCHS_VREFFaultInterruptEnable
        PLIB_ADCHS_VREFFaultInterruptDisable
        PLIB_ADCHS_ExistsVREFControl

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _ADCHS_VREFCONTROL_DEFAULT_H
#define _ADCHS_VREFCONTROL_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _ADCHS_VREF_READY_CHECK_VREG(index)
    _ADCHS_VREF_FAULT_CHECK_VREG(index)
    _ADCHS_VREF_READY_INTERRUPT_CONTROL_VREG(index)
    _ADCHS_VREF_FAULT_INTERRUPT_CONTROL_VREG(index)

  MASKs: 
    _ADCHS_VREF_READY_CHECK_MASK(index)
    _ADCHS_VREF_FAULT_CHECK_MASK(index)
    _ADCHS_VREF_READY_INTERRUPT_CONTROL_MASK(index)
    _ADCHS_VREF_FAULT_INTERRUPT_CONTROL_MASK(index)

  POSs: 
    _ADCHS_VREF_READY_CHECK_POS(index)
    _ADCHS_VREF_FAULT_CHECK_POS(index)
    _ADCHS_VREF_READY_INTERRUPT_CONTROL_POS(index)
    _ADCHS_VREF_FAULT_INTERRUPT_CONTROL_POS(index)

  LENs: 
    _ADCHS_VREF_READY_CHECK_LEN(index)
    _ADCHS_VREF_FAULT_CHECK_LEN(index)
    _ADCHS_VREF_READY_INTERRUPT_CONTROL_LEN(index)
    _ADCHS_VREF_FAULT_INTERRUPT_CONTROL_LEN(index)

*/


//******************************************************************************
/* Function :  ADCHS_VREFIsReady_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_VREFIsReady 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_VREFIsReady function.
*/

PLIB_TEMPLATE bool ADCHS_VREFIsReady_Default( ADCHS_MODULE_ID index )
{
	return _SFR_BIT_READ(_ADCHS_VREF_READY_CHECK_VREG(index),
						 _ADCHS_VREF_READY_CHECK_POS(index) );
}


//******************************************************************************
/* Function :  ADCHS_VREFFaultHasOccurred_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_VREFFaultHasOccurred 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_VREFFaultHasOccurred function.
*/

PLIB_TEMPLATE bool ADCHS_VREFFaultHasOccurred_Default( ADCHS_MODULE_ID index )
{
	return _SFR_BIT_READ(_ADCHS_VREF_FAULT_CHECK_VREG(index),
						 _ADCHS_VREF_FAULT_CHECK_POS(index) );
}


//******************************************************************************
/* Function :  ADCHS_VREFReadyInterruptEnable_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_VREFReadyInterruptEnable 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_VREFReadyInterruptEnable function.
*/

PLIB_TEMPLATE void ADCHS_VREFReadyInterruptEnable_Default( ADCHS_MODULE_ID index )
{
	_SFR_BIT_WRITE(_ADCHS_VREF_READY_INTERRUPT_CONTROL_VREG(index),
				 _ADCHS_VREF_READY_INTERRUPT_CONTROL_POS(index),
					1 );
}


//******************************************************************************
/* Function :  ADCHS_VREFReadyInterruptDisable_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_VREFReadyInterruptDisable 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_VREFReadyInterruptDisable function.
*/

PLIB_TEMPLATE void ADCHS_VREFReadyInterruptDisable_Default( ADCHS_MODULE_ID index )
{
	_SFR_BIT_WRITE(_ADCHS_VREF_READY_INTERRUPT_CONTROL_VREG(index),
				 _ADCHS_VREF_READY_INTERRUPT_CONTROL_POS(index),
					0 );
}


//******************************************************************************
/* Function :  ADCHS_VREFFaultInterruptEnable_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_VREFFaultInterruptEnable 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_VREFFaultInterruptEnable function.
*/

PLIB_TEMPLATE void ADCHS_VREFFaultInterruptEnable_Default( ADCHS_MODULE_ID index )
{
	_SFR_BIT_WRITE(_ADCHS_VREF_FAULT_INTERRUPT_CONTROL_VREG(index),
				 _ADCHS_VREF_FAULT_INTERRUPT_CONTROL_POS(index),
					1 );
}


//******************************************************************************
/* Function :  ADCHS_VREFFaultInterruptDisable_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_VREFFaultInterruptDisable 

  Description:
    This template implements the Default variant of the PLIB_ADCHS_VREFFaultInterruptDisable function.
*/

PLIB_TEMPLATE void ADCHS_VREFFaultInterruptDisable_Default( ADCHS_MODULE_ID index )
{
	_SFR_BIT_WRITE(_ADCHS_VREF_FAULT_INTERRUPT_CONTROL_VREG(index),
				 _ADCHS_VREF_FAULT_INTERRUPT_CONTROL_POS(index),
					0 );
}


//******************************************************************************
/* Function :  ADCHS_ExistsVREFControl_Default

  Summary:
    Implements Default variant of PLIB_ADCHS_ExistsVREFControl

  Description:
    This template implements the Default variant of the PLIB_ADCHS_ExistsVREFControl function.
*/

#define PLIB_ADCHS_ExistsVREFControl PLIB_ADCHS_ExistsVREFControl
PLIB_TEMPLATE bool ADCHS_ExistsVREFControl_Default( ADCHS_MODULE_ID index )
{
    return true;
}


#endif /*_ADCHS_VREFCONTROL_DEFAULT_H*/

/******************************************************************************
 End of File
*/

