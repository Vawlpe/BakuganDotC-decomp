#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088da60c(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af3524;
  *(undefined **)(param_1 + 0x160) = &DAT_08af35c4;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(ushort *)(param_1 + 0x188) = param_4;
  iVar7 = *(int *)(param_1 + 0x130);
  puVar8 = (undefined4 *)(param_1 + 0x20);
  uVar10 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar7 + 0xb0) = *puVar8;
  *(undefined4 *)(iVar7 + 0xb4) = uVar10;
  *(undefined4 *)(iVar7 + 0xb8) = uVar5;
  *(undefined4 *)(iVar7 + 0xbc) = uVar6;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  if (param_4 < 0x74) {
    if (0x72 < param_4) {
      uVar10 = FUN_08823f5c(DAT_08ac5c70,0xb,puVar8);
      *(undefined4 *)(param_1 + 0x180) = uVar10;
      iVar7 = FUN_08823f5c(DAT_08ac5c70,0xc,puVar8);
      *(int *)(param_1 + 0x184) = iVar7;
      if (iVar7 == 0) goto LAB_088da7c4;
      fVar9 = (float)(int)*(short *)(*(int *)(param_1 + 0x170) + 0x1a) * 6.283185 * 1.525902e-05;
      if (3.141593 < fVar9) {
        fVar9 = fVar9 - 6.283185;
LAB_088da75c:
        iVar7 = *(int *)(param_1 + 0x184);
      }
      else {
        if (fVar9 <= -3.141593) {
          fVar9 = fVar9 + 6.283185;
          goto LAB_088da75c;
        }
        iVar7 = *(int *)(param_1 + 0x184);
      }
      uVar10 = vmul_s(fVar9 + 3.14,in_V7C);
      auVar3 = vrot_q(uVar10,1,0,3,0);
      auVar1 = vidt_q();
      auVar4 = vrot_q(uVar10,2,0,1,0);
      auVar2 = vidt_q();
      *(int *)(iVar7 + 0x20) = auVar3._0_4_;
      *(int *)(iVar7 + 0x24) = auVar3._4_4_;
      *(int *)(iVar7 + 0x28) = auVar3._8_4_;
      *(int *)(iVar7 + 0x2c) = auVar3._12_4_;
      *(int *)(iVar7 + 0x30) = auVar1._0_4_;
      *(int *)(iVar7 + 0x34) = auVar1._4_4_;
      *(int *)(iVar7 + 0x38) = auVar1._8_4_;
      *(int *)(iVar7 + 0x3c) = auVar1._12_4_;
      *(int *)(iVar7 + 0x40) = auVar4._0_4_;
      *(int *)(iVar7 + 0x44) = auVar4._4_4_;
      *(int *)(iVar7 + 0x48) = auVar4._8_4_;
      *(int *)(iVar7 + 0x4c) = auVar4._12_4_;
      *(int *)(iVar7 + 0x50) = auVar2._0_4_;
      *(int *)(iVar7 + 0x54) = auVar2._4_4_;
      *(int *)(iVar7 + 0x58) = auVar2._8_4_;
      *(int *)(iVar7 + 0x5c) = auVar2._12_4_;
      *(undefined4 *)(*(int *)(param_1 + 0x184) + 0xbc) = 0;
      goto LAB_088da7c4;
    }
    iVar7 = *(int *)(param_1 + 0x180);
  }
  else {
    if (param_4 != 0x77) {
      iVar7 = *(int *)(param_1 + 0x180);
      goto LAB_088da7c8;
    }
    uVar10 = FUN_08823f5c(DAT_08ac5c70,0xd,puVar8);
    *(undefined4 *)(param_1 + 0x180) = uVar10;
LAB_088da7c4:
    iVar7 = *(int *)(param_1 + 0x180);
  }
LAB_088da7c8:
  if (iVar7 == 0) {
    return param_1;
  }
  fVar9 = (float)(int)*(short *)(*(int *)(param_1 + 0x170) + 0x1a) * 6.283185 * 1.525902e-05;
  if (3.141593 < fVar9) {
    fVar9 = fVar9 - 6.283185;
  }
  else {
    if (-3.141593 < fVar9) {
      iVar7 = *(int *)(param_1 + 0x180);
      goto LAB_088da84c;
    }
    fVar9 = fVar9 + 6.283185;
  }
  iVar7 = *(int *)(param_1 + 0x180);
LAB_088da84c:
  uVar10 = vmul_s(fVar9 + 3.14,in_V7C);
  auVar3 = vrot_q(uVar10,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar10,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(iVar7 + 0x20) = auVar3._0_4_;
  *(int *)(iVar7 + 0x24) = auVar3._4_4_;
  *(int *)(iVar7 + 0x28) = auVar3._8_4_;
  *(int *)(iVar7 + 0x2c) = auVar3._12_4_;
  *(int *)(iVar7 + 0x30) = auVar1._0_4_;
  *(int *)(iVar7 + 0x34) = auVar1._4_4_;
  *(int *)(iVar7 + 0x38) = auVar1._8_4_;
  *(int *)(iVar7 + 0x3c) = auVar1._12_4_;
  *(int *)(iVar7 + 0x40) = auVar4._0_4_;
  *(int *)(iVar7 + 0x44) = auVar4._4_4_;
  *(int *)(iVar7 + 0x48) = auVar4._8_4_;
  *(int *)(iVar7 + 0x4c) = auVar4._12_4_;
  *(int *)(iVar7 + 0x50) = auVar2._0_4_;
  *(int *)(iVar7 + 0x54) = auVar2._4_4_;
  *(int *)(iVar7 + 0x58) = auVar2._8_4_;
  *(int *)(iVar7 + 0x5c) = auVar2._12_4_;
  return param_1;
}

