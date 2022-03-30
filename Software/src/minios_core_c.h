
#ifndef  MINI_CORE_C_H
#define  MINI_CORE_C_H


#include "minios.h"


/* THUMB指令集USR工作模式掩码 */
#define MODE_USR            0x01000000


/*********************************** 变量声明 *************************************/
extern U32 guiCurTask;


/*********************************** 函数声明 *************************************/
extern void MIN_ContextSwitch(STACKREG* pstrCurTaskStackRegAddr,
                              STACKREG* pstrNextTaskStackRegAddr);
extern void MIN_SwitchToTask(STACKREG* pstrNextTaskStackRegAddr);


#endif

