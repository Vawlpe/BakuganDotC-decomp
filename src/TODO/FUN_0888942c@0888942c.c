#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888942c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  param_4 = param_4 & 0xff;
  iVar1 = FUN_088893c8(param_2,param_3,param_3);
  uVar4 = 0x3f800000;
  if (iVar1 == 0) {
    iVar1 = FUN_088893ec(param_2,param_3);
    uVar2 = 0xf;
    if ((iVar1 == 0) && (uVar2 = 3, param_4 != 0)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0x11;
  }
  uVar2 = FUN_08887f64(uVar4,param_1,param_2,uVar2,0);
  fVar3 = (float)FUN_08887cdc(param_2);
  if (fVar3 < 0.2) {
    uVar2 = FUN_08887f64(uVar4,uVar2,param_2,0x19,0);
  }
  return uVar2;
}

