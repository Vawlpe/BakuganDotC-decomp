#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08887f64(float param_1,float param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  
  iVar1 = 0;
  uVar3 = FUN_08886d3c(param_2,param_1);
  if ((int)uVar3 != 0) {
    fVar2 = (float)FUN_08887e58(param_3,(int)((ulonglong)uVar3 >> 0x20));
    iVar1 = (int)fVar2;
  }
  uVar3 = FUN_08886d3c(param_3,param_4 + 1);
  if ((int)uVar3 != 0) {
    fVar2 = (float)FUN_08887e58(param_3,(int)((ulonglong)uVar3 >> 0x20));
    iVar1 = (int)((float)iVar1 + fVar2);
  }
  if (iVar1 == 0) {
    return param_2;
  }
  if (param_5 < 1) {
    if (param_5 < 0) {
      param_2 = param_2 * 1.0;
      goto LAB_08888038;
    }
    fVar2 = param_1 * (float)iVar1 + 100.0;
  }
  else {
    if (1 < param_5) {
      param_2 = param_2 * 1.0;
      goto LAB_08888038;
    }
    fVar2 = 100.0 - param_1 * (float)iVar1;
  }
  param_2 = fVar2 * param_2;
LAB_08888038:
  return param_2 * 0.01;
}

