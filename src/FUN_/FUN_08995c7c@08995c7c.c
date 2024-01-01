#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08995c7c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  uVar5 = *(uint *)(param_1 + 0x2c);
  if (uVar5 < 6) {
    if (uVar5 == 1) {
      if (*(int *)(param_1 + 0x118) == 8) {
        FUN_08992f10(param_1,0xe);
      }
      else if (*(int *)(param_1 + 0x108) == 0) {
        FUN_08992f10(param_1,8);
      }
      else {
        FUN_08992f10(param_1,10);
      }
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    else if (uVar5 == 2) {
      iVar4 = FUN_08992f50(param_1);
      if (iVar4 == 1) {
        if (*(int *)(param_1 + 0x118) == 8) {
          *(undefined4 *)(param_1 + 0x28) = 5;
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x2c) = 3;
        }
      }
    }
    else if (uVar5 == 3) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x58);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x70);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x74);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x7c);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    else if (uVar5 == 4) {
      iVar4 = *(int *)(param_1 + 0x8c) + 1;
      *(int *)(param_1 + 0x8c) = iVar4;
      fVar8 = (float)iVar4 * 0.1666667;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x7c) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x78) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x74) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x70) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x58) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = fVar8;
      iVar4 = 2;
      if (5 < *(int *)(param_1 + 0x8c)) {
        iVar6 = 8;
        do {
          iVar4 = iVar4 + 1;
          iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
          iVar6 = iVar6 + 4;
        } while (iVar4 < 10);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        if (*(int *)(param_1 + 0x108) == 1) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x4c);
          *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
          iVar4 = *(int *)(param_1 + 0x1c);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x1c);
        }
        *(uint *)(*(int *)(iVar4 + 0x5c) + 0xd0) = *(uint *)(*(int *)(iVar4 + 0x5c) + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar6 = 0x8c;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x7c);
        iVar4 = 0x23;
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
        do {
          iVar4 = iVar4 + 1;
          iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
          iVar6 = iVar6 + 4;
        } while (iVar4 < 0x29);
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
    else if (uVar5 == 5) {
      iVar4 = *(int *)(param_1 + 0x8c) + 1;
      *(int *)(param_1 + 0x8c) = iVar4;
      iVar6 = 2;
      iVar7 = 8;
      fVar8 = (float)iVar4 * 0.1666667;
      do {
        iVar6 = iVar6 + 1;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = fVar8;
        iVar7 = iVar7 + 4;
      } while (iVar6 < 8);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x5c) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x4c) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0xbc) = fVar8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = fVar8;
      fVar9 = fVar8 * 0.5;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0xbc) = fVar8;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
      *(float *)(iVar4 + 0xb0) = fVar9;
      *(float *)(iVar4 + 0xb4) = fVar9;
      *(float *)(iVar4 + 0xb8) = fVar9;
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0xbc) = fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 0xbc) = fVar9;
      iVar4 = 0x23;
      iVar6 = 0x8c;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0xbc) = fVar9;
      do {
        iVar4 = iVar4 + 1;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = fVar8;
        iVar6 = iVar6 + 4;
      } while (iVar4 < 0x29);
      if (5 < *(int *)(param_1 + 0x8c)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0xbc) = 0x3f800000;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0xbc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0xbc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0xbc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0xbc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0xbc) = 0x3f800000;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        uVar2 = DAT_08ac3bec;
        uVar1 = DAT_08ac3be8;
        uVar3 = DAT_08ac3be4;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
        *(undefined4 *)(iVar4 + 0xb0) = DAT_08ac3be0;
        *(undefined4 *)(iVar4 + 0xb4) = uVar3;
        *(undefined4 *)(iVar4 + 0xb8) = uVar1;
        *(undefined4 *)(iVar4 + 0xbc) = uVar2;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) + 0xbc) = 0x3f800000;
        FUN_08992a1c(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
    }
    else {
      uVar3 = FUN_089edb80();
      iVar4 = FUN_089edf70(uVar3);
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 3;
  }
  return;
}

