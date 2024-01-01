#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d74f4(int param_1,undefined4 param_2)

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
  int iVar19;
  int iVar20;
  float fVar21;
  
  FUN_088d93cc();
  if ((*(float *)(param_1 + 0x1f8) < 1.0) &&
     (fVar21 = *(float *)(param_1 + 0x1f8) - 0.03, *(float *)(param_1 + 0x1f8) = fVar21,
     fVar21 < 0.25)) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0x1f8)) {
    if (DAT_08abf064 == 0) {
      fVar21 = *(float *)(param_1 + 0x1f8);
    }
    else {
      iVar19 = *(int *)(DAT_08abf064 + 0x130);
      iVar20 = *(int *)(param_1 + 0x130);
      uVar7 = *(undefined4 *)(iVar20 + 0x84);
      uVar11 = *(undefined4 *)(iVar20 + 0x88);
      uVar15 = *(undefined4 *)(iVar20 + 0x8c);
      uVar4 = *(undefined4 *)(iVar20 + 0x90);
      uVar8 = *(undefined4 *)(iVar20 + 0x94);
      uVar12 = *(undefined4 *)(iVar20 + 0x98);
      uVar16 = *(undefined4 *)(iVar20 + 0x9c);
      uVar5 = *(undefined4 *)(iVar20 + 0xa0);
      uVar9 = *(undefined4 *)(iVar20 + 0xa4);
      uVar13 = *(undefined4 *)(iVar20 + 0xa8);
      uVar17 = *(undefined4 *)(iVar20 + 0xac);
      uVar6 = *(undefined4 *)(iVar20 + 0xb0);
      uVar10 = *(undefined4 *)(iVar20 + 0xb4);
      uVar14 = *(undefined4 *)(iVar20 + 0xb8);
      uVar18 = *(undefined4 *)(iVar20 + 0xbc);
      *(undefined4 *)(iVar19 + 0x80) = *(undefined4 *)(iVar20 + 0x80);
      *(undefined4 *)(iVar19 + 0x84) = uVar7;
      *(undefined4 *)(iVar19 + 0x88) = uVar11;
      *(undefined4 *)(iVar19 + 0x8c) = uVar15;
      *(undefined4 *)(iVar19 + 0x90) = uVar4;
      *(undefined4 *)(iVar19 + 0x94) = uVar8;
      *(undefined4 *)(iVar19 + 0x98) = uVar12;
      *(undefined4 *)(iVar19 + 0x9c) = uVar16;
      *(undefined4 *)(iVar19 + 0xa0) = uVar5;
      *(undefined4 *)(iVar19 + 0xa4) = uVar9;
      *(undefined4 *)(iVar19 + 0xa8) = uVar13;
      *(undefined4 *)(iVar19 + 0xac) = uVar17;
      *(undefined4 *)(iVar19 + 0xb0) = uVar6;
      *(undefined4 *)(iVar19 + 0xb4) = uVar10;
      *(undefined4 *)(iVar19 + 0xb8) = uVar14;
      *(undefined4 *)(iVar19 + 0xbc) = uVar18;
      iVar19 = *(int *)(DAT_08abf064 + 0x130);
      auVar1 = vscl_q(*(undefined (*) [16])(iVar19 + 0x80),0x3f800000);
      auVar2 = vscl_q(*(undefined (*) [16])(iVar19 + 0x90),*(undefined4 *)(param_1 + 0x1f8));
      auVar3 = vscl_q(*(undefined (*) [16])(iVar19 + 0xa0),0x3f800000);
      *(int *)*(undefined (*) [16])(iVar19 + 0x80) = auVar1._0_4_;
      *(int *)(iVar19 + 0x84) = auVar1._4_4_;
      *(int *)(iVar19 + 0x88) = auVar1._8_4_;
      *(int *)(iVar19 + 0x8c) = auVar1._12_4_;
      *(int *)(iVar19 + 0x90) = auVar2._0_4_;
      *(int *)(iVar19 + 0x94) = auVar2._4_4_;
      *(int *)(iVar19 + 0x98) = auVar2._8_4_;
      *(int *)(iVar19 + 0x9c) = auVar2._12_4_;
      *(int *)(iVar19 + 0xa0) = auVar3._0_4_;
      *(int *)(iVar19 + 0xa4) = auVar3._4_4_;
      *(int *)(iVar19 + 0xa8) = auVar3._8_4_;
      *(int *)(iVar19 + 0xac) = auVar3._12_4_;
      iVar19 = *(int *)(DAT_08abf064 + 0x130);
      iVar20 = *(int *)(param_1 + 0x130);
      uVar4 = *(undefined4 *)(iVar20 + 0xb4);
      uVar5 = *(undefined4 *)(iVar20 + 0xb8);
      uVar6 = *(undefined4 *)(iVar20 + 0xbc);
      *(undefined4 *)(iVar19 + 0xb0) = *(undefined4 *)(iVar20 + 0xb0);
      *(undefined4 *)(iVar19 + 0xb4) = uVar4;
      *(undefined4 *)(iVar19 + 0xb8) = uVar5;
      *(undefined4 *)(iVar19 + 0xbc) = uVar6;
      *(undefined4 *)(DAT_08abf064 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
      (**(code **)(*(int *)(DAT_08abf064 + 0x14) + 0x44))
                (DAT_08abf064 + *(short *)(*(int *)(DAT_08abf064 + 0x14) + 0x40),param_2);
      fVar21 = *(float *)(param_1 + 0x1f8);
    }
    if ((fVar21 == 1.0) && (DAT_08abf068 != 0)) {
      *(undefined4 *)(DAT_08abf064 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
      iVar19 = *(int *)(DAT_08abf068 + 0x130);
      iVar20 = *(int *)(param_1 + 0x130);
      uVar7 = *(undefined4 *)(iVar20 + 0x84);
      uVar11 = *(undefined4 *)(iVar20 + 0x88);
      uVar15 = *(undefined4 *)(iVar20 + 0x8c);
      uVar4 = *(undefined4 *)(iVar20 + 0x90);
      uVar8 = *(undefined4 *)(iVar20 + 0x94);
      uVar12 = *(undefined4 *)(iVar20 + 0x98);
      uVar16 = *(undefined4 *)(iVar20 + 0x9c);
      uVar5 = *(undefined4 *)(iVar20 + 0xa0);
      uVar9 = *(undefined4 *)(iVar20 + 0xa4);
      uVar13 = *(undefined4 *)(iVar20 + 0xa8);
      uVar17 = *(undefined4 *)(iVar20 + 0xac);
      uVar6 = *(undefined4 *)(iVar20 + 0xb0);
      uVar10 = *(undefined4 *)(iVar20 + 0xb4);
      uVar14 = *(undefined4 *)(iVar20 + 0xb8);
      uVar18 = *(undefined4 *)(iVar20 + 0xbc);
      *(undefined4 *)(iVar19 + 0x80) = *(undefined4 *)(iVar20 + 0x80);
      *(undefined4 *)(iVar19 + 0x84) = uVar7;
      *(undefined4 *)(iVar19 + 0x88) = uVar11;
      *(undefined4 *)(iVar19 + 0x8c) = uVar15;
      *(undefined4 *)(iVar19 + 0x90) = uVar4;
      *(undefined4 *)(iVar19 + 0x94) = uVar8;
      *(undefined4 *)(iVar19 + 0x98) = uVar12;
      *(undefined4 *)(iVar19 + 0x9c) = uVar16;
      *(undefined4 *)(iVar19 + 0xa0) = uVar5;
      *(undefined4 *)(iVar19 + 0xa4) = uVar9;
      *(undefined4 *)(iVar19 + 0xa8) = uVar13;
      *(undefined4 *)(iVar19 + 0xac) = uVar17;
      *(undefined4 *)(iVar19 + 0xb0) = uVar6;
      *(undefined4 *)(iVar19 + 0xb4) = uVar10;
      *(undefined4 *)(iVar19 + 0xb8) = uVar14;
      *(undefined4 *)(iVar19 + 0xbc) = uVar18;
      (**(code **)(*(int *)(DAT_08abf068 + 0x14) + 0x44))
                (DAT_08abf068 + *(short *)(*(int *)(DAT_08abf068 + 0x14) + 0x40),param_2);
    }
  }
  DAT_08abf070 = 0;
  return;
}

