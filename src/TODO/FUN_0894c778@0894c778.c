#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894c778(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) == 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) == 0) {
      iVar1 = *(int *)(param_1 + 0x70);
    }
    else {
      iVar1 = DONE_NotZero_DAT_08AC5874();
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x74);
      }
      else {
        uVar4 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar4,1,0,0);
        iVar1 = *(int *)(param_1 + 0x74);
      }
      FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4 + 4));
      uVar3 = *(int *)(param_1 + 0x74) + 1;
      if ((int)uVar3 < 0) {
        uVar3 = -(-uVar3 & 3);
      }
      else {
        uVar3 = uVar3 & 3;
      }
      *(uint *)(param_1 + 0x74) = uVar3;
      iVar1 = (uVar3 + 1) * 4;
      uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 100);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 100) = uVar4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 100) = uVar4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) = uVar4;
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1),0);
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),0);
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48),0);
      FUN_0894c6f4(param_1);
      iVar1 = *(int *)(param_1 + 0x70);
    }
  }
  else {
    iVar1 = DONE_NotZero_DAT_08AC5874();
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
    }
    else {
      uVar4 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar4,1,0,0);
      iVar1 = *(int *)(param_1 + 0x74);
    }
    FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4 + 4));
    uVar3 = *(int *)(param_1 + 0x74) + 3;
    if ((int)uVar3 < 0) {
      uVar3 = -(-uVar3 & 3);
    }
    else {
      uVar3 = uVar3 & 3;
    }
    *(uint *)(param_1 + 0x74) = uVar3;
    iVar1 = (uVar3 + 1) * 4;
    uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 100);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 100) = uVar4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 100) = uVar4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) = uVar4;
    FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1),0);
    FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),0);
    FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48),0);
    FUN_0894c6f4(param_1);
    iVar1 = *(int *)(param_1 + 0x70);
  }
  if (iVar1 < 0x10) {
    fVar5 = (float)(iVar1 + 1) * 0.1 * 0.0625 + 1.15;
    fVar6 = (float)iVar1 * 0.021875;
    FUN_089f4954(fVar5,fVar5,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48),0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    *(float *)(iVar1 + 0xc0) = fVar6;
    *(float *)(iVar1 + 0xc4) = fVar6;
    *(float *)(iVar1 + 200) = fVar6;
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
    pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0xbc);
    *pfVar2 = *pfVar2 - 0.075;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  else {
    FUN_0894c6f4(param_1);
  }
  return;
}

