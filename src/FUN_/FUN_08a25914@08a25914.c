#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_08a25914(short *param_1,undefined4 param_2)

{
  int iVar1;
  undefined auStack_80 [112];
  
  if (param_1 == (short *)0x0) {
    return (short *)0x0;
  }
  iVar1 = FUN_08a247b8(param_1,1,param_2);
  if (iVar1 == 0) {
    *param_1 = *param_1 + 1;
  }
  else {
    FUN_08a10068(auStack_80);
    iVar1 = FUN_08a24e90(param_1,1,param_2,auStack_80);
    if (iVar1 == 0) {
      return (short *)0x0;
    }
    iVar1 = FUN_08a10608(auStack_80);
    if (iVar1 == 0) {
      return (short *)0x0;
    }
    param_1 = (short *)FUN_08a257ac(param_1,1,param_2,auStack_80);
    FUN_08a10580(auStack_80);
  }
  return param_1;
}

