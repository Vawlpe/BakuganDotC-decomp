#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08816914(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x38);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x3c) = 0;
      iVar1 = *(int *)(param_1 + 0x38);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x30);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x38) = 0;
      iVar1 = *(int *)(param_1 + 0x30);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2c);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x28) + 8),3);
      *(undefined4 *)(param_1 + 0x30) = 0;
      iVar1 = *(int *)(param_1 + 0x2c);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      FUN_089eafac(iVar1,3);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      iVar1 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

