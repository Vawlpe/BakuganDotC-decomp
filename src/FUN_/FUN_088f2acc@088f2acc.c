#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f2acc(int param_1)

{
  byte bVar1;
  undefined auVar2 [12];
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if (bVar1 == 0) {
    auVar2 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x50),0x3d4ccccd);
    fVar7 = auVar2._0_4_;
    fVar8 = auVar2._4_4_;
    fVar6 = auVar2._8_4_;
    if (0.0 < fVar7) {
      fVar7 = fVar7 * 4096.0 + 0.5;
    }
    else {
      fVar7 = fVar7 * 4096.0 - 0.5;
    }
    if (0.0 < fVar8) {
      fVar8 = fVar8 * 4096.0 + 0.5;
    }
    else {
      fVar8 = fVar8 * 4096.0 - 0.5;
    }
    if (0.0 < fVar6) {
      fVar6 = fVar6 * 4096.0 + 0.5;
    }
    else {
      fVar6 = fVar6 * 4096.0 - 0.5;
    }
    piVar3 = *(int **)(param_1 + 4);
    piVar3[6] = (int)fVar7;
    piVar3[7] = (int)fVar8;
    piVar3[8] = (int)fVar6;
    *piVar3 = (int)fVar7;
    piVar3[1] = (int)fVar8;
    piVar3[2] = (int)fVar6;
    return;
  }
  if (bVar1 < 2) {
    auVar2 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x60),0x3d4ccccd);
    fVar7 = auVar2._0_4_;
    fVar8 = auVar2._4_4_;
    fVar6 = auVar2._8_4_;
    if (0.0 < fVar7) {
      fVar7 = fVar7 * 4096.0 + 0.5;
    }
    else {
      fVar7 = fVar7 * 4096.0 - 0.5;
    }
    if (0.0 < fVar8) {
      fVar8 = fVar8 * 4096.0 + 0.5;
    }
    else {
      fVar8 = fVar8 * 4096.0 - 0.5;
    }
    if (0.0 < fVar6) {
      fVar6 = fVar6 * 4096.0 + 0.5;
    }
    else {
      fVar6 = fVar6 * 4096.0 - 0.5;
    }
    iVar4 = *(int *)(param_1 + 4);
    *(int *)(iVar4 + 0x48) = (int)fVar7;
    *(int *)(iVar4 + 0x4c) = (int)fVar8;
    *(int *)(iVar4 + 0x50) = (int)fVar6;
    *(int *)(iVar4 + 0x30) = (int)fVar7;
    *(int *)(iVar4 + 0x34) = (int)fVar8;
    *(int *)(iVar4 + 0x38) = (int)fVar6;
    return;
  }
  if (bVar1 < 3) {
    iVar4 = *(int *)(param_1 + 4);
    uVar5 = (undefined2)(int)*(float *)(DAT_08ac5c90 + 0x158);
    *(undefined2 *)(*(int *)(param_1 + 4) + 100) = uVar5;
    *(undefined2 *)(iVar4 + 0x60) = uVar5;
  }
  return;
}

