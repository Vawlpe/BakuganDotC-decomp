#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08825444(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xf8);
    *(undefined **)(param_1 + 0x14) = &DAT_08af16f4;
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    if ((*(uint *)(param_1 + 0x1b8) & 2) == 0) {
      uVar2 = *(uint *)(param_1 + 0x1b8);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xf0);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(param_1 + 0x1b8);
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar1,0,0);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0xf0) = 0;
        uVar2 = *(uint *)(param_1 + 0x1b8);
      }
    }
    if (((uVar2 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x19c), iVar1 != 0)) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x19c) = 0;
    }
    FUN_089e7d08(param_1 + 0x100,2);
    FUN_089d87bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

