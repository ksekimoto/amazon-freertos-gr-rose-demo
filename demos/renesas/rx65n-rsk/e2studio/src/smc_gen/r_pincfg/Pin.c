/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) . All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : Pin.c
* Version      : 1.0.2
* Device(s)    : R5F565NEDxFC
* Description  : This file implements SMC pin code generation.
* Creation Date: 2018-08-10
***********************************************************************************************************************/

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
/* Start user code for include. Do not edit comment generated here */
#include "Pin.h"
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Pins_Create
* Description  : This function initializes Smart Configurator pins
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/

void R_Pins_Create(void)
{
    R_BSP_RegisterProtectDisable(BSP_REG_PROTECT_MPC);

#if 0
    /* Set ET0_COL pin */
    MPC.PC7PFS.BYTE = 0x11U;
    PORTC.PMR.BYTE |= 0x80U;

    /* Set ET0_CRS pin */
    MPC.P83PFS.BYTE = 0x11U;
    PORT8.PMR.BYTE |= 0x08U;

    /* Set ET0_ERXD0 pin */
    MPC.P75PFS.BYTE = 0x11U;
    PORT7.PMR.BYTE |= 0x20U;

    /* Set ET0_ERXD1 pin */
    MPC.P74PFS.BYTE = 0x11U;
    PORT7.PMR.BYTE |= 0x10U;

    /* Set ET0_ERXD2 pin */
    MPC.PC1PFS.BYTE = 0x11U;
    PORTC.PMR.BYTE |= 0x02U;

    /* Set ET0_ERXD3 pin */
    MPC.PC0PFS.BYTE = 0x11U;
    PORTC.PMR.BYTE |= 0x01U;

    /* Set ET0_ETXD0 pin */
    MPC.P81PFS.BYTE = 0x11U;
    PORT8.PMR.BYTE |= 0x02U;

    /* Set ET0_ETXD1 pin */
    MPC.P82PFS.BYTE = 0x11U;
    PORT8.PMR.BYTE |= 0x04U;

    /* Set ET0_ETXD2 pin */
    MPC.PC5PFS.BYTE = 0x11U;
    PORTC.PMR.BYTE |= 0x20U;

    /* Set ET0_ETXD3 pin */
    MPC.PC6PFS.BYTE = 0x11U;
    PORTC.PMR.BYTE |= 0x40U;

    /* Set ET0_LINKSTA pin */
    MPC.P34PFS.BYTE = 0x11U;
    PORT3.PMR.BYTE |= 0x10U;

    /* Set ET0_MDC pin */
    MPC.P72PFS.BYTE = 0x11U;
    PORT7.PMR.BYTE |= 0x04U;

    /* Set ET0_MDIO pin */
    MPC.P71PFS.BYTE = 0x11U;
    PORT7.PMR.BYTE |= 0x02U;

    /* Set ET0_RX_CLK pin */
    MPC.P76PFS.BYTE = 0x11U;
    PORT7.PMR.BYTE |= 0x40U;

    /* Set ET0_RX_DV pin */
    MPC.PC2PFS.BYTE = 0x11U;
    PORTC.PMR.BYTE |= 0x04U;

    /* Set ET0_RX_ER pin */
    MPC.P77PFS.BYTE = 0x11U;
    PORT7.PMR.BYTE |= 0x80U;

    /* Set ET0_TX_CLK pin */
    MPC.PC4PFS.BYTE = 0x11U;
    PORTC.PMR.BYTE |= 0x10U;

    /* Set ET0_TX_EN pin */
    MPC.P80PFS.BYTE = 0x11U;
    PORT8.PMR.BYTE |= 0x01U;

    /* Set ET0_TX_ER pin */
    MPC.PC3PFS.BYTE = 0x11U;
    PORTC.PMR.BYTE |= 0x08U;

    /* Set RXD2 pin */
    MPC.P52PFS.BYTE = 0x0AU;
    PORT5.PMR.BYTE |= 0x04U;

    /* Set RXD8 pin */
    MPC.PJ1PFS.BYTE = 0x0AU;
    PORTJ.PMR.BYTE |= 0x02U;

    /* Set TXD2 pin */
    PORT5.PODR.BYTE |= 0x01U;
    MPC.P50PFS.BYTE = 0x0AU;
    PORT5.PDR.BYTE |= 0x01U;

    /* Set TXD8 pin */
    PORTJ.PODR.BYTE |= 0x04U;
    MPC.PJ2PFS.BYTE = 0x0AU;
    PORTJ.PDR.BYTE |= 0x04U;
#else
    /* Set ET0_MDC pin */
    MPC.PA4PFS.BYTE = 0x11U;
    PORTA.PMR.BYTE |= 0x10U;

    /* Set ET0_MDIO pin */
    MPC.PA3PFS.BYTE = 0x11U;
    PORTA.PMR.BYTE |= 0x08U;

    /* Set REF50CK0 pin */
    MPC.PB2PFS.BYTE = 0x12U;
    PORTB.PMR.BYTE |= 0x04U;

    /* Set RMII0_CRS_DV pin */
    MPC.PB7PFS.BYTE = 0x12U;
    PORTB.PMR.BYTE |= 0x80U;

    /* Set RMII0_RXD0 pin */
    MPC.PB1PFS.BYTE = 0x12U;
    PORTB.PMR.BYTE |= 0x02U;

    /* Set RMII0_RXD1 pin */
    MPC.PB0PFS.BYTE = 0x12U;
    PORTB.PMR.BYTE |= 0x01U;

    /* Set RMII0_RX_ER pin */
    MPC.PB3PFS.BYTE = 0x12U;
    PORTB.PMR.BYTE |= 0x08U;

    /* Set RMII0_TXD0 pin */
    MPC.PB5PFS.BYTE = 0x12U;
    PORTB.PMR.BYTE |= 0x20U;

    /* Set RMII0_TXD1 pin */
    MPC.PB6PFS.BYTE = 0x12U;
    PORTB.PMR.BYTE |= 0x40U;

    /* Set RMII0_TXD_EN pin */
    MPC.PB4PFS.BYTE = 0x12U;
    PORTB.PMR.BYTE |= 0x10U;

    /* Set RXD12 pin */
    MPC.PE2PFS.BYTE = 0x0CU;
    PORTE.PMR.BYTE |= 0x04U;

    /* Set TXD12 pin */
    PORTE.PODR.BYTE |= 0x02U;
    MPC.PE1PFS.BYTE = 0x0CU;
    PORTE.PDR.BYTE |= 0x02U;
#endif

    R_BSP_RegisterProtectEnable(BSP_REG_PROTECT_MPC);
}   

