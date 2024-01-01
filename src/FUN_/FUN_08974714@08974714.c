#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08974714(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar3 < 6) {
    if (uVar3 == 1) {
      uVar2 = FUN_089edb80();
      iVar1 = FUN_089edf70(uVar2);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else if (uVar3 == 2) {
      DAT_08ac0e70 = 1;
      FUN_089bf6e8(0x13c,100);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else if (uVar3 == 3) {
      iVar1 = FUN_089bf93c(0x13c,1);
      if (iVar1 == 0) {
        FUN_08909df4(param_1,0);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else if (uVar3 == 4) {
      iVar1 = FUN_089edb80();
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
      iVar1 = FUN_089edb80();
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      uVar2 = FUN_089edb80();
      FUN_089edf24(uVar2,0x10);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else if (uVar3 == 5) {
      uVar2 = FUN_089edb80();
      iVar1 = FUN_089edf70(uVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
    }
    else {
      iVar1 = FUN_089edb80();
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      iVar1 = FUN_089edb80();
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(undefined4 *)(iVar1 + 0x4c) = 0x3f800000;
      uVar2 = FUN_089edb80();
      FUN_089edf24(uVar2,0x10);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 0x10;
  }
  return;
}

