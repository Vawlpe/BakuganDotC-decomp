#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880490c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af13b4;
    FUN_089cec00(DAT_08ac5934);
    uVar1 = FUN_089d9674();
    FUN_089d9740(uVar1,0);
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x94);
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 8),3);
      *(undefined4 *)(param_1 + 0x98) = 0;
      iVar2 = *(int *)(param_1 + 0x94);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x90);
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x94) = 0;
      iVar2 = *(int *)(param_1 + 0x90);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x70);
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x90) = 0;
      iVar2 = *(int *)(param_1 + 0x70);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x6c);
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x70) = 0;
      iVar2 = *(int *)(param_1 + 0x6c);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xa4);
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x9c) = 0;
      iVar2 = *(int *)(param_1 + 0xa4);
    }
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 8),3);
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

