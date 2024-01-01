#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ff214(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_90 [4];
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70 [4];
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  pfVar4 = local_90;
  fVar8 = *(float *)(param_1 + 0xb8);
  if (fVar8 < 0.0) {
    fVar8 = 0.0;
    uVar5 = 0;
  }
  else if (480.0 < fVar8) {
    fVar8 = 480.0;
    uVar5 = 0x1e0;
  }
  else {
    uVar5 = (uint)fVar8;
  }
  *(float *)(param_1 + 0xb8) = fVar8;
  fVar8 = *(float *)(param_1 + 0xbc);
  if (fVar8 < 0.0) {
    fVar8 = 0.0;
    uVar6 = 0;
  }
  else if (272.0 < fVar8) {
    fVar8 = 272.0;
    uVar6 = 0x110;
  }
  else {
    uVar6 = (uint)fVar8;
  }
  *(float *)(param_1 + 0xbc) = fVar8;
  uVar1 = uVar5 & 1;
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  if (uVar1 != 0) {
    uVar5 = uVar5 + 1;
  }
  uVar1 = uVar6 & 1;
  if ((int)uVar6 < 0) {
    uVar1 = -uVar1;
  }
  if (uVar1 != 0) {
    uVar6 = uVar6 + 1;
  }
  FUN_089ff4f4(param_1);
  iVar3 = *(int *)(param_1 + 0x1c);
  fVar15 = (float)uVar5 + 31.0;
  local_4c = (float)uVar5;
  iVar2 = 0;
  fVar16 = fVar15 * -0.5;
  fVar8 = (float)uVar6 + 31.0;
  local_50 = (float)uVar6;
  fVar15 = fVar15 * 0.5;
  fVar14 = fVar8 * -0.5;
  fVar8 = fVar8 * 0.5;
  do {
    local_90[1] = 0.0;
    local_78 = 0;
    local_90[0] = fVar16;
    local_90[2] = fVar15;
    local_90[3] = fVar16;
    local_80 = fVar15;
    local_7c = fVar16;
    local_74 = fVar15;
    local_70[3] = 0.0;
    local_60 = 0;
    local_70[0] = fVar14;
    local_70[1] = fVar14;
    local_70[2] = fVar14;
    local_5c = fVar8;
    local_58 = fVar8;
    local_54 = fVar8;
    fVar10 = *(float *)(param_1 + 0x104);
    fVar11 = pfVar4[8];
    fVar13 = *(float *)(param_1 + 0xb4);
    fVar7 = 31.0;
    if ((iVar2 == 1) || (fVar9 = 31.0, iVar2 == 6)) {
      fVar9 = local_4c;
    }
    if ((iVar2 == 3) || (iVar2 == 4)) {
      uVar12 = *(undefined4 *)(param_1 + 0xf0);
      fVar7 = local_50;
    }
    else {
      uVar12 = *(undefined4 *)(param_1 + 0xf0);
    }
    *(float *)(iVar3 + 0x60) = *(float *)(param_1 + 0xb0) + *pfVar4 * fVar10;
    *(float *)(iVar3 + 100) = fVar13 + fVar11 * fVar10;
    *(undefined4 *)(iVar3 + 0x68) = uVar12;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    FUN_089f4534(fVar9 * *(float *)(param_1 + 0x104),fVar7 * *(float *)(param_1 + 0x104),iVar3);
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(iVar3 + 4);
    pfVar4 = pfVar4 + 1;
  } while (iVar2 < 8);
  (**(code **)(*(int *)(param_1 + 0x74) + 0x34))
            (param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x30));
  return;
}

