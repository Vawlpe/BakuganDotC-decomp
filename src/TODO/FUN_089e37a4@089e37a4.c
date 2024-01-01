#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089e37a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_08ac5c90 != 0) {
    (**(code **)(*(int *)(DAT_08ac5c90 + 0x20) + 0xc))
              (DAT_08ac5c90 + *(short *)(*(int *)(DAT_08ac5c90 + 0x20) + 8),3);
    DAT_08ac5c90 = 0;
  }
  if (param_1 == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x2a0,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    param_1 = 0;
    if (iVar2 != 0) {
      FUN_089e2910(iVar2);
      param_1 = iVar2;
    }
  }
  DAT_08ac5c90 = param_1;
  return param_1;
}

