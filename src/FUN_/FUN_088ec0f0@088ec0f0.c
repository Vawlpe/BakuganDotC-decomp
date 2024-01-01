#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ec0f0(int param_1)

{
  undefined auVar1 [12];
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  float fVar12;
  
  iVar4 = DAT_08ac5c90;
  auVar1 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x50),0x3d4ccccd);
  fVar12 = auVar1._0_4_;
  fVar2 = auVar1._4_4_;
  fVar3 = auVar1._8_4_;
  if (0.0 < fVar12) {
    fVar12 = fVar12 * 4096.0 + 0.5;
  }
  else {
    fVar12 = fVar12 * 4096.0 - 0.5;
  }
  iVar11 = (int)fVar12;
  if (0.0 < fVar2) {
    fVar12 = fVar2 * 4096.0 + 0.5;
  }
  else {
    fVar12 = fVar2 * 4096.0 - 0.5;
  }
  iVar7 = (int)fVar12;
  if (0.0 < fVar3) {
    fVar12 = fVar3 * 4096.0 + 0.5;
  }
  else {
    fVar12 = fVar3 * 4096.0 - 0.5;
  }
  iVar5 = (int)fVar12;
  piVar6 = *(int **)(param_1 + 0x2c);
  piVar6[9] = iVar11;
  piVar6[10] = iVar7;
  piVar6[0xb] = iVar5;
  iVar8 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar8 + 0x18) = iVar11;
  *(int *)(iVar8 + 0x1c) = iVar7;
  *(int *)(iVar8 + 0x20) = iVar5;
  iVar8 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar8 + 0xc) = iVar11;
  *(int *)(iVar8 + 0x10) = iVar7;
  *(int *)(iVar8 + 0x14) = iVar5;
  *piVar6 = iVar11;
  piVar6[1] = iVar7;
  piVar6[2] = iVar5;
  auVar1 = vscl_t(*(undefined (*) [12])(iVar4 + 0x60),0x3d4ccccd);
  fVar12 = auVar1._0_4_;
  fVar2 = auVar1._4_4_;
  fVar3 = auVar1._8_4_;
  if (0.0 < fVar12) {
    fVar12 = fVar12 * 4096.0 + 0.5;
  }
  else {
    fVar12 = fVar12 * 4096.0 - 0.5;
  }
  iVar11 = (int)fVar12;
  if (0.0 < fVar2) {
    fVar12 = fVar2 * 4096.0 + 0.5;
  }
  else {
    fVar12 = fVar2 * 4096.0 - 0.5;
  }
  iVar7 = (int)fVar12;
  if (0.0 < fVar3) {
    fVar12 = fVar3 * 4096.0 + 0.5;
  }
  else {
    fVar12 = fVar3 * 4096.0 - 0.5;
  }
  iVar5 = (int)fVar12;
  iVar8 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar8 + 0x54) = iVar11;
  *(int *)(iVar8 + 0x58) = iVar7;
  *(int *)(iVar8 + 0x5c) = iVar5;
  iVar9 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar9 + 0x48) = iVar11;
  *(int *)(iVar9 + 0x4c) = iVar7;
  *(int *)(iVar9 + 0x50) = iVar5;
  iVar9 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar9 + 0x3c) = iVar11;
  *(int *)(iVar9 + 0x40) = iVar7;
  *(int *)(iVar9 + 0x44) = iVar5;
  *(int *)(iVar8 + 0x30) = iVar11;
  *(int *)(iVar8 + 0x34) = iVar7;
  *(int *)(iVar8 + 0x38) = iVar5;
  iVar7 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar11 = *(int *)(param_1 + 0x2c);
  uVar10 = (undefined2)(int)*(float *)(iVar4 + 0x158);
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0x66) = uVar10;
  *(undefined2 *)(iVar7 + 100) = uVar10;
  *(undefined2 *)(iVar5 + 0x62) = uVar10;
  *(undefined2 *)(iVar11 + 0x60) = uVar10;
  return;
}

