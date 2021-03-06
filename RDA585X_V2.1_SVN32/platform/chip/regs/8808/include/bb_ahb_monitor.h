//==============================================================================
//                                                                              
//            Copyright (C) 2003-2007, Coolsand Technologies, Inc.              
//                            All Rights Reserved                               
//                                                                              
//      This source code is the property of Coolsand Technologies and is        
//      confidential.  Any  modification, distribution,  reproduction or        
//      exploitation  of  any content of this file is totally forbidden,        
//      except  with the  written permission  of  Coolsand Technologies.        
//                                                                              
//==============================================================================
//                                                                              
//    THIS FILE WAS GENERATED FROM ITS CORRESPONDING XML VERSION WITH COOLXML.  
//                                                                              
//                       !!! PLEASE DO NOT EDIT !!!                             
//                                                                              
//  $HeadURL: http://svn.rdamicro.com/svn/developing1/Workspaces/aint/bv5_dev/platform/chip/regs/8808/include/bb_ahb_monitor.h $                                                                   
//  $Author: admin $                                                                    
//  $Date: 2010-07-07 20:28:03 +0800 (周三, 07 七月 2010) $                                                                      
//  $Revision: 269 $                                                                  
//                                                                              
//==============================================================================
//
/// @file
//
//==============================================================================

#ifndef _BB_AHB_MONITOR_H_
#define _BB_AHB_MONITOR_H_

#ifdef CT_ASM
#error "You are trying to use in an assembly code the normal H description of 'bb_ahb_monitor'."
#endif



// =============================================================================
//  MACROS
// =============================================================================

// =============================================================================
//  TYPES
// =============================================================================

// ============================================================================
// BB_AHB_MONITOR_T
// -----------------------------------------------------------------------------
/// 
// =============================================================================
#define REG_BB_AHB_MONITOR_BASE     0x01A1E000

typedef volatile struct
{
    REG32                          Control;                      //0x00000000
    REG32                          Access_Count;                 //0x00000004
    REG32                          Use;                          //0x00000008
    REG32                          Latency;                      //0x0000000C
} HWP_BB_AHB_MONITOR_T;

#define hwp_bbAhbMonitor            ((HWP_BB_AHB_MONITOR_T*) KSEG1(REG_BB_AHB_MONITOR_BASE))


//Control
#define BB_AHB_MONITOR_ENABLE       (1<<0)
#define BB_AHB_MONITOR_RECORD_SINGLE_SHOT (0<<4)
#define BB_AHB_MONITOR_RECORD_MULTI_SHOT (1<<4)
#define BB_AHB_MONITOR_ACCUMULATION_MODE_MEAN (0<<5)
#define BB_AHB_MONITOR_ACCUMULATION_MODE_MAX (1<<5)
#define BB_AHB_MONITOR_TARGET(n)    (((n)&15)<<8)
#define BB_AHB_MONITOR_TARGET_MASK  (15<<8)
#define BB_AHB_MONITOR_TARGET_SHIFT (8)
#define BB_AHB_MONITOR_TARGET_BB_BUS (0<<8)
#define BB_AHB_MONITOR_TARGET_BB_IFC (1<<8)
#define BB_AHB_MONITOR_TARGET_VOC   (2<<8)
#define BB_AHB_MONITOR_TARGET_BCPU  (3<<8)
#define BB_AHB_MONITOR_TARGET_BB_AHB2AHB (4<<8)
#define BB_AHB_MONITOR_TARGET_BB_MEM_EXT (5<<8)
#define BB_AHB_MONITOR_TARGET_BB_MEM_INT (6<<8)
#define BB_AHB_MONITOR_TARGET_BB_AHB2AHB_SLAVE (7<<8)
//#define BB_AHB_MONITOR_TARGET_BB_IFC (8<<8)
#define BB_AHB_MONITOR_TARGET_BB_VOC_SLAVE (9<<8)
#define BB_AHB_MONITOR_TARGET_BB_SRAM (10<<8)
#define BB_AHB_MONITOR_TARGET_SIGNAL_SELECT1 (11<<8)
#define BB_AHB_MONITOR_TIME_WINDOW(n) (((n)&7)<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_MASK (7<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_SHIFT (16)
#define BB_AHB_MONITOR_TIME_WINDOW_TW_1KC (0<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_TW_32KC (1<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_TW_1MC (2<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_TW_16MC (3<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_TW_1F (4<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_TW_26F (5<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_TW_52F (6<<16)
#define BB_AHB_MONITOR_TIME_WINDOW_TW_104F (7<<16)

//Access_Count
#define BB_AHB_MONITOR_ACCESS_COUNT(n) (((n)&0xFFFFFF)<<0)

//Use
#define BB_AHB_MONITOR_USE(n)       (((n)&0xFFFFFF)<<0)

//Latency
#define BB_AHB_MONITOR_LATENCY(n)   (((n)&0xFFFFFF)<<0)
#define BB_AHB_MONITOR_ACCESS_CNT(n) (((n)&0xFF)<<24)





#endif

