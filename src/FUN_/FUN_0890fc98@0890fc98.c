#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890fc98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar3 < 6) {
    if (uVar3 == 1) {
      uVar2 = FUN_089edb80();
      iVar1 = FUN_089edf70(uVar2);
      if (iVar1 != 0) {
        iVar1 = FUN_089c59d4();
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x2c);
        }
        else {
          uVar2 = FUN_089c59f0();
          FUN_089c6350(uVar2,0x2c0000a,0,0);
          iVar1 = *(int *)(param_1 + 0x2c);
        }
        *(int *)(param_1 + 0x2c) = iVar1 + 1;
      }
    }
    else if (uVar3 != 2) {
      if (uVar3 == 3) {
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
          return;
        }
        iVar1 = FUN_089c59d4();
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x2c);
        }
        else {
          uVar2 = FUN_089c59f0();
          FUN_089c6350(uVar2,0,0,0);
          iVar1 = *(int *)(param_1 + 0x2c);
        }
        *(int *)(param_1 + 0x2c) = iVar1 + 1;
        return;
      }
      if (uVar3 == 4) {
        if (*(float *)(**(int **)(param_1 + 0x1c) + 0xbc) == 0.0) {
          iVar1 = FUN_089edb80();
          *(undefined4 *)(iVar1 + 0x30) = 0;
          *(undefined4 *)(iVar1 + 0x34) = 0;
          *(undefined4 *)(iVar1 + 0x38) = 0;
          *(undefined4 *)(iVar1 + 0x3c) = 0x3f000000;
          iVar1 = FUN_089edb80();
          *(undefined4 *)(iVar1 + 0x40) = 0;
          *(undefined4 *)(iVar1 + 0x44) = 0;
          *(undefined4 *)(iVar1 + 0x48) = 0;
          *(undefined4 *)(iVar1 + 0x4c) = 0;
          uVar2 = FUN_089edb80();
          FUN_089edf24(uVar2,5);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          return;
        }
        iVar6 = 0;
        iVar1 = 0;
        do {
          pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc);
          *pfVar4 = *pfVar4 - 0.25;
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
          if (*(float *)(iVar5 + 0xbc) < 0.0) {
            *(undefined4 *)(iVar5 + 0xbc) = 0;
          }
          iVar6 = iVar6 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar6 < 0x15);
        fVar7 = *(float *)(param_1 + 0x2c0) - 0.25;
        *(float *)(param_1 + 0x2c0) = fVar7;
        if (0.0 <= fVar7) {
          return;
        }
        *(undefined4 *)(param_1 + 0x2c0) = 0;
        return;
      }
      if (uVar3 == 5) {
        uVar2 = FUN_089edb80();
        iVar1 = FUN_089edf70(uVar2);
        if (iVar1 == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        return;
      }
      iVar1 = FUN_0890ad3c();
      if (iVar1 != 0) {
        return;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
    if (*(float *)(**(int **)(param_1 + 0x1c) + 0xbc) == 1.0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      iVar6 = 0;
      iVar1 = 0;
      do {
        pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc);
        *pfVar4 = *pfVar4 + 0.25;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
        if (1.0 < *(float *)(iVar5 + 0xbc)) {
          *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar6 < 0x15);
      fVar7 = *(float *)(param_1 + 0x2c0) + 0.25;
      *(float *)(param_1 + 0x2c0) = fVar7;
      if (1.0 < fVar7) {
        *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
      }
    }
  }
  return;
}

