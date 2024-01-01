#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ff4f4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  
  fVar7 = *(float *)(param_1 + 0xb8);
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
    uVar8 = 0;
  }
  else if (480.0 < fVar7) {
    fVar7 = 480.0;
    uVar8 = 0x1e0;
  }
  else {
    uVar8 = (uint)fVar7;
  }
  *(float *)(param_1 + 0xb8) = fVar7;
  fVar7 = *(float *)(param_1 + 0xbc);
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
    uVar9 = 0;
  }
  else if (272.0 < fVar7) {
    fVar7 = 272.0;
    uVar9 = 0x110;
  }
  else {
    uVar9 = (uint)fVar7;
  }
  *(float *)(param_1 + 0xbc) = fVar7;
  uVar2 = uVar8 & 1;
  if ((int)uVar8 < 0) {
    uVar2 = -uVar2;
  }
  if (uVar2 != 0) {
    uVar8 = uVar8 + 1;
  }
  uVar2 = uVar9 & 1;
  if ((int)uVar9 < 0) {
    uVar2 = -uVar2;
  }
  if (uVar2 != 0) {
    uVar9 = uVar9 + 1;
  }
  fVar10 = *(float *)(param_1 + 0x104);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar6 = *(float *)(param_1 + 0xb4);
  fVar7 = *(float *)(param_1 + 0xcc);
  fVar5 = *(float *)(param_1 + 200);
  fVar11 = *(float *)(param_1 + 0xf0);
  iVar1 = *(int *)(param_1 + 0xac);
  *(float *)(iVar1 + 0x60) =
       *(float *)(param_1 + 0xb0) - ((float)uVar8 * 0.5 - *(float *)(param_1 + 0xc0)) * fVar10;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(float *)(iVar1 + 100) = fVar6 - ((float)uVar9 * 0.5 - fVar4) * fVar10;
  *(float *)(iVar1 + 0x68) = fVar11 + 10.0;
  FUN_089f4924(((float)uVar8 + fVar5) * fVar10,((float)uVar9 + fVar7) * fVar10,
               *(undefined4 *)(param_1 + 0xac));
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      local_40 = *(float *)(param_1 + 0xe0) * 4.0 + 1.0;
      local_3c = *(float *)(param_1 + 0xe4) * 4.0 + 1.0;
      local_38 = 0x40000000;
      local_34 = 0x40000000;
      FUN_089f4060(*(undefined4 *)(param_1 + 0xac),&local_40);
    }
  }
  else if (iVar1 < 2) {
    uVar3 = *(undefined4 *)(param_1 + 0xac);
    uVar12 = *(undefined4 *)(param_1 + 0xe0);
    uVar13 = *(undefined4 *)(param_1 + 0xe4);
    fVar7 = (float)FUN_089f4944(uVar3);
    fVar4 = *(float *)(param_1 + 0xe8);
    local_24 = (float)FUN_089f494c(*(undefined4 *)(param_1 + 0xac));
    local_24 = local_24 * *(float *)(param_1 + 0xec);
    local_30 = uVar12;
    local_2c = uVar13;
    local_28 = fVar7 * fVar4;
    FUN_089f4060(uVar3,&local_30);
  }
  return;
}

