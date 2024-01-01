#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a7bd8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_089a7358();
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar2 < 5) {
    if (uVar2 == 1) {
      iVar1 = FUN_089a7728(param_1,1);
      if (iVar1 == 1) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else if (uVar2 == 2) {
      iVar1 = FUN_089bf93c(0x15e,1);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (uVar2 == 3) {
      iVar1 = FUN_0890a5a8(param_1);
      if (iVar1 < 1) {
        if (-1 < iVar1) {
          FUN_089a743c(param_1,0);
          *(undefined4 *)(param_1 + 0x2c) = 4;
        }
      }
      else if (iVar1 < 2) {
        DAT_08ac0e70 = 1;
        FUN_089bf6e8(0x154,100);
        *(undefined4 *)(param_1 + 0x28) = 4;
        *(undefined4 *)(param_1 + 0x2c) = 2;
      }
      else if (iVar1 < 3) {
        DAT_08ac0e70 = 1;
        FUN_089bf6e8(1999,100);
        *(undefined4 *)(param_1 + 0x28) = 5;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
    else if (uVar2 == 4) {
      iVar1 = FUN_089a7728(param_1,0);
      if (iVar1 == 1) {
        FUN_089a7560(param_1,1);
        FUN_089a75c0(param_1,1,*(undefined *)(param_1 + 0x74));
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
    else {
      DAT_08ac0e70 = 1;
      FUN_089bf6e8(0x15e,100);
      FUN_089a743c(param_1,1);
      FUN_089a7560(param_1,0);
      FUN_089a75c0(param_1,0,*(undefined *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 3;
  }
  return;
}

