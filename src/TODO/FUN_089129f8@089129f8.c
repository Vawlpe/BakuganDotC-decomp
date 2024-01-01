#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089129f8(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af499c;
    FUN_089cec00(DAT_08ac5934);
    iVar2 = *(int *)(param_1 + 0x13dc);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x13e0);
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 8),3);
      *(undefined4 *)(param_1 + 0x13dc) = 0;
      iVar2 = *(int *)(param_1 + 0x13e0);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x13e4);
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x13e0) = 0;
      iVar2 = *(int *)(param_1 + 0x13e4);
    }
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x13e4) = 0;
    }
    FUN_089d8928(param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    uVar1 = FUN_089d9674();
    FUN_089d9740(uVar1,0);
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

