#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08941610(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af4c64;
    iVar1 = param_1[0x26];
    if (iVar1 == 0) {
      iVar1 = param_1[0x25];
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x28) + 8),3);
      param_1[0x26] = 0;
      iVar1 = param_1[0x25];
    }
    if (iVar1 != 0) {
      FUN_089eafac(iVar1,3);
      param_1[0x25] = 0;
    }
    iVar4 = 0;
    iVar1 = param_1[0x24];
    iVar3 = 0;
    do {
      iVar2 = *(int *)(iVar1 + iVar3);
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),3);
        *(undefined4 *)(param_1[0x24] + iVar3) = 0;
        iVar1 = param_1[0x24];
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 2);
    if (iVar1 == 0) {
      iVar1 = param_1[0x23];
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[0x24] = 0;
      iVar1 = param_1[0x23];
    }
    if (iVar1 == 0) {
      DAT_08ac0e78 = *param_1;
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),3);
      param_1[0x23] = 0;
      DAT_08ac0e78 = *param_1;
    }
    param_1[7] = 0;
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

