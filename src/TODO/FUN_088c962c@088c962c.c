#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c962c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af2d4c;
    FUN_089cec00(DAT_08ac5934);
    iVar1 = *(int *)(param_1 + 0x20c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x208);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x20c) = 0;
      iVar1 = *(int *)(param_1 + 0x208);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x60);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x208) = 0;
      iVar1 = *(int *)(param_1 + 0x60);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x60) = 0;
      iVar1 = *(int *)(param_1 + 0x10);
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    DAT_08abea25 = 0;
    DAT_08abea26 = 1;
    DAT_08abea27 = 0;
    DAT_08abea28 = 0;
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

