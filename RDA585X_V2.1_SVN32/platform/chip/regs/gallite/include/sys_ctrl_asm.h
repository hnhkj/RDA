#ifndef _SYS_CTRL_ASM_H_
#define _SYS_CTRL_ASM_H_

//THIS FILE HAS BEEN GENERATED WITH COOLWATCHER. PLEASE EDIT WITH CARE !

#ifndef CT_ASM
#error "You are trying to use in a normal C code the assembly H description of 'sys_ctrl'."
#endif

#include "globals_asm.h"

/// CPU IDs
#define XCPU                                     (0)
#define BCPU                                     (1)
/// System side System clocks
#define SYS_XCPU                                 (0)
#define SYS_XCPU_INT                             (1)
#define NB_SYS_CLK_XCPU                          (2)
#define SYS_PCLK_CONF                            (2)
#define SYS_PCLK_DATA                            (3)
#define SYS_AMBA                                 (4)
#define SYS_DMA                                  (5)
#define SYS_GOUDA                                (6)
#define SYS_EBC                                  (7)
#define SYS_IFC_CH0                              (8)
#define SYS_IFC_CH1                              (9)
#define SYS_IFC_CH2                              (10)
#define SYS_IFC_CH3                              (11)
#define SYS_IFC_CH4                              (12)
#define SYS_IFC_CH5                              (13)
#define SYS_IFC_CH6                              (14)
#define SYS_IFC_CH7                              (15)
#define SYS_IFC_DBG                              (16)
#define SYS_A2A                                  (17)
#define SYS_COM_REGS                             (18)
#define SYS_DEBUG_UART                           (19)
#define SYS_DBGHST                               (20)
#define SYS_GPADC                                (21)
/// System side divided clock (either divided by module or by sys_ctrl)
#define SYSD_SCI                                 (22)
#define SYSD_RF_SPI                              (23)
#define SYSD_OSC                                 (24)
#define SYSD_PWM                                 (25)
#define NB_SYS_CLK_AEN                           (26)
/// the following don't have an auto enable
#define SYS_GPIO                                 (26)
#define SYS_IRQ                                  (27)
#define SYS_TCU                                  (28)
#define SYS_TIMER                                (29)
#define NB_SYS_CLK_EN                            (30)
/// the following are sharing their enable
#define SYS_SCI                                  (30)
/// keep last
#define SYS_NOGATE                               (31)
#define NB_SYS_CLK                               (32)
/// System side System clocks for Peripherals
#define PER_UART                                 (0)
#define PER_UART2                                (1)
#define PER_I2C                                  (2)
#define PER_I2C2                                 (3)
#define PER_I2C3                                 (4)
#define PER_SDMMC                                (5)
#define PER_CAMERA                               (6)
/// System side divided clock (either divided by module or by sys_ctrl)
#define PERD_SPI1                                (7)
#define PERD_SPI2                                (8)
#define PERD_SPI3                                (9)
#define NB_PER_CLK_AEN                           (10)
#define PER_USBC                                 (10)
#define PER_SPY                                  (11)
#define PER_TEST                                 (12)
#define NB_PER_CLK_EN                            (13)
#define NB_PER_CLK                               (13)
/// Baseband side System clocks
#define BB_BCPU                                  (0)
#define BB_BCPU_INT                              (1)
#define BB_AMBA                                  (2)
#define BB_PCLK_CONF                             (3)
#define BB_PCLK_DATA                             (4)
#define BB_VOC_AHB                               (5)
#define BB_IFC_CH0                               (6)
#define BB_IFC_CH1                               (7)
#define BB_IFC_CH2                               (8)
#define BB_IFC_CH3                               (9)
#define BB_SRAM                                  (10)
#define BB_A2A                                   (11)
#define BB_ITLV                                  (12)
#define BB_VITERBI                               (13)
#define BB_CIPHER                                (14)
#define BB_RF_IF                                 (15)
#define BB_COPRO                                 (16)
#define BB_CP2_REG                               (17)
#define BB_XCOR                                  (18)
#define BB_AIF                                   (19)
/// Baseband side divided clock
/// divided BCK clock for DAI
#define BBD_DAIS_208K                            (20)
#define NB_BB_CLK_AEN                            (21)
/// the following don't have an auto enable
#define BB_IRQ                                   (21)
#define NB_BB_CLK_EN                             (22)
#define NB_BB_CLK                                (22)
/// Other clocks
/// clocks with auto enble
/// the debug host clock auto enable is not used in host mode, only in uart mode
#define OC_HOST_UART                             (0)
#define OC_DEBUG_UART                            (0)
#define OC_26M_GPADC                             (1)
#define OC_BCK                                   (2)
#define OC_UART                                  (3)
#define OC_UART2                                 (4)
#define OC_RF_RX                                 (5)
#define OC_RF_TX                                 (6)
#define OC_MEM_BRIDGE                            (7)
#define NB_OTHER_CLK_VOC_AEN_SYNC                (8)
#define OC_VOC_CORE                              (8)
#define OC_VOC_AHB                               (9)
#define OC_VOC_DAI                               (10)
#define NB_OTHER_CLK_AEN                         (11)
/// the following don't have an auto enable
#define OC_VOC                                   (11)
#define OC_LPS                                   (12)
#define OC_GPIO                                  (13)
#define OC_USBPHY                                (14)
#define OC_PIX                                   (15)
#define OC_CLK_OUT                               (16)
#define OC_MEM_CLK_OUT                           (17)
#define OC_DBG                                   (18)
#define NB_OTHER_CLK_EN                          (19)
#define NB_OTHER_CLK                             (19)
/// System side resets
#define RST_XCPU                                 (0)
#define RST_SYS_IRQ                              (1)
#define RST_SYS_A2A                              (2)
#define RST_ABB                                  (3)
#define RST_DMA                                  (4)
#define RST_GOUDA                                (5)
#define RST_TIMER                                (6)
#define RST_TCU                                  (7)
#define RST_GPIO                                 (8)
#define RST_KEYPAD                               (9)
#define RST_PWM                                  (10)
#define RST_UART                                 (11)
#define RST_UART2                                (12)
#define RST_SPI1                                 (13)
#define RST_SPI2                                 (14)
#define RST_SPI3                                 (15)
#define RST_RF_SPI                               (16)
#define RST_SCI                                  (17)
#define RST_SPY                                  (18)
#define RST_I2C                                  (19)
#define RST_I2C2                                 (20)
#define RST_I2C3                                 (21)
#define RST_MEM_BRIDGE                           (22)
#define RST_GPADC                                (23)
#define RST_EXT_APB                              (24)
#define RST_SDMMC                                (25)
#define RST_CAMERA                               (26)
#define RST_USBC                                 (27)
#define RST_USBPHY                               (28)
#define RST_DBG                                  (29)
#define NB_SRST                                  (30)
/// Baseband side resets
#define BOUND_BRST_FIRST                         (30)
#define RST_BCPU                                 (30)
#define RST_BB_IRQ                               (31)
#define RST_BB_A2A                               (32)
#define RST_BB_IFC                               (33)
#define RST_BB_SRAM                              (34)
#define RST_ITLV                                 (35)
#define RST_VITERBI                              (36)
#define RST_CIPHER                               (37)
#define RST_XCOR                                 (38)
#define RST_COPRO                                (39)
#define RST_RF_IF                                (40)
#define RST_VOC                                  (41)
#define RST_AIF                                  (42)
#define RST_DAI                                  (43)
#define BOUND_BRST_AFTER                         (44)
#define RST_BB_FULL                              (44)
/// The following reset does not have register
#define NR_RST_REG                               (45)
#define RST_SYS_FULL                             (45)
#define NB_RST                                   (46)
#define NB_BRST                                  (BOUND_BRST_AFTER-BOUND_BRST_FIRST)
/// Reset Other : resync on corresponding clock other
#define RSTO_DBG_HOST                            (0)
#define RSTO_GPADC                               (1)
#define RSTO_BCK                                 (2)
#define RSTO_UART                                (3)
#define RSTO_UART2                               (4)
#define BOUND_RSTO_RF_FIRST                      (5)
#define RSTO_RF_RX                               (5)
#define RSTO_RF_TX                               (6)
#define BOUND_RSTO_RF_AFTER                      (7)
#define RSTO_MEM_BRIDGE                          (7)
#define RSTO_DBG                                 (8)
#define RSTO_VOC_DAI                             (9)
#define RSTO_VOC                                 (10)
#define RSTO_LPS                                 (11)
#define RSTO_GPIO                                (12)
#define RSTO_WDTIMER                             (13)
#define RSTO_USBPHY                              (14)
#define NB_RSTO                                  (15)
/// For REG_DBG protect lock/unlock value
#define SYS_CTRL_PROTECT_LOCK                    (0XA50000)
#define SYS_CTRL_PROTECT_UNLOCK                  (0XA50001)

//==============================================================================
// Cpu_Id
//------------------------------------------------------------------------------
/// 
//==============================================================================



//==============================================================================
// Sys_Clks
//------------------------------------------------------------------------------
/// 
//==============================================================================



//==============================================================================
// Per_Clks
//------------------------------------------------------------------------------
/// 
//==============================================================================



//==============================================================================
// BB_Clks
//------------------------------------------------------------------------------
/// 
//==============================================================================



//==============================================================================
// Other_Clks
//------------------------------------------------------------------------------
/// 
//==============================================================================



//==============================================================================
// Resets
//------------------------------------------------------------------------------
/// 
//==============================================================================



//==============================================================================
// Reset_Others
//------------------------------------------------------------------------------
/// 
//==============================================================================



//==============================================================================
// sys_ctrl
//------------------------------------------------------------------------------
/// 
//==============================================================================
#define REG_SYS_CTRL_BASE           0x01A00000

#define REG_SYS_CTRL_BASE_HI        BASE_HI(REG_SYS_CTRL_BASE)
#define REG_SYS_CTRL_BASE_LO        BASE_LO(REG_SYS_CTRL_BASE)

#define REG_SYS_CTRL_REG_DBG        REG_SYS_CTRL_BASE_LO + 0x00000000
#define REG_SYS_CTRL_SYS_RST_SET    REG_SYS_CTRL_BASE_LO + 0x00000004
#define REG_SYS_CTRL_SYS_RST_CLR    REG_SYS_CTRL_BASE_LO + 0x00000008
#define REG_SYS_CTRL_BB_RST_SET     REG_SYS_CTRL_BASE_LO + 0x0000000C
#define REG_SYS_CTRL_BB_RST_CLR     REG_SYS_CTRL_BASE_LO + 0x00000010
#define REG_SYS_CTRL_CLK_SYS_MODE   REG_SYS_CTRL_BASE_LO + 0x00000014
#define REG_SYS_CTRL_CLK_SYS_ENABLE REG_SYS_CTRL_BASE_LO + 0x00000018
#define REG_SYS_CTRL_CLK_SYS_DISABLE REG_SYS_CTRL_BASE_LO + 0x0000001C
#define REG_SYS_CTRL_CLK_PER_MODE   REG_SYS_CTRL_BASE_LO + 0x00000020
#define REG_SYS_CTRL_CLK_PER_ENABLE REG_SYS_CTRL_BASE_LO + 0x00000024
#define REG_SYS_CTRL_CLK_PER_DISABLE REG_SYS_CTRL_BASE_LO + 0x00000028
#define REG_SYS_CTRL_CLK_BB_MODE    REG_SYS_CTRL_BASE_LO + 0x0000002C
#define REG_SYS_CTRL_CLK_BB_ENABLE  REG_SYS_CTRL_BASE_LO + 0x00000030
#define REG_SYS_CTRL_CLK_BB_DISABLE REG_SYS_CTRL_BASE_LO + 0x00000034
#define REG_SYS_CTRL_CLK_OTHER_MODE REG_SYS_CTRL_BASE_LO + 0x00000038
#define REG_SYS_CTRL_CLK_OTHER_ENABLE REG_SYS_CTRL_BASE_LO + 0x0000003C
#define REG_SYS_CTRL_CLK_OTHER_DISABLE REG_SYS_CTRL_BASE_LO + 0x00000040
#define REG_SYS_CTRL_PLL_CTRL       REG_SYS_CTRL_BASE_LO + 0x00000044
#define REG_SYS_CTRL_SEL_CLOCK      REG_SYS_CTRL_BASE_LO + 0x00000048
#define REG_SYS_CTRL_CFG_CLK_SYS    REG_SYS_CTRL_BASE_LO + 0x0000004C
#define REG_SYS_CTRL_CFG_CLK_MEM_BRIDGE REG_SYS_CTRL_BASE_LO + 0x00000050
#define REG_SYS_CTRL_CFG_CLK_VOC    REG_SYS_CTRL_BASE_LO + 0x00000054
#define REG_SYS_CTRL_CFG_CLK_OUT    REG_SYS_CTRL_BASE_LO + 0x00000058
#define REG_SYS_CTRL_CFG_CLK_GPADC  REG_SYS_CTRL_BASE_LO + 0x0000005C
#define REG_SYS_CTRL_CFG_CLK_AUDIOBCK_DIV REG_SYS_CTRL_BASE_LO + 0x00000060
#define REG_SYS_CTRL_CFG_AIF_TX_STB_DIV REG_SYS_CTRL_BASE_LO + 0x00000064
#define REG_SYS_CTRL_CFG_CLK_UART_0 REG_SYS_CTRL_BASE_LO + 0x00000068
#define REG_SYS_CTRL_CFG_CLK_UART_1 REG_SYS_CTRL_BASE_LO + 0x0000006C
#define REG_SYS_CTRL_CFG_CLK_UART_2 REG_SYS_CTRL_BASE_LO + 0x00000070
#define REG_SYS_CTRL_CFG_CLK_PWM    REG_SYS_CTRL_BASE_LO + 0x00000074
#define REG_SYS_CTRL_CFG_CLK_AUXCLK REG_SYS_CTRL_BASE_LO + 0x00000078
#define REG_SYS_CTRL_CFG_CLK_DBG_DIV REG_SYS_CTRL_BASE_LO + 0x0000007C
#define REG_SYS_CTRL_CFG_CLK_CAMERA_OUT REG_SYS_CTRL_BASE_LO + 0x00000080
#define REG_SYS_CTRL_CFG_AHB        REG_SYS_CTRL_BASE_LO + 0x00000084
#define REG_SYS_CTRL_CTRL_AHB       REG_SYS_CTRL_BASE_LO + 0x00000088
#define REG_SYS_CTRL_XCPU_DBG_BKP   REG_SYS_CTRL_BASE_LO + 0x0000008C
#define REG_SYS_CTRL_XCPU_DBG_ADDR  REG_SYS_CTRL_BASE_LO + 0x00000090
#define REG_SYS_CTRL_BCPU_DBG_BKP   REG_SYS_CTRL_BASE_LO + 0x00000094
#define REG_SYS_CTRL_BCPU_DBG_ADDR  REG_SYS_CTRL_BASE_LO + 0x00000098
#define REG_SYS_CTRL_CFG_CPUS_CACHE_RAM_DISABLE REG_SYS_CTRL_BASE_LO + 0x0000009C
#define REG_SYS_CTRL_RESET_CAUSE    REG_SYS_CTRL_BASE_LO + 0x000000A0
#define REG_SYS_CTRL_WAKEUP         REG_SYS_CTRL_BASE_LO + 0x000000A4
#define REG_SYS_CTRL_IGNORE_CHARGER REG_SYS_CTRL_BASE_LO + 0x000000A8

//REG_DBG
#define SYS_CTRL_SCRATCH(n)         (((n)&0xFFFF)<<0)
#define SYS_CTRL_WRITE_UNLOCK_STATUS (1<<30)
#define SYS_CTRL_WRITE_UNLOCK       (1<<31)

//Sys_Rst_Set
#define SYS_CTRL_SET_RST_XCPU       (1<<0)
#define SYS_CTRL_SET_RST_SYS_IRQ    (1<<1)
#define SYS_CTRL_SET_RST_SYS_A2A    (1<<2)
#define SYS_CTRL_SET_RST_ABB        (1<<3)
#define SYS_CTRL_SET_RST_DMA        (1<<4)
#define SYS_CTRL_SET_RST_GOUDA      (1<<5)
#define SYS_CTRL_SET_RST_TIMER      (1<<6)
#define SYS_CTRL_SET_RST_TCU        (1<<7)
#define SYS_CTRL_SET_RST_GPIO       (1<<8)
#define SYS_CTRL_SET_RST_KEYPAD     (1<<9)
#define SYS_CTRL_SET_RST_PWM        (1<<10)
#define SYS_CTRL_SET_RST_UART       (1<<11)
#define SYS_CTRL_SET_RST_UART2      (1<<12)
#define SYS_CTRL_SET_RST_SPI1       (1<<13)
#define SYS_CTRL_SET_RST_SPI2       (1<<14)
#define SYS_CTRL_SET_RST_SPI3       (1<<15)
#define SYS_CTRL_SET_RST_RF_SPI     (1<<16)
#define SYS_CTRL_SET_RST_SCI        (1<<17)
#define SYS_CTRL_SET_RST_SPY        (1<<18)
#define SYS_CTRL_SET_RST_I2C        (1<<19)
#define SYS_CTRL_SET_RST_I2C2       (1<<20)
#define SYS_CTRL_SET_RST_I2C3       (1<<21)
#define SYS_CTRL_SET_RST_MEM_BRIDGE (1<<22)
#define SYS_CTRL_SET_RST_GPADC      (1<<23)
#define SYS_CTRL_SET_RST_EXT_APB    (1<<24)
#define SYS_CTRL_SET_RST_SDMMC      (1<<25)
#define SYS_CTRL_SET_RST_CAMERA     (1<<26)
#define SYS_CTRL_SET_RST_USBC       (1<<27)
#define SYS_CTRL_SET_RST_USBPHY     (1<<28)
#define SYS_CTRL_SET_RST_DBG        (1<<29)
#define SYS_CTRL_SET_RST_OUT        (1<<30)
#define SYS_CTRL_SOFT_RST           (1<<31)
#define SYS_CTRL_SET_SYS_RST(n)     (((n)&0x3FFFFFFF)<<0)
#define SYS_CTRL_SET_SYS_RST_MASK   (0x3FFFFFFF<<0)
#define SYS_CTRL_SET_SYS_RST_SHIFT  (0)

//Sys_Rst_Clr
#define SYS_CTRL_CLR_RST_XCPU       (1<<0)
#define SYS_CTRL_CLR_RST_SYS_IRQ    (1<<1)
#define SYS_CTRL_CLR_RST_SYS_A2A    (1<<2)
#define SYS_CTRL_CLR_RST_ABB        (1<<3)
#define SYS_CTRL_CLR_RST_DMA        (1<<4)
#define SYS_CTRL_CLR_RST_GOUDA      (1<<5)
#define SYS_CTRL_CLR_RST_TIMER      (1<<6)
#define SYS_CTRL_CLR_RST_TCU        (1<<7)
#define SYS_CTRL_CLR_RST_GPIO       (1<<8)
#define SYS_CTRL_CLR_RST_KEYPAD     (1<<9)
#define SYS_CTRL_CLR_RST_PWM        (1<<10)
#define SYS_CTRL_CLR_RST_UART       (1<<11)
#define SYS_CTRL_CLR_RST_UART2      (1<<12)
#define SYS_CTRL_CLR_RST_SPI1       (1<<13)
#define SYS_CTRL_CLR_RST_SPI2       (1<<14)
#define SYS_CTRL_CLR_RST_SPI3       (1<<15)
#define SYS_CTRL_CLR_RST_RF_SPI     (1<<16)
#define SYS_CTRL_CLR_RST_SCI        (1<<17)
#define SYS_CTRL_CLR_RST_SPY        (1<<18)
#define SYS_CTRL_CLR_RST_I2C        (1<<19)
#define SYS_CTRL_CLR_RST_I2C2       (1<<20)
#define SYS_CTRL_CLR_RST_I2C3       (1<<21)
#define SYS_CTRL_CLR_RST_MEM_BRIDGE (1<<22)
#define SYS_CTRL_CLR_RST_GPADC      (1<<23)
#define SYS_CTRL_CLR_RST_EXT_APB    (1<<24)
#define SYS_CTRL_CLR_RST_SDMMC      (1<<25)
#define SYS_CTRL_CLR_RST_CAMERA     (1<<26)
#define SYS_CTRL_CLR_RST_USBC       (1<<27)
#define SYS_CTRL_CLR_RST_USBPHY     (1<<28)
#define SYS_CTRL_CLR_RST_DBG        (1<<29)
#define SYS_CTRL_CLR_RST_OUT        (1<<30)
#define SYS_CTRL_CLR_SYS_RST(n)     (((n)&0x3FFFFFFF)<<0)
#define SYS_CTRL_CLR_SYS_RST_MASK   (0x3FFFFFFF<<0)
#define SYS_CTRL_CLR_SYS_RST_SHIFT  (0)

//BB_Rst_Set
#define SYS_CTRL_SET_RST_BCPU       (1<<0)
#define SYS_CTRL_SET_RST_BB_IRQ     (1<<1)
#define SYS_CTRL_SET_RST_BB_A2A     (1<<2)
#define SYS_CTRL_SET_RST_BB_IFC     (1<<3)
#define SYS_CTRL_SET_RST_BB_SRAM    (1<<4)
#define SYS_CTRL_SET_RST_ITLV       (1<<5)
#define SYS_CTRL_SET_RST_VITERBI    (1<<6)
#define SYS_CTRL_SET_RST_CIPHER     (1<<7)
#define SYS_CTRL_SET_RST_XCOR       (1<<8)
#define SYS_CTRL_SET_RST_COPRO      (1<<9)
#define SYS_CTRL_SET_RST_RF_IF      (1<<10)
#define SYS_CTRL_SET_RST_VOC        (1<<11)
#define SYS_CTRL_SET_RST_AIF        (1<<12)
#define SYS_CTRL_SET_RST_DAI        (1<<13)
#define SYS_CTRL_SET_RST_BB_FULL    (1<<31)
#define SYS_CTRL_SET_BB_RST(n)      (((n)&0x3FFF)<<0)
#define SYS_CTRL_SET_BB_RST_MASK    (0x3FFF<<0)
#define SYS_CTRL_SET_BB_RST_SHIFT   (0)

//BB_Rst_Clr
#define SYS_CTRL_CLR_RST_BCPU       (1<<0)
#define SYS_CTRL_CLR_RST_BB_IRQ     (1<<1)
#define SYS_CTRL_CLR_RST_BB_A2A     (1<<2)
#define SYS_CTRL_CLR_RST_BB_IFC     (1<<3)
#define SYS_CTRL_CLR_RST_BB_SRAM    (1<<4)
#define SYS_CTRL_CLR_RST_ITLV       (1<<5)
#define SYS_CTRL_CLR_RST_VITERBI    (1<<6)
#define SYS_CTRL_CLR_RST_CIPHER     (1<<7)
#define SYS_CTRL_CLR_RST_XCOR       (1<<8)
#define SYS_CTRL_CLR_RST_COPRO      (1<<9)
#define SYS_CTRL_CLR_RST_RF_IF      (1<<10)
#define SYS_CTRL_CLR_RST_VOC        (1<<11)
#define SYS_CTRL_CLR_RST_AIF        (1<<12)
#define SYS_CTRL_CLR_RST_DAI        (1<<13)
#define SYS_CTRL_CLR_RST_BB_FULL    (1<<31)
#define SYS_CTRL_CLR_BB_RST(n)      (((n)&0x3FFF)<<0)
#define SYS_CTRL_CLR_BB_RST_MASK    (0x3FFF<<0)
#define SYS_CTRL_CLR_BB_RST_SHIFT   (0)

//Clk_Sys_Mode
#define SYS_CTRL_MODE_SYS_XCPU      (1<<0)
#define SYS_CTRL_MODE_SYS_XCPU_INT_AUTOMATIC (0<<1)
#define SYS_CTRL_MODE_SYS_XCPU_INT_MANUAL (1<<1)
#define SYS_CTRL_MODE_SYS_PCLK_CONF_AUTOMATIC (0<<2)
#define SYS_CTRL_MODE_SYS_PCLK_CONF_MANUAL (1<<2)
#define SYS_CTRL_MODE_SYS_PCLK_DATA_AUTOMATIC (0<<3)
#define SYS_CTRL_MODE_SYS_PCLK_DATA_MANUAL (1<<3)
#define SYS_CTRL_MODE_SYS_AMBA_AUTOMATIC (0<<4)
#define SYS_CTRL_MODE_SYS_AMBA_MANUAL (1<<4)
#define SYS_CTRL_MODE_SYS_DMA_AUTOMATIC (0<<5)
#define SYS_CTRL_MODE_SYS_DMA_MANUAL (1<<5)
#define SYS_CTRL_MODE_SYS_GOUDA_AUTOMATIC (0<<6)
#define SYS_CTRL_MODE_SYS_GOUDA_MANUAL (1<<6)
#define SYS_CTRL_MODE_SYS_EBC_AUTOMATIC (0<<7)
#define SYS_CTRL_MODE_SYS_EBC_MANUAL (1<<7)
#define SYS_CTRL_MODE_SYS_IFC_CH0_AUTOMATIC (0<<8)
#define SYS_CTRL_MODE_SYS_IFC_CH0_MANUAL (1<<8)
#define SYS_CTRL_MODE_SYS_IFC_CH1_AUTOMATIC (0<<9)
#define SYS_CTRL_MODE_SYS_IFC_CH1_MANUAL (1<<9)
#define SYS_CTRL_MODE_SYS_IFC_CH2_AUTOMATIC (0<<10)
#define SYS_CTRL_MODE_SYS_IFC_CH2_MANUAL (1<<10)
#define SYS_CTRL_MODE_SYS_IFC_CH3_AUTOMATIC (0<<11)
#define SYS_CTRL_MODE_SYS_IFC_CH3_MANUAL (1<<11)
#define SYS_CTRL_MODE_SYS_IFC_CH4_AUTOMATIC (0<<12)
#define SYS_CTRL_MODE_SYS_IFC_CH4_MANUAL (1<<12)
#define SYS_CTRL_MODE_SYS_IFC_CH5_AUTOMATIC (0<<13)
#define SYS_CTRL_MODE_SYS_IFC_CH5_MANUAL (1<<13)
#define SYS_CTRL_MODE_SYS_IFC_CH6_AUTOMATIC (0<<14)
#define SYS_CTRL_MODE_SYS_IFC_CH6_MANUAL (1<<14)
#define SYS_CTRL_MODE_SYS_IFC_CH7_AUTOMATIC (0<<15)
#define SYS_CTRL_MODE_SYS_IFC_CH7_MANUAL (1<<15)
#define SYS_CTRL_MODE_SYS_IFC_DBG_AUTOMATIC (0<<16)
#define SYS_CTRL_MODE_SYS_IFC_DBG_MANUAL (1<<16)
#define SYS_CTRL_MODE_SYS_A2A_AUTOMATIC (0<<17)
#define SYS_CTRL_MODE_SYS_A2A_MANUAL (1<<17)
#define SYS_CTRL_MODE_SYS_COM_REGS_AUTOMATIC (0<<18)
#define SYS_CTRL_MODE_SYS_COM_REGS_MANUAL (1<<18)
#define SYS_CTRL_MODE_SYS_DEBUG_UART_AUTOMATIC (0<<19)
#define SYS_CTRL_MODE_SYS_DEBUG_UART_MANUAL (1<<19)
#define SYS_CTRL_MODE_SYS_DBGHST_AUTOMATIC (0<<20)
#define SYS_CTRL_MODE_SYS_DBGHST_MANUAL (1<<20)
#define SYS_CTRL_MODE_SYS_GPADC_AUTOMATIC (0<<21)
#define SYS_CTRL_MODE_SYS_GPADC_MANUAL (1<<21)
#define SYS_CTRL_MODE_SYSD_SCI_AUTOMATIC (0<<22)
#define SYS_CTRL_MODE_SYSD_SCI_MANUAL (1<<22)
#define SYS_CTRL_MODE_SYSD_RF_SPI_AUTOMATIC (0<<23)
#define SYS_CTRL_MODE_SYSD_RF_SPI_MANUAL (1<<23)
#define SYS_CTRL_MODE_SYSD_OSC_AUTOMATIC (0<<24)
#define SYS_CTRL_MODE_SYSD_OSC_MANUAL (1<<24)
#define SYS_CTRL_MODE_SYSD_PWM_AUTOMATIC (0<<25)
#define SYS_CTRL_MODE_SYSD_PWM_MANUAL (1<<25)
#define SYS_CTRL_MODE_CLK_SYS(n)    (((n)&0x1FFFFFF)<<1)
#define SYS_CTRL_MODE_CLK_SYS_MASK  (0x1FFFFFF<<1)
#define SYS_CTRL_MODE_CLK_SYS_SHIFT (1)

//Clk_Sys_Enable
#define SYS_CTRL_ENABLE_SYS_XCPU    (1<<0)
#define SYS_CTRL_ENABLE_SYS_XCPU_INT (1<<1)
#define SYS_CTRL_ENABLE_SYS_PCLK_CONF (1<<2)
#define SYS_CTRL_ENABLE_SYS_PCLK_DATA (1<<3)
#define SYS_CTRL_ENABLE_SYS_AMBA    (1<<4)
#define SYS_CTRL_ENABLE_SYS_DMA     (1<<5)
#define SYS_CTRL_ENABLE_SYS_GOUDA   (1<<6)
#define SYS_CTRL_ENABLE_SYS_EBC     (1<<7)
#define SYS_CTRL_ENABLE_SYS_IFC_CH0 (1<<8)
#define SYS_CTRL_ENABLE_SYS_IFC_CH1 (1<<9)
#define SYS_CTRL_ENABLE_SYS_IFC_CH2 (1<<10)
#define SYS_CTRL_ENABLE_SYS_IFC_CH3 (1<<11)
#define SYS_CTRL_ENABLE_SYS_IFC_CH4 (1<<12)
#define SYS_CTRL_ENABLE_SYS_IFC_CH5 (1<<13)
#define SYS_CTRL_ENABLE_SYS_IFC_CH6 (1<<14)
#define SYS_CTRL_ENABLE_SYS_IFC_CH7 (1<<15)
#define SYS_CTRL_ENABLE_SYS_IFC_DBG (1<<16)
#define SYS_CTRL_ENABLE_SYS_A2A     (1<<17)
#define SYS_CTRL_ENABLE_SYS_COM_REGS (1<<18)
#define SYS_CTRL_ENABLE_SYS_DEBUG_UART (1<<19)
#define SYS_CTRL_ENABLE_SYS_DBGHST  (1<<20)
#define SYS_CTRL_ENABLE_SYS_GPADC   (1<<21)
#define SYS_CTRL_ENABLE_SYSD_SCI    (1<<22)
#define SYS_CTRL_ENABLE_SYSD_RF_SPI (1<<23)
#define SYS_CTRL_ENABLE_SYSD_OSC    (1<<24)
#define SYS_CTRL_ENABLE_SYSD_PWM    (1<<25)
#define SYS_CTRL_ENABLE_SYS_GPIO    (1<<26)
#define SYS_CTRL_ENABLE_SYS_IRQ     (1<<27)
#define SYS_CTRL_ENABLE_SYS_TCU     (1<<28)
#define SYS_CTRL_ENABLE_SYS_TIMER   (1<<29)
#define SYS_CTRL_ENABLE_CLK_SYS(n)  (((n)&0x3FFFFFFF)<<0)
#define SYS_CTRL_ENABLE_CLK_SYS_MASK (0x3FFFFFFF<<0)
#define SYS_CTRL_ENABLE_CLK_SYS_SHIFT (0)

//Clk_Sys_Disable
#define SYS_CTRL_DISABLE_SYS_XCPU   (1<<0)
#define SYS_CTRL_DISABLE_SYS_XCPU_INT (1<<1)
#define SYS_CTRL_DISABLE_SYS_PCLK_CONF (1<<2)
#define SYS_CTRL_DISABLE_SYS_PCLK_DATA (1<<3)
#define SYS_CTRL_DISABLE_SYS_AMBA   (1<<4)
#define SYS_CTRL_DISABLE_SYS_DMA    (1<<5)
#define SYS_CTRL_DISABLE_SYS_GOUDA  (1<<6)
#define SYS_CTRL_DISABLE_SYS_EBC    (1<<7)
#define SYS_CTRL_DISABLE_SYS_IFC_CH0 (1<<8)
#define SYS_CTRL_DISABLE_SYS_IFC_CH1 (1<<9)
#define SYS_CTRL_DISABLE_SYS_IFC_CH2 (1<<10)
#define SYS_CTRL_DISABLE_SYS_IFC_CH3 (1<<11)
#define SYS_CTRL_DISABLE_SYS_IFC_CH4 (1<<12)
#define SYS_CTRL_DISABLE_SYS_IFC_CH5 (1<<13)
#define SYS_CTRL_DISABLE_SYS_IFC_CH6 (1<<14)
#define SYS_CTRL_DISABLE_SYS_IFC_CH7 (1<<15)
#define SYS_CTRL_DISABLE_SYS_IFC_DBG (1<<16)
#define SYS_CTRL_DISABLE_SYS_A2A    (1<<17)
#define SYS_CTRL_DISABLE_SYS_COM_REGS (1<<18)
#define SYS_CTRL_DISABLE_SYS_DEBUG_UART (1<<19)
#define SYS_CTRL_DISABLE_SYS_DBGHST (1<<20)
#define SYS_CTRL_DISABLE_SYS_GPADC  (1<<21)
#define SYS_CTRL_DISABLE_SYSD_SCI   (1<<22)
#define SYS_CTRL_DISABLE_SYSD_RF_SPI (1<<23)
#define SYS_CTRL_DISABLE_SYSD_OSC   (1<<24)
#define SYS_CTRL_DISABLE_SYSD_PWM   (1<<25)
#define SYS_CTRL_DISABLE_SYS_GPIO   (1<<26)
#define SYS_CTRL_DISABLE_SYS_IRQ    (1<<27)
#define SYS_CTRL_DISABLE_SYS_TCU    (1<<28)
#define SYS_CTRL_DISABLE_SYS_TIMER  (1<<29)
#define SYS_CTRL_DISABLE_CLK_SYS(n) (((n)&0x3FFFFFFF)<<0)
#define SYS_CTRL_DISABLE_CLK_SYS_MASK (0x3FFFFFFF<<0)
#define SYS_CTRL_DISABLE_CLK_SYS_SHIFT (0)

//Clk_Per_Mode
#define SYS_CTRL_MODE_PER_UART_AUTOMATIC (0<<0)
#define SYS_CTRL_MODE_PER_UART_MANUAL (1<<0)
#define SYS_CTRL_MODE_PER_UART2_AUTOMATIC (0<<1)
#define SYS_CTRL_MODE_PER_UART2_MANUAL (1<<1)
#define SYS_CTRL_MODE_PER_I2C_AUTOMATIC (0<<2)
#define SYS_CTRL_MODE_PER_I2C_MANUAL (1<<2)
#define SYS_CTRL_MODE_PER_I2C2_AUTOMATIC (0<<3)
#define SYS_CTRL_MODE_PER_I2C2_MANUAL (1<<3)
#define SYS_CTRL_MODE_PER_I2C3_AUTOMATIC (0<<4)
#define SYS_CTRL_MODE_PER_I2C3_MANUAL (1<<4)
#define SYS_CTRL_MODE_PER_SDMMC_AUTOMATIC (0<<5)
#define SYS_CTRL_MODE_PER_SDMMC_MANUAL (1<<5)
#define SYS_CTRL_MODE_PER_CAMERA_AUTOMATIC (0<<6)
#define SYS_CTRL_MODE_PER_CAMERA_MANUAL (1<<6)
#define SYS_CTRL_MODE_PERD_SPI1_AUTOMATIC (0<<7)
#define SYS_CTRL_MODE_PERD_SPI1_MANUAL (1<<7)
#define SYS_CTRL_MODE_PERD_SPI2_AUTOMATIC (0<<8)
#define SYS_CTRL_MODE_PERD_SPI2_MANUAL (1<<8)
#define SYS_CTRL_MODE_PERD_SPI3_AUTOMATIC (0<<9)
#define SYS_CTRL_MODE_PERD_SPI3_MANUAL (1<<9)
#define SYS_CTRL_MODE_CLK_PER(n)    (((n)&0x3FF)<<0)
#define SYS_CTRL_MODE_CLK_PER_MASK  (0x3FF<<0)
#define SYS_CTRL_MODE_CLK_PER_SHIFT (0)

//Clk_Per_Enable
#define SYS_CTRL_ENABLE_PER_UART    (1<<0)
#define SYS_CTRL_ENABLE_PER_UART2   (1<<1)
#define SYS_CTRL_ENABLE_PER_I2C     (1<<2)
#define SYS_CTRL_ENABLE_PER_I2C2    (1<<3)
#define SYS_CTRL_ENABLE_PER_I2C3    (1<<4)
#define SYS_CTRL_ENABLE_PER_SDMMC   (1<<5)
#define SYS_CTRL_ENABLE_PER_CAMERA  (1<<6)
#define SYS_CTRL_ENABLE_PERD_SPI1   (1<<7)
#define SYS_CTRL_ENABLE_PERD_SPI2   (1<<8)
#define SYS_CTRL_ENABLE_PERD_SPI3   (1<<9)
#define SYS_CTRL_ENABLE_PER_USBC    (1<<10)
#define SYS_CTRL_ENABLE_PER_SPY     (1<<11)
#define SYS_CTRL_ENABLE_PER_TEST    (1<<12)
#define SYS_CTRL_ENABLE_CLK_PER(n)  (((n)&0x1FFF)<<0)
#define SYS_CTRL_ENABLE_CLK_PER_MASK (0x1FFF<<0)
#define SYS_CTRL_ENABLE_CLK_PER_SHIFT (0)

//Clk_Per_Disable
#define SYS_CTRL_DISABLE_PER_UART   (1<<0)
#define SYS_CTRL_DISABLE_PER_UART2  (1<<1)
#define SYS_CTRL_DISABLE_PER_I2C    (1<<2)
#define SYS_CTRL_DISABLE_PER_I2C2   (1<<3)
#define SYS_CTRL_DISABLE_PER_I2C3   (1<<4)
#define SYS_CTRL_DISABLE_PER_SDMMC  (1<<5)
#define SYS_CTRL_DISABLE_PER_CAMERA (1<<6)
#define SYS_CTRL_DISABLE_PERD_SPI1  (1<<7)
#define SYS_CTRL_DISABLE_PERD_SPI2  (1<<8)
#define SYS_CTRL_DISABLE_PERD_SPI3  (1<<9)
#define SYS_CTRL_DISABLE_PER_USBC   (1<<10)
#define SYS_CTRL_DISABLE_PER_SPY    (1<<11)
#define SYS_CTRL_DISABLE_PER_TEST   (1<<12)
#define SYS_CTRL_DISABLE_CLK_PER(n) (((n)&0x1FFF)<<0)
#define SYS_CTRL_DISABLE_CLK_PER_MASK (0x1FFF<<0)
#define SYS_CTRL_DISABLE_CLK_PER_SHIFT (0)

//Clk_BB_Mode
#define SYS_CTRL_MODE_BB_BCPU       (1<<0)
#define SYS_CTRL_MODE_BB_BCPU_INT_AUTOMATIC (0<<1)
#define SYS_CTRL_MODE_BB_BCPU_INT_MANUAL (1<<1)
#define SYS_CTRL_MODE_BB_AMBA_AUTOMATIC (0<<2)
#define SYS_CTRL_MODE_BB_AMBA_MANUAL (1<<2)
#define SYS_CTRL_MODE_BB_PCLK_CONF_AUTOMATIC (0<<3)
#define SYS_CTRL_MODE_BB_PCLK_CONF_MANUAL (1<<3)
#define SYS_CTRL_MODE_BB_PCLK_DATA_AUTOMATIC (0<<4)
#define SYS_CTRL_MODE_BB_PCLK_DATA_MANUAL (1<<4)
#define SYS_CTRL_MODE_BB_VOC_AHB_AUTOMATIC (0<<5)
#define SYS_CTRL_MODE_BB_VOC_AHB_MANUAL (1<<5)
#define SYS_CTRL_MODE_BB_IFC_CH0_AUTOMATIC (0<<6)
#define SYS_CTRL_MODE_BB_IFC_CH0_MANUAL (1<<6)
#define SYS_CTRL_MODE_BB_IFC_CH1_AUTOMATIC (0<<7)
#define SYS_CTRL_MODE_BB_IFC_CH1_MANUAL (1<<7)
#define SYS_CTRL_MODE_BB_IFC_CH2_AUTOMATIC (0<<8)
#define SYS_CTRL_MODE_BB_IFC_CH2_MANUAL (1<<8)
#define SYS_CTRL_MODE_BB_IFC_CH3_AUTOMATIC (0<<9)
#define SYS_CTRL_MODE_BB_IFC_CH3_MANUAL (1<<9)
#define SYS_CTRL_MODE_BB_SRAM_AUTOMATIC (0<<10)
#define SYS_CTRL_MODE_BB_SRAM_MANUAL (1<<10)
#define SYS_CTRL_MODE_BB_A2A_AUTOMATIC (0<<11)
#define SYS_CTRL_MODE_BB_A2A_MANUAL (1<<11)
#define SYS_CTRL_MODE_BB_ITLV_AUTOMATIC (0<<12)
#define SYS_CTRL_MODE_BB_ITLV_MANUAL (1<<12)
#define SYS_CTRL_MODE_BB_VITERBI_AUTOMATIC (0<<13)
#define SYS_CTRL_MODE_BB_VITERBI_MANUAL (1<<13)
#define SYS_CTRL_MODE_BB_CIPHER_AUTOMATIC (0<<14)
#define SYS_CTRL_MODE_BB_CIPHER_MANUAL (1<<14)
#define SYS_CTRL_MODE_BB_RF_IF_AUTOMATIC (0<<15)
#define SYS_CTRL_MODE_BB_RF_IF_MANUAL (1<<15)
#define SYS_CTRL_MODE_BB_COPRO_AUTOMATIC (0<<16)
#define SYS_CTRL_MODE_BB_COPRO_MANUAL (1<<16)
#define SYS_CTRL_MODE_BB_CP2_REG_AUTOMATIC (0<<17)
#define SYS_CTRL_MODE_BB_CP2_REG_MANUAL (1<<17)
#define SYS_CTRL_MODE_BB_XCOR_AUTOMATIC (0<<18)
#define SYS_CTRL_MODE_BB_XCOR_MANUAL (1<<18)
#define SYS_CTRL_MODE_BB_AIF_AUTOMATIC (0<<19)
#define SYS_CTRL_MODE_BB_AIF_MANUAL (1<<19)
#define SYS_CTRL_MODE_BBD_DAIS_208K_AUTOMATIC (0<<20)
#define SYS_CTRL_MODE_BBD_DAIS_208K_MANUAL (1<<20)
#define SYS_CTRL_MODE_CLK_BB(n)     (((n)&0xFFFFF)<<1)
#define SYS_CTRL_MODE_CLK_BB_MASK   (0xFFFFF<<1)
#define SYS_CTRL_MODE_CLK_BB_SHIFT  (1)

//Clk_BB_Enable
#define SYS_CTRL_ENABLE_BB_BCPU     (1<<0)
#define SYS_CTRL_ENABLE_BB_BCPU_INT (1<<1)
#define SYS_CTRL_ENABLE_BB_AMBA     (1<<2)
#define SYS_CTRL_ENABLE_BB_PCLK_CONF (1<<3)
#define SYS_CTRL_ENABLE_BB_PCLK_DATA (1<<4)
#define SYS_CTRL_ENABLE_BB_VOC_AHB  (1<<5)
#define SYS_CTRL_ENABLE_BB_IFC_CH0  (1<<6)
#define SYS_CTRL_ENABLE_BB_IFC_CH1  (1<<7)
#define SYS_CTRL_ENABLE_BB_IFC_CH2  (1<<8)
#define SYS_CTRL_ENABLE_BB_IFC_CH3  (1<<9)
#define SYS_CTRL_ENABLE_BB_SRAM     (1<<10)
#define SYS_CTRL_ENABLE_BB_A2A      (1<<11)
#define SYS_CTRL_ENABLE_BB_ITLV     (1<<12)
#define SYS_CTRL_ENABLE_BB_VITERBI  (1<<13)
#define SYS_CTRL_ENABLE_BB_CIPHER   (1<<14)
#define SYS_CTRL_ENABLE_BB_RF_IF    (1<<15)
#define SYS_CTRL_ENABLE_BB_COPRO    (1<<16)
#define SYS_CTRL_ENABLE_BB_CP2_REG  (1<<17)
#define SYS_CTRL_ENABLE_BB_XCOR     (1<<18)
#define SYS_CTRL_ENABLE_BB_AIF      (1<<19)
#define SYS_CTRL_ENABLE_BBD_DAIS_208K (1<<20)
#define SYS_CTRL_ENABLE_BB_IRQ      (1<<21)
#define SYS_CTRL_ENABLE_CLK_BB(n)   (((n)&0x3FFFFF)<<0)
#define SYS_CTRL_ENABLE_CLK_BB_MASK (0x3FFFFF<<0)
#define SYS_CTRL_ENABLE_CLK_BB_SHIFT (0)

//Clk_BB_Disable
#define SYS_CTRL_DISABLE_BB_BCPU    (1<<0)
#define SYS_CTRL_DISABLE_BB_BCPU_INT (1<<1)
#define SYS_CTRL_DISABLE_BB_AMBA    (1<<2)
#define SYS_CTRL_DISABLE_BB_PCLK_CONF (1<<3)
#define SYS_CTRL_DISABLE_BB_PCLK_DATA (1<<4)
#define SYS_CTRL_DISABLE_BB_VOC_AHB (1<<5)
#define SYS_CTRL_DISABLE_BB_IFC_CH0 (1<<6)
#define SYS_CTRL_DISABLE_BB_IFC_CH1 (1<<7)
#define SYS_CTRL_DISABLE_BB_IFC_CH2 (1<<8)
#define SYS_CTRL_DISABLE_BB_IFC_CH3 (1<<9)
#define SYS_CTRL_DISABLE_BB_SRAM    (1<<10)
#define SYS_CTRL_DISABLE_BB_A2A     (1<<11)
#define SYS_CTRL_DISABLE_BB_ITLV    (1<<12)
#define SYS_CTRL_DISABLE_BB_VITERBI (1<<13)
#define SYS_CTRL_DISABLE_BB_CIPHER  (1<<14)
#define SYS_CTRL_DISABLE_BB_RF_IF   (1<<15)
#define SYS_CTRL_DISABLE_BB_COPRO   (1<<16)
#define SYS_CTRL_DISABLE_BB_CP2_REG (1<<17)
#define SYS_CTRL_DISABLE_BB_XCOR    (1<<18)
#define SYS_CTRL_DISABLE_BB_AIF     (1<<19)
#define SYS_CTRL_DISABLE_BBD_DAIS_208K (1<<20)
#define SYS_CTRL_DISABLE_BB_IRQ     (1<<21)
#define SYS_CTRL_DISABLE_CLK_BB(n)  (((n)&0x3FFFFF)<<0)
#define SYS_CTRL_DISABLE_CLK_BB_MASK (0x3FFFFF<<0)
#define SYS_CTRL_DISABLE_CLK_BB_SHIFT (0)

//Clk_Other_Mode
#define SYS_CTRL_MODE_OC_DEBUG_UART_AUTOMATIC (0<<0)
#define SYS_CTRL_MODE_OC_DEBUG_UART_MANUAL (1<<0)
#define SYS_CTRL_MODE_OC_26M_GPADC_AUTOMATIC (0<<1)
#define SYS_CTRL_MODE_OC_26M_GPADC_MANUAL (1<<1)
#define SYS_CTRL_MODE_OC_BCK_AUTOMATIC (0<<2)
#define SYS_CTRL_MODE_OC_BCK_MANUAL (1<<2)
#define SYS_CTRL_MODE_OC_UART_AUTOMATIC (0<<3)
#define SYS_CTRL_MODE_OC_UART_MANUAL (1<<3)
#define SYS_CTRL_MODE_OC_UART2_AUTOMATIC (0<<4)
#define SYS_CTRL_MODE_OC_UART2_MANUAL (1<<4)
#define SYS_CTRL_MODE_OC_RF_RX_AUTOMATIC (0<<5)
#define SYS_CTRL_MODE_OC_RF_RX_MANUAL (1<<5)
#define SYS_CTRL_MODE_OC_RF_TX_AUTOMATIC (0<<6)
#define SYS_CTRL_MODE_OC_RF_TX_MANUAL (1<<6)
#define SYS_CTRL_MODE_OC_MEM_BRIDGE_AUTOMATIC (0<<7)
#define SYS_CTRL_MODE_OC_MEM_BRIDGE_MANUAL (1<<7)
#define SYS_CTRL_MODE_OC_VOC_CORE_AUTOMATIC (0<<8)
#define SYS_CTRL_MODE_OC_VOC_CORE_MANUAL (1<<8)
#define SYS_CTRL_MODE_OC_VOC_AHB_AUTOMATIC (0<<9)
#define SYS_CTRL_MODE_OC_VOC_AHB_MANUAL (1<<9)
#define SYS_CTRL_MODE_OC_VOC_DAI_AUTOMATIC (0<<10)
#define SYS_CTRL_MODE_OC_VOC_DAI_MANUAL (1<<10)
#define SYS_CTRL_MODE_CLK_OTHER(n)  (((n)&0x7FF)<<0)
#define SYS_CTRL_MODE_CLK_OTHER_MASK (0x7FF<<0)
#define SYS_CTRL_MODE_CLK_OTHER_SHIFT (0)

//Clk_Other_Enable
#define SYS_CTRL_ENABLE_OC_DEBUG_UART (1<<0)
#define SYS_CTRL_ENABLE_OC_26M_GPADC (1<<1)
#define SYS_CTRL_ENABLE_OC_BCK      (1<<2)
#define SYS_CTRL_ENABLE_OC_UART     (1<<3)
#define SYS_CTRL_ENABLE_OC_UART2    (1<<4)
#define SYS_CTRL_ENABLE_OC_RF_RX    (1<<5)
#define SYS_CTRL_ENABLE_OC_RF_TX    (1<<6)
#define SYS_CTRL_ENABLE_OC_MEM_BRIDGE (1<<7)
#define SYS_CTRL_ENABLE_OC_VOC_CORE (1<<8)
#define SYS_CTRL_ENABLE_OC_VOC_AHB  (1<<9)
#define SYS_CTRL_ENABLE_OC_VOC_DAI  (1<<10)
#define SYS_CTRL_ENABLE_OC_VOC      (1<<11)
#define SYS_CTRL_ENABLE_OC_LPS      (1<<12)
#define SYS_CTRL_ENABLE_OC_GPIO     (1<<13)
#define SYS_CTRL_ENABLE_OC_USBPHY   (1<<14)
#define SYS_CTRL_ENABLE_OC_PIX      (1<<15)
#define SYS_CTRL_ENABLE_OC_CLK_OUT  (1<<16)
#define SYS_CTRL_ENABLE_OC_MEM_CLK_OUT (1<<17)
#define SYS_CTRL_ENABLE_OC_DBG      (1<<18)
#define SYS_CTRL_ENABLE_CLK_OTHER(n) (((n)&0x7FFFF)<<0)
#define SYS_CTRL_ENABLE_CLK_OTHER_MASK (0x7FFFF<<0)
#define SYS_CTRL_ENABLE_CLK_OTHER_SHIFT (0)

//Clk_Other_Disable
#define SYS_CTRL_DISABLE_OC_DEBUG_UART (1<<0)
#define SYS_CTRL_DISABLE_OC_26M_GPADC (1<<1)
#define SYS_CTRL_DISABLE_OC_BCK     (1<<2)
#define SYS_CTRL_DISABLE_OC_UART    (1<<3)
#define SYS_CTRL_DISABLE_OC_UART2   (1<<4)
#define SYS_CTRL_DISABLE_OC_RF_RX   (1<<5)
#define SYS_CTRL_DISABLE_OC_RF_TX   (1<<6)
#define SYS_CTRL_DISABLE_OC_MEM_BRIDGE (1<<7)
#define SYS_CTRL_DISABLE_OC_VOC_CORE (1<<8)
#define SYS_CTRL_DISABLE_OC_VOC_AHB (1<<9)
#define SYS_CTRL_DISABLE_OC_VOC_DAI (1<<10)
#define SYS_CTRL_DISABLE_OC_VOC     (1<<11)
#define SYS_CTRL_DISABLE_OC_LPS     (1<<12)
#define SYS_CTRL_DISABLE_OC_GPIO    (1<<13)
#define SYS_CTRL_DISABLE_OC_USBPHY  (1<<14)
#define SYS_CTRL_DISABLE_OC_PIX     (1<<15)
#define SYS_CTRL_DISABLE_OC_CLK_OUT (1<<16)
#define SYS_CTRL_DISABLE_OC_MEM_CLK_OUT (1<<17)
#define SYS_CTRL_DISABLE_OC_DBG     (1<<18)
#define SYS_CTRL_DISABLE_CLK_OTHER(n) (((n)&0x7FFFF)<<0)
#define SYS_CTRL_DISABLE_CLK_OTHER_MASK (0x7FFFF<<0)
#define SYS_CTRL_DISABLE_CLK_OTHER_SHIFT (0)

//Pll_Ctrl
#define SYS_CTRL_PLL_ENABLE         (1<<0)
#define SYS_CTRL_PLL_ENABLE_MASK    (1<<0)
#define SYS_CTRL_PLL_ENABLE_SHIFT   (0)
#define SYS_CTRL_PLL_ENABLE_POWER_DOWN (0<<0)
#define SYS_CTRL_PLL_ENABLE_ENABLE  (1<<0)
#define SYS_CTRL_PLL_LOCK_RESET     (1<<4)
#define SYS_CTRL_PLL_LOCK_RESET_MASK (1<<4)
#define SYS_CTRL_PLL_LOCK_RESET_SHIFT (4)
#define SYS_CTRL_PLL_LOCK_RESET_RESET (0<<4)
#define SYS_CTRL_PLL_LOCK_RESET_NO_RESET (1<<4)
#define SYS_CTRL_PLL_BYPASS         (1<<8)
#define SYS_CTRL_PLL_BYPASS_MASK    (1<<8)
#define SYS_CTRL_PLL_BYPASS_SHIFT   (8)
#define SYS_CTRL_PLL_BYPASS_PASS    (0<<8)
#define SYS_CTRL_PLL_BYPASS_BYPASS  (1<<8)
#define SYS_CTRL_PLL_CLK_FAST_ENABLE (1<<12)
#define SYS_CTRL_PLL_CLK_FAST_ENABLE_MASK (1<<12)
#define SYS_CTRL_PLL_CLK_FAST_ENABLE_SHIFT (12)
#define SYS_CTRL_PLL_CLK_FAST_ENABLE_ENABLE (1<<12)
#define SYS_CTRL_PLL_CLK_FAST_ENABLE_DISABLE (0<<12)

//Sel_Clock
#define SYS_CTRL_SLOW_SEL_RF_OSCILLATOR (1<<0)
#define SYS_CTRL_SLOW_SEL_RF_RF     (0<<0)
#define SYS_CTRL_SYS_SEL_FAST_SLOW  (1<<4)
#define SYS_CTRL_SYS_SEL_FAST_FAST  (0<<4)
#define SYS_CTRL_RF_DETECTED_OK     (1<<20)
#define SYS_CTRL_RF_DETECTED_NO     (0<<20)
#define SYS_CTRL_RF_DETECT_BYPASS   (1<<21)
#define SYS_CTRL_RF_DETECT_RESET    (1<<22)
#define SYS_CTRL_RF_SELECTED_L      (1<<23)
#define SYS_CTRL_PLL_LOCKED         (1<<24)
#define SYS_CTRL_PLL_LOCKED_MASK    (1<<24)
#define SYS_CTRL_PLL_LOCKED_SHIFT   (24)
#define SYS_CTRL_PLL_LOCKED_LOCKED  (1<<24)
#define SYS_CTRL_PLL_LOCKED_NOT_LOCKED (0<<24)
#define SYS_CTRL_PLL_BYPASS_LOCK    (1<<27)
#define SYS_CTRL_FAST_SELECTED_L    (1<<31)
#define SYS_CTRL_FAST_SELECTED_L_MASK (1<<31)
#define SYS_CTRL_FAST_SELECTED_L_SHIFT (31)

//Cfg_Clk_Sys
#define SYS_CTRL_FREQ(n)            (((n)&7)<<0)
#define SYS_CTRL_FREQ_MASK          (7<<0)
#define SYS_CTRL_FREQ_SHIFT         (0)
#define SYS_CTRL_FREQ_RESERVED      (0<<0)
#define SYS_CTRL_FREQ_26M           (1<<0)
#define SYS_CTRL_FREQ_39M           (2<<0)
#define SYS_CTRL_FREQ_52M           (3<<0)
#define SYS_CTRL_FREQ_78M           (4<<0)
#define SYS_CTRL_FREQ_104M          (5<<0)
#define SYS_CTRL_FREQ_156M          (6<<0)
#define SYS_CTRL_FORCE_DIV_UPDATE   (1<<4)
#define SYS_CTRL_REQ_DIV_UPDATE     (1<<8)

//Cfg_Clk_Mem_Bridge
#define SYS_CTRL_MEM_FREQ(n)        (((n)&7)<<0)
#define SYS_CTRL_MEM_FREQ_MASK      (7<<0)
#define SYS_CTRL_MEM_FREQ_SHIFT     (0)
#define SYS_CTRL_MEM_FREQ_13M       (0<<0)
#define SYS_CTRL_MEM_FREQ_26M       (1<<0)
#define SYS_CTRL_MEM_FREQ_39M       (2<<0)
#define SYS_CTRL_MEM_FREQ_52M       (3<<0)
#define SYS_CTRL_MEM_FREQ_78M       (4<<0)
#define SYS_CTRL_MEM_FREQ_89M       (5<<0)
#define SYS_CTRL_MEM_FREQ_104M      (6<<0)

//Cfg_Clk_Voc
#define SYS_CTRL_VOC_FREQ(n)        (((n)&7)<<0)
#define SYS_CTRL_VOC_FREQ_MASK      (7<<0)
#define SYS_CTRL_VOC_FREQ_SHIFT     (0)
#define SYS_CTRL_VOC_FREQ_13M       (0<<0)
#define SYS_CTRL_VOC_FREQ_26M       (1<<0)
#define SYS_CTRL_VOC_FREQ_39M       (2<<0)
#define SYS_CTRL_VOC_FREQ_52M       (3<<0)
#define SYS_CTRL_VOC_FREQ_78M       (4<<0)
#define SYS_CTRL_VOC_FREQ_89M       (5<<0)
#define SYS_CTRL_VOC_FREQ_104M      (6<<0)
#define SYS_CTRL_VOC_SEL_PLL_SLOW   (1<<8)
#define SYS_CTRL_VOC_SEL_PLL_PLL    (0<<8)

//Cfg_Clk_Out
#define SYS_CTRL_CLKOUT_DIVIDER(n)  (((n)&31)<<0)
#define SYS_CTRL_CLKOUT_SEL_OSC     (0<<8)
#define SYS_CTRL_CLKOUT_SEL_RF      (1<<8)
#define SYS_CTRL_CLKOUT_SEL_DIVIDER (2<<8)

//Cfg_Clk_GPADC
#define SYS_CTRL_GPADC_CLK_DIV(n)   (((n)&31)<<0)
#define SYS_CTRL_GPADC_CLK_DIV_MASK (31<<0)
#define SYS_CTRL_GPADC_CLK_DIV_SHIFT (0)
#define SYS_CTRL_GPADC_CLK_POL      (1<<8)
#define SYS_CTRL_GPADC_CLK_EN_MODE  (1<<12)

//Cfg_Clk_AudioBCK_Div
#define SYS_CTRL_AUDIOBCK_DIVIDER(n) (((n)&0x7FF)<<0)

//Cfg_Aif_Tx_Stb_Div
#ifdef GALLITE_IS_8806
#define SYS_CTRL_AIF_TX_STB_DIV(n)  (((n)&0x1FFF)<<0)
#else
#define SYS_CTRL_AIF_TX_STB_DIV(n)  (((n)&0xFFF)<<0)
#endif
#define SYS_CTRL_AIF_TX_STB_EN      (1<<31)

//Cfg_Clk_Uart
#define SYS_CTRL_UART_DIVIDER(n)    (((n)&0x3FF)<<0)
#define SYS_CTRL_UART_DIVIDER_MASK  (0x3FF<<0)
#define SYS_CTRL_UART_DIVIDER_SHIFT (0)
#define SYS_CTRL_UART_SEL_PLL_SLOW  (0<<12)
#define SYS_CTRL_UART_SEL_PLL_PLL   (1<<12)

//Cfg_Clk_PWM
#define SYS_CTRL_PWM_DIVIDER(n)     (((n)&0xFF)<<0)

//Cfg_Clk_Auxclk
#define SYS_CTRL_AUXCLK_EN_DISABLE  (0<<0)
#define SYS_CTRL_AUXCLK_EN_ENABLE   (1<<0)

//Cfg_Clk_Dbg_Div
#define SYS_CTRL_CLK_DBG_DIVIDER(n) (((n)&0x7FF)<<0)

//Cfg_Clk_Camera_Out
#define SYS_CTRL_CLK_CAMERA_OUT_EN_DISABLE      (0<<0)
#define SYS_CTRL_CLK_CAMERA_OUT_EN_ENABLE       (1<<0)
#define SYS_CTRL_CLK_CAMERA_DIV_SRC_SEL_156_MHZ (0<<4)
#define SYS_CTRL_CLK_CAMERA_DIV_SRC_SEL__26_MHZ (1<<4)
#define SYS_CTRL_CLK_CAMERA_OUT_DIV(n)          (((n)&15)<<8)
#define SYS_CTRL_CLK_CAMERA_OUT_DIV_MASK        (15<<8)
#define SYS_CTRL_CLK_CAMERA_OUT_DIV_SHIFT       (8)
#define SYS_CTRL_CLK_CAMERA_OUT_SRC_SEL_FROM_DIVIDER (0<<12)
#define SYS_CTRL_CLK_CAMERA_OUT_SRC_SEL_FROM_32K (1<<12)
#define SYS_CTRL_CLK_CAMERA_OUT_SRC_SEL_FROM_26M (2<<12)

//Cfg_AHB
#define SYS_CTRL_SYS_NEW_ARBITRATION_ENABLE (1<<0)
#define SYS_CTRL_SYS_NEW_ARBITRATION_DISABLE (0<<0)
#define SYS_CTRL_ENABLE_SYS_MID_BIST_ENABLE (1<<1)
#define SYS_CTRL_ENABLE_SYS_MID_BIST_DISABLE (0<<1)
#define SYS_CTRL_ENABLE_SYS_MID_DMA_ENABLE (1<<2)
#define SYS_CTRL_ENABLE_SYS_MID_DMA_DISABLE (0<<2)
#define SYS_CTRL_ENABLE_SYS_MID_XCPU_ENABLE (1<<3)
#define SYS_CTRL_ENABLE_SYS_MID_XCPU_DISABLE (0<<3)
#define SYS_CTRL_ENABLE_SYS_MID_AHB2AHB_ENABLE (1<<4)
#define SYS_CTRL_ENABLE_SYS_MID_AHB2AHB_DISABLE (0<<4)
#define SYS_CTRL_ENABLE_SYS_MID_IFC_ENABLE (1<<5)
#define SYS_CTRL_ENABLE_SYS_MID_IFC_DISABLE (0<<5)
#define SYS_CTRL_ENABLE_SYS_MID_USB_ENABLE (1<<6)
#define SYS_CTRL_ENABLE_SYS_MID_USB_DISABLE (0<<6)
#define SYS_CTRL_ENABLE_SYS_MID_GOUDA_ENABLE (1<<7)
#define SYS_CTRL_ENABLE_SYS_MID_GOUDA_DISABLE (0<<7)
#define SYS_CTRL_BB_NEW_ARBITRATION_ENABLE (1<<16)
#define SYS_CTRL_BB_NEW_ARBITRATION_DISABLE (0<<16)
#define SYS_CTRL_ENABLE_BB_MID_BIST_ENABLE (1<<17)
#define SYS_CTRL_ENABLE_BB_MID_BIST_DISABLE (0<<17)
#define SYS_CTRL_ENABLE_BB_MID_VOC_ENABLE (1<<18)
#define SYS_CTRL_ENABLE_BB_MID_VOC_DISABLE (0<<18)
#define SYS_CTRL_ENABLE_BB_MID_BCPU_ENABLE (1<<19)
#define SYS_CTRL_ENABLE_BB_MID_BCPU_DISABLE (0<<19)
#define SYS_CTRL_ENABLE_BB_MID_AHB2AHB_ENABLE (1<<20)
#define SYS_CTRL_ENABLE_BB_MID_AHB2AHB_DISABLE (0<<20)
#define SYS_CTRL_ENABLE_BB_MID_IFC_ENABLE (1<<21)
#define SYS_CTRL_ENABLE_BB_MID_IFC_DISABLE (0<<21)
#define SYS_CTRL_USB_RAM_TEST_MODE_ENABLE (1<<31)
#define SYS_CTRL_USB_RAM_TEST_MODE_DISABLE (0<<31)
#define SYS_CTRL_SYS_ENABLE(n)      (((n)&0x7F)<<1)
#define SYS_CTRL_SYS_ENABLE_MASK    (0x7F<<1)
#define SYS_CTRL_SYS_ENABLE_SHIFT   (1)
#define SYS_CTRL_BB_ENABLE(n)       (((n)&31)<<17)
#define SYS_CTRL_BB_ENABLE_MASK     (31<<17)
#define SYS_CTRL_BB_ENABLE_SHIFT    (17)

//Ctrl_AHB
#define SYS_CTRL_SPLIT_SYS_MID_BIST_NORMAL (1<<0)
#define SYS_CTRL_SPLIT_SYS_MID_BIST_FORCE (0<<0)
#define SYS_CTRL_SPLIT_SYS_MID_DMA_NORMAL (1<<1)
#define SYS_CTRL_SPLIT_SYS_MID_DMA_FORCE (0<<1)
#define SYS_CTRL_SPLIT_SYS_MID_XCPU_NORMAL (1<<2)
#define SYS_CTRL_SPLIT_SYS_MID_XCPU_FORCE (0<<2)
#define SYS_CTRL_SPLIT_SYS_MID_AHB2AHB_NORMAL (1<<3)
#define SYS_CTRL_SPLIT_SYS_MID_AHB2AHB_FORCE (0<<3)
#define SYS_CTRL_SPLIT_SYS_MID_IFC_NORMAL (1<<4)
#define SYS_CTRL_SPLIT_SYS_MID_IFC_FORCE (0<<4)
#define SYS_CTRL_SPLIT_SYS_MID_USB_NORMAL (1<<5)
#define SYS_CTRL_SPLIT_SYS_MID_USB_FORCE (0<<5)
#define SYS_CTRL_SPLIT_SYS_MID_GOUDA_NORMAL (1<<6)
#define SYS_CTRL_SPLIT_SYS_MID_GOUDA_FORCE (0<<6)
#define SYS_CTRL_SPLIT_BB_MID_BIST_NORMAL (1<<16)
#define SYS_CTRL_SPLIT_BB_MID_BIST_FORCE (0<<16)
#define SYS_CTRL_SPLIT_BB_MID_VOC_NORMAL (1<<17)
#define SYS_CTRL_SPLIT_BB_MID_VOC_FORCE (0<<17)
#define SYS_CTRL_SPLIT_BB_MID_BCPU_NORMAL (1<<18)
#define SYS_CTRL_SPLIT_BB_MID_BCPU_FORCE (0<<18)
#define SYS_CTRL_SPLIT_BB_MID_AHB2AHB_NORMAL (1<<19)
#define SYS_CTRL_SPLIT_BB_MID_AHB2AHB_FORCE (0<<19)
#define SYS_CTRL_SPLIT_BB_MID_IFC_NORMAL (1<<20)
#define SYS_CTRL_SPLIT_BB_MID_IFC_FORCE (0<<20)
#define SYS_CTRL_SYS_FORCE_HSPLIT(n) (((n)&0x7F)<<0)
#define SYS_CTRL_SYS_FORCE_HSPLIT_MASK (0x7F<<0)
#define SYS_CTRL_SYS_FORCE_HSPLIT_SHIFT (0)
#define SYS_CTRL_BB_FORCE_HSPLIT(n) (((n)&31)<<16)
#define SYS_CTRL_BB_FORCE_HSPLIT_MASK (31<<16)
#define SYS_CTRL_BB_FORCE_HSPLIT_SHIFT (16)

//XCpu_Dbg_BKP
#define SYS_CTRL_BKPT_EN            (1<<0)
#define SYS_CTRL_BKPT_MODE(n)       (((n)&3)<<4)
#define SYS_CTRL_BKPT_MODE_I        (0<<4)
#define SYS_CTRL_BKPT_MODE_R        (1<<4)
#define SYS_CTRL_BKPT_MODE_W        (2<<4)
#define SYS_CTRL_BKPT_MODE_RW       (3<<4)
#define SYS_CTRL_STALLED            (1<<8)

//XCpu_Dbg_Addr
#define SYS_CTRL_BREAKPOINT_ADDRESS(n) (((n)&0x3FFFFFF)<<0)

//BCpu_Dbg_BKP
//#define SYS_CTRL_BKPT_EN          (1<<0)
//#define SYS_CTRL_BKPT_MODE(n)     (((n)&3)<<4)
//#define SYS_CTRL_BKPT_MODE_I      (0<<4)
//#define SYS_CTRL_BKPT_MODE_R      (1<<4)
//#define SYS_CTRL_BKPT_MODE_W      (2<<4)
//#define SYS_CTRL_BKPT_MODE_RW     (3<<4)
//#define SYS_CTRL_STALLED          (1<<8)

//BCpu_Dbg_Addr
//#define SYS_CTRL_BREAKPOINT_ADDRESS(n) (((n)&0x3FFFFFF)<<0)

//Cfg_Cpus_Cache_Ram_Disable
#define SYS_CTRL_XCPU_USE_MODE      (1<<0)
#define SYS_CTRL_XCPU_CLK_OFF_MODE  (1<<1)
#define SYS_CTRL_BCPU_USE_MODE      (1<<16)
#define SYS_CTRL_BCPU_CLK_OFF_MODE  (1<<17)
#define SYS_CTRL_XCPU_CACHE_RAM_DISABLE(n) (((n)&3)<<0)
#define SYS_CTRL_XCPU_CACHE_RAM_DISABLE_MASK (3<<0)
#define SYS_CTRL_XCPU_CACHE_RAM_DISABLE_SHIFT (0)
#define SYS_CTRL_BCPU_CACHE_RAM_DISABLE(n) (((n)&3)<<16)
#define SYS_CTRL_BCPU_CACHE_RAM_DISABLE_MASK (3<<16)
#define SYS_CTRL_BCPU_CACHE_RAM_DISABLE_SHIFT (16)

//Reset_Cause
#define SYS_CTRL_WATCHDOG_RESET_HAPPENED (1<<0)
#define SYS_CTRL_WATCHDOG_RESET_NO  (0<<0)
#define SYS_CTRL_GLOBALSOFT_RESET_HAPPENED (1<<4)
#define SYS_CTRL_GLOBALSOFT_RESET_NO (0<<4)
#define SYS_CTRL_HOSTDEBUG_RESET_HAPPENED (1<<8)
#define SYS_CTRL_HOSTDEBUG_RESET_NO (0<<8)
#define SYS_CTRL_ALARMCAUSE_HAPPENED (1<<12)
#define SYS_CTRL_ALARMCAUSE_NO      (0<<12)
#define SYS_CTRL_BOOT_MODE(n)       (((n)&0x3F)<<16)
#define SYS_CTRL_BOOT_MODE_MASK     (0x3F<<16)
#define SYS_CTRL_BOOT_MODE_SHIFT    (16)
#define SYS_CTRL_SW_BOOT_MODE(n)    (((n)&0x3F)<<22)
#define SYS_CTRL_SW_BOOT_MODE_MASK  (0x3F<<22)
#define SYS_CTRL_SW_BOOT_MODE_SHIFT (22)
#define SYS_CTRL_FONCTIONAL_TEST_MODE (1<<31)

//WakeUp
#define SYS_CTRL_FORCE_WAKEUP       (1<<0)

//Ignore_Charger
#define SYS_CTRL_IGNORE_CHARGER     (1<<0)


#endif
