#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08826938(float param_1,int param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined (*pauVar19) [16];
  float fVar20;
  float local_20;
  float local_1c;
  float local_14;
  
  if (0 < *(int *)(param_2 + 0x1c)) {
    pauVar19 = (undefined (*) [16])(param_2 + 0x30);
    uVar7 = *(undefined4 *)(DAT_08ac5c90 + 0x114);
    uVar11 = *(undefined4 *)(DAT_08ac5c90 + 0x118);
    uVar15 = *(undefined4 *)(DAT_08ac5c90 + 0x11c);
    uVar4 = *(undefined4 *)(DAT_08ac5c90 + 0x120);
    uVar8 = *(undefined4 *)(DAT_08ac5c90 + 0x124);
    uVar12 = *(undefined4 *)(DAT_08ac5c90 + 0x128);
    uVar16 = *(undefined4 *)(DAT_08ac5c90 + 300);
    uVar5 = *(undefined4 *)(DAT_08ac5c90 + 0x130);
    uVar9 = *(undefined4 *)(DAT_08ac5c90 + 0x134);
    uVar13 = *(undefined4 *)(DAT_08ac5c90 + 0x138);
    uVar17 = *(undefined4 *)(DAT_08ac5c90 + 0x13c);
    uVar6 = *(undefined4 *)(DAT_08ac5c90 + 0x140);
    uVar10 = *(undefined4 *)(DAT_08ac5c90 + 0x144);
    uVar14 = *(undefined4 *)(DAT_08ac5c90 + 0x148);
    uVar18 = *(undefined4 *)(DAT_08ac5c90 + 0x14c);
    *(undefined4 *)*pauVar19 = *(undefined4 *)(DAT_08ac5c90 + 0x110);
    *(undefined4 *)(param_2 + 0x34) = uVar7;
    *(undefined4 *)(param_2 + 0x38) = uVar11;
    *(undefined4 *)(param_2 + 0x3c) = uVar15;
    *(undefined4 *)(param_2 + 0x40) = uVar4;
    *(undefined4 *)(param_2 + 0x44) = uVar8;
    *(undefined4 *)(param_2 + 0x48) = uVar12;
    *(undefined4 *)(param_2 + 0x4c) = uVar16;
    *(undefined4 *)(param_2 + 0x50) = uVar5;
    *(undefined4 *)(param_2 + 0x54) = uVar9;
    *(undefined4 *)(param_2 + 0x58) = uVar13;
    *(undefined4 *)(param_2 + 0x5c) = uVar17;
    *(undefined4 *)(param_2 + 0x60) = uVar6;
    *(undefined4 *)(param_2 + 100) = uVar10;
    *(undefined4 *)(param_2 + 0x68) = uVar14;
    *(undefined4 *)(param_2 + 0x6c) = uVar18;
    auVar1 = vscl_q(*pauVar19,-param_1);
    auVar2 = vscl_q(*(undefined (*) [16])(param_2 + 0x40),-param_1);
    auVar3 = vscl_q(*(undefined (*) [16])(param_2 + 0x50),0x3f800000);
    *(int *)*pauVar19 = auVar1._0_4_;
    *(int *)(param_2 + 0x34) = auVar1._4_4_;
    *(int *)(param_2 + 0x38) = auVar1._8_4_;
    *(int *)(param_2 + 0x3c) = auVar1._12_4_;
    *(int *)(param_2 + 0x40) = auVar2._0_4_;
    *(int *)(param_2 + 0x44) = auVar2._4_4_;
    *(int *)(param_2 + 0x48) = auVar2._8_4_;
    *(int *)(param_2 + 0x4c) = auVar2._12_4_;
    *(int *)(param_2 + 0x50) = auVar3._0_4_;
    *(int *)(param_2 + 0x54) = auVar3._4_4_;
    *(int *)(param_2 + 0x58) = auVar3._8_4_;
    *(int *)(param_2 + 0x5c) = auVar3._12_4_;
    FUN_089e34f0(DAT_08ac5c90,&local_20,param_2 + 0xb0);
    param_1 = param_1 * ((70.0 - *(float *)(DAT_08ac5c90 + 0x158)) * 0.162 * 0.0333333 + 0.178);
    fVar20 = local_14 * param_1 * 0.5666667;
    *(float *)(param_2 + 0x170) = fVar20;
    local_14 = local_14 * param_1;
    *(float *)(param_2 + 0x174) = local_14;
    *(float *)(param_2 + 0x178) = local_20 * 256.0 * 0.002083333 * 0.00390625 - fVar20 * 0.469;
    *(float *)(param_2 + 0x17c) = local_1c * 256.0 * 0.003676471 * 0.00390625 - local_14 * 0.459;
  }
  return;
}

