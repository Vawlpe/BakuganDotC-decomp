#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a7e24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_089a7358();
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar3 < 5) {
    if (uVar3 == 1) {
      iVar2 = FUN_089a7728(param_1,1);
      if (iVar2 == 1) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else if (uVar3 == 2) {
      iVar2 = FUN_089bf93c(0x154,1);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (uVar3 == 3) {
      FUN_089a5c30();
      uVar3 = FUN_0890a5a8(param_1);
      if (uVar3 < 5) {
        if (uVar3 == 1) {
          iVar2 = FUN_0880cc48();
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0x128) = 0;
          *(undefined *)(param_1 + 0xe2c) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 5;
        }
        else if (uVar3 == 2) {
          iVar2 = FUN_0880cc48();
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0x128) = 1;
          *(undefined *)(param_1 + 0xe2c) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 5;
        }
        else if (uVar3 == 3) {
          iVar2 = FUN_0880cc48();
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0x128) = 2;
          *(undefined *)(param_1 + 0xe2c) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 5;
        }
        else if (uVar3 == 4) {
          *(undefined *)(param_1 + 0xe2d) = 1;
          *(undefined *)(param_1 + 0xe2c) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 5;
        }
        else {
          DAT_08ac0e70 = 1;
          iVar2 = FUN_0880d354();
          if (iVar2 == 0) {
            FUN_089bf6e8(0x15e,100);
            FUN_089a7da4(param_1,1);
            *(undefined4 *)(param_1 + 0x28) = 3;
            *(undefined4 *)(param_1 + 0x2c) = 2;
          }
          else {
            FUN_089a743c(param_1,0);
            *(undefined4 *)(param_1 + 0x28) = 3;
            *(undefined4 *)(param_1 + 0x2c) = 4;
            FUN_089a7da4(param_1,1);
            FUN_089a5c54(2,0);
            iVar2 = FUN_0880d2e0();
            if (iVar2 != 0) {
              uVar1 = FUN_0880cc48();
              FUN_0880d808(uVar1,0x7eff);
            }
            FUN_0880d308();
          }
        }
      }
    }
    else if (uVar3 == 4) {
      iVar2 = FUN_089a7728(param_1,0);
      if (iVar2 == 1) {
        FUN_089a7560(param_1,1);
        FUN_089a75c0(param_1,1,*(undefined *)(param_1 + 0x74));
        FUN_089a7da4(param_1,1);
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
    else {
      DAT_08ac0e70 = 1;
      FUN_089bf6e8(0x154,100);
      FUN_089a743c(param_1,1);
      FUN_089a7560(param_1,0);
      FUN_089a75c0(param_1,0,*(undefined *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 6;
  }
  return;
}

