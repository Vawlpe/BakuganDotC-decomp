#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08909ac0(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af47a4;
    FUN_089cec00(DAT_08ac5934);
    FUN_089d8928(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (DAT_08ac0e70 == 0) {
      FUN_08909a94(param_1);
      FUN_089d8928(&DAT_08b01000);
      if (DAT_08ac0e60 != 0) {
        FUN_089d8634();
        FUN_089d7fd8(DAT_08ac0e60,0,0);
        FUN_089d866c();
      }
      DAT_08ac0e60 = 0;
      iVar1 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x38);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x34);
    }
    else {
      FUN_089ed0c8(iVar1,3);
      *(undefined4 *)(param_1 + 0x38) = 0;
      iVar1 = *(int *)(param_1 + 0x34);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    else {
      FUN_089ed0c8(iVar1,3);
      *(undefined4 *)(param_1 + 0x34) = 0;
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x18);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x1c) = 0;
      iVar1 = *(int *)(param_1 + 0x18);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar1 = *(int *)(param_1 + 0x10);
    }
    if (iVar1 != 0) {
      FUN_089bf300(iVar1,3);
    }
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

