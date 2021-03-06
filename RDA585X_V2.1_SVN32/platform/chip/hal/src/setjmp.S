/*              Copyright (c) 2003 CIITec, Inc. for setjmp/longjmp        */
#include "regdef.h"
#include "cp0.h"


 
#ifdef __mips16
/* This file contains 32 bit assembly code.  */
    .set nomips16
#endif

    .text
    .set    reorder
/*************************************************************************/
/*                                                                       */
/* FUNCTION                                                              */
/*                                                                       */
/*      Setjmp                                                            */
/*                                                                       */
/* DESCRIPTION                                                           */
/*                                                                       */
/*      Saves the current state of the program.                          */
/*                                                                       */
/* CALLED BY                                                             */
/*                                                                       */
/*      Application                                                      */
/*                                                                       */
/* CALLS                                                                 */
/*                                                                       */
/*      None                                                             */ 
/*                                                                       */
/* INPUTS                                                                */
/*                                                                       */
/*      env                   Variable in which environment is stored    */ 
/*                                                                       */
/* OUTPUTS                                                               */
/*                                                                       */
/*      Setjmp return 0 after saving a stack environment. If Setjmp      */
/*      returns as a result of a longjmp call, it returns value argument */
/*   of longjmp,or if the value argument of longjmp is 0, setjmp      */
/*   returns 1.                               */
/*************************************************************************/
//int  setjmp ((jmp_buf env))
//{
    .globl  setjmp
    .ent    setjmp
setjmp:
    .frame  sp, 0, ra
    
    
    sw  s0,0(a0)           # save $16 (s0-s7)
    sw  s1,4(a0)           # save $17 
    sw  s2,8(a0)           # save $18
    sw  s3,12(a0)          # save $19
    sw  s4,16(a0)              # save $20
    sw  s5,20(a0)          # save $21
    sw  s6,24(a0)          # save $22
    sw  s7,28(a0)          # save $23
    sw  fp,32(a0)          # save $30 (fp)

    
    sw  sp,36(a0)          # save $29 (sp)
    sw  ra,40(a0)          # save $31 (ra)

    move    v0,$0

    j   ra
    .type   setjmp,@function
    .size   setjmp,.-setjmp

    .end    setjmp
//}


/*************************************************************************/
/*                                                                       */
/* FUNCTION                                                              */
/*                                                                       */
/*      longjmp                                                          */
/*                                                                       */
/* DESCRIPTION                                                           */
/*                                                                       */
/*      Restores stack enviroment and execution locate.                  */
/*                                                                       */
/* CALLED BY                                                             */
/*                                                                       */
/*      Application                                                      */
/*                                                                       */
/* CALLS                                                                 */
/*                                                                       */
/*      None                                                             */
/*                                                                       */
/* INPUTS                                                                */
/*                                                                       */
/*      env, value        env is the variable in which environment*/
/*                is stored                   */
/*                value to be returned to setjmp call     */
/*                                                                       */
/* OUTPUTS                                                               */
/*                                                                       */
/*       None                                 */            
/*************************************************************************/
//volatile void longjmp ((jmp_buf env),  int value)
//{
    .globl  longjmp
    .ent    longjmp
longjmp:
    .frame  sp, 0, ra

    
    lw  s0,0(a0)           # Recover $16 (s0-s7)
    lw  s1,4(a0)           # Recover $17
    lw  s2,8(a0)               # Recover $18
    lw  s3,12(a0)          # Recover $19
    lw  s4,16(a0)          # Recover $20
    lw  s5,20(a0)          # Recover $21
    lw  s6,24(a0)          # Recover $22
    lw  s7,28(a0)          # Recover $23
    lw  fp,32(a0)              # Recover $30 (fp)

    lw  sp,36(a0)          # Recover $29 (sp)
    lw  ra,40(a0)                 # Recover $31 (ra)

    bne a1,$0,1f
    li  a1,1
1:
    move    v0,a1
    move    a0,a1

    j   ra

    .type   longjmp,@function
    .size   longjmp,.-longjmp
    .end longjmp
//}


