////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//            Copyright (C) 2003-2007, Coolsand Technologies, Inc.            //
//                            All Rights Reserved                             //
//                                                                            //
//      This source code is the property of Coolsand Technologies and is      //
//      confidential.  Any  modification, distribution,  reproduction or      //
//      exploitation  of  any content of this file is totally forbidden,      //
//      except  with the  written permission  of  Coolsand Technologies.      //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  $HeadURL: http://svn.rdamicro.com/svn/developing1/Workspaces/aint/bv5_dev/platform/chip/hal/src/halp_comregs.h $ //
//    $Author: admin $                                                        // 
//    $Date: 2010-07-07 20:28:03 +0800 (星期三, 07 七月 2010) $                     //   
//    $Revision: 269 $                                                          //   
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
/// @file halp_comregs.h                                                      //
/// Definition of the private functions of Garnet's comregs Driver            //
/// Caution: This file is strictly confidential!!!                                                                         //
//////////////////////////////////////////////////////////////////////////////// 

#ifndef  _HALP_COMREGS_H_
#define  _HALP_COMREGS_H_

#include "cs_types.h"

// =============================================================================
// hal_ComregsIrqHandler
// -----------------------------------------------------------------------------
/// Clear the IRQ and call the IRQ handler user function.
/// @param interrupt_id Enables to choose one of the two interrupt 
///     lines (\c comregs0_irq or comregs1_irq)
// =============================================================================
PROTECTED VOID hal_ComregsIrqHandler (UINT8 interruptId);

// =============================================================================
// hal_ComregsSetMask
// -----------------------------------------------------------------------------
/// Configure the comregs module IRQ mask
/// @param interrupt_id Enables to choose one of the two interrupt 
///     lines (\c comregs0_irq or comregs1_irq)
// =============================================================================
//PROTECTED VOID hal_ComregsSetMask(UINT8 interrupt_id, UINT16 mask);

#endif // HAL_comregs_IRQ_H
