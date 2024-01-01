#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888b400(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  
  *(undefined *)(param_1 + 0x90) = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  uVar6 = *(undefined4 *)(iVar3 + 0x24);
  uVar1 = *(undefined4 *)(iVar3 + 0x28);
  uVar2 = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  iVar3 = *(int *)(param_1 + 0x8c);
  if (iVar3 < 2) {
    if (0 < iVar3) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x14);
      iVar3 = (**(code **)(iVar3 + 0x5c))(*(int *)(param_1 + 0x28) + (int)*(short *)(iVar3 + 0x58));
      if (iVar3 == 0) {
        fVar4 = *(float *)(param_1 + 100) +
                *(float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x4bc) + 4);
      }
      else {
        fVar4 = *(float *)(param_1 + 100) + 100.0;
      }
      *(float *)(param_1 + 100) = fVar4;
    }
  }
  else if (iVar3 < 3) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x2a4);
  }
  *(undefined *)(param_1 + 0x90) = 1;
  if (DAT_08aba77d == '\0') {
    iVar3 = FUN_0888b304(param_1);
    if ((iVar3 == 0) && (iVar3 = FUN_0888b358(param_1), iVar3 == 0)) {
      fVar4 = *(float *)(param_1 + 0x80) + 0.02;
      *(float *)(param_1 + 0x80) = fVar4;
      if (1.0 < fVar4) {
        *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
      }
    }
    else {
      fVar4 = *(float *)(param_1 + 0x80) - 0.02;
      *(float *)(param_1 + 0x80) = fVar4;
      if (fVar4 < 0.0) {
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
    }
    if (*(char *)(param_1 + 0x91) == '\0') {
      fVar4 = *(float *)(*(int *)(param_1 + 0x24) + 0x6c) * *(float *)(param_1 + 0x80);
    }
    else {
      fVar4 = 1.0;
    }
    *(float *)(param_1 + 0x84) = fVar4;
  }
  else {
    *(float *)(param_1 + 0x84) =
         *(float *)(*(int *)(param_1 + 0x24) + 0x6c) * *(float *)(param_1 + 0x80);
  }
  fVar4 = (float)FUN_08889e00(param_1);
  if (*(float *)(param_1 + 0x74) == fVar4) {
    fVar5 = *(float *)(param_1 + 0x88);
  }
  else {
    if (*(float *)(param_1 + 0x74) < fVar4) {
      uVar6 = FUN_08889d78(param_1);
      *(undefined4 *)(param_1 + 0x70) = uVar6;
      fVar5 = (float)FUN_08889e00(param_1);
      *(float *)(param_1 + 0x74) = fVar5;
      if (*(float *)(param_1 + 0x70) < fVar5) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
    }
    *(float *)(param_1 + 0x74) = fVar4;
    fVar5 = *(float *)(param_1 + 0x88);
  }
  if (0.0 < fVar5) {
    fVar5 = *(float *)(param_1 + 0x88) - 0.013;
    *(float *)(param_1 + 0x88) = fVar5;
    if (fVar5 <= 0.2) {
      *(float *)(param_1 + 0x78) = fVar4;
      *(float *)(param_1 + 0x7c) = fVar4;
    }
    if ((*(float *)(param_1 + 0x88) <= 0.55) &&
       (fVar5 = *(float *)(param_1 + 0x78) - (*(float *)(param_1 + 0x7c) - fVar4) * 0.04,
       *(float *)(param_1 + 0x78) = fVar5, fVar5 < fVar4)) {
      *(float *)(param_1 + 0x78) = fVar4;
    }
  }
  else {
    *(float *)(param_1 + 0x78) = fVar4;
    *(float *)(param_1 + 0x7c) = fVar4;
  }
  fVar4 = (float)FUN_08889e00(param_1);
  fVar5 = (float)FUN_08889d78(param_1);
  if (fVar4 / fVar5 < 0.3) {
    fVar4 = *(float *)(param_1 + 0x98) + 0.174;
    *(float *)(param_1 + 0x98) = fVar4;
    if (6.283185 < fVar4) {
      *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x98) - 6.283185;
    }
    uVar6 = vmul_s(*(undefined4 *)(param_1 + 0x98),in_V7C);
    fVar4 = (float)vsin_s(uVar6);
    *(float *)(param_1 + 0x94) = fVar4 * 0.2 + 0.3;
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  return;
}

