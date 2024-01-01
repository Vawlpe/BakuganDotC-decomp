#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889c790(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_0889b4c0(param_3);
  if (param_2 != (undefined4 *)0x0) {
    FUN_0889b534(param_1,param_2);
    uVar1 = FUN_0889b5e4(param_1,param_3);
    *param_2 = uVar1;
    if ((param_3 < 0x15) || (0x20 < param_3)) {
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      piVar2 = (int *)FUN_089d7d74(8,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      piVar3 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        piVar2[1] = (int)&DAT_08af62c8;
        *piVar2 = param_3;
        piVar2[1] = (int)&DAT_08af6c30;
        piVar3 = piVar2;
      }
      param_2[1] = piVar3;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      piVar2 = (int *)FUN_089d7d74(8,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      piVar3 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        piVar2[1] = (int)&DAT_08af62c8;
        *piVar2 = param_3;
        piVar2[1] = (int)&DAT_08af6c90;
        piVar3 = piVar2;
      }
      param_2[2] = piVar3;
    }
    else {
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      piVar2 = (int *)FUN_089d7d74(8,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      piVar3 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        piVar2[1] = (int)&DAT_08af62c8;
        *piVar2 = param_3;
        piVar2[1] = (int)&DAT_08af6cf0;
        piVar3 = piVar2;
      }
      param_2[1] = piVar3;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      piVar2 = (int *)FUN_089d7d74(8,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      piVar3 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        piVar2[1] = (int)&DAT_08af62c8;
        *piVar2 = param_3;
        piVar2[1] = (int)&DAT_08af6d50;
        piVar3 = piVar2;
      }
      param_2[2] = piVar3;
    }
  }
  return;
}

