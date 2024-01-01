#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088894fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f000000;
  if (param_4 == '\0') {
    uVar1 = 9;
  }
  else {
    uVar1 = 7;
  }
  uVar1 = FUN_08887f64(0x3f000000,param_1,param_2,uVar1,1);
  fVar2 = (float)FUN_08887cdc(param_2);
  if (fVar2 < 0.2) {
    uVar1 = FUN_08887f64(uVar3,uVar1,param_2,0x19,1);
  }
  return uVar1;
}

