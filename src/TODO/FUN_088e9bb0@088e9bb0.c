#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e9bb0(float param_1,float param_2,undefined4 param_3,float param_4,int *param_5,
                 int param_6)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [64];
  bool bVar6;
  int iVar7;
  undefined (*pauVar8) [16];
  int *piVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 in_V7C;
  float local_d8;
  
  if (*(char *)(param_5 + 2) == '\0') {
    if (param_6 != 2) {
      uVar10 = 0;
      fVar11 = param_1 * 0.1;
      piVar9 = param_5;
      do {
        iVar7 = piVar9[3];
        pauVar8 = (undefined (*) [16])(iVar7 + 0x20);
        auVar5 = vmidt_q();
        *(int *)*pauVar8 = auVar5._0_4_;
        *(int *)(iVar7 + 0x24) = auVar5._16_4_;
        *(int *)(iVar7 + 0x28) = auVar5._32_4_;
        *(int *)(iVar7 + 0x2c) = auVar5._48_4_;
        *(int *)(iVar7 + 0x30) = auVar5._4_4_;
        *(int *)(iVar7 + 0x34) = auVar5._20_4_;
        *(int *)(iVar7 + 0x38) = auVar5._36_4_;
        *(int *)(iVar7 + 0x3c) = auVar5._52_4_;
        *(int *)(iVar7 + 0x40) = auVar5._8_4_;
        *(int *)(iVar7 + 0x44) = auVar5._24_4_;
        *(int *)(iVar7 + 0x48) = auVar5._40_4_;
        *(int *)(iVar7 + 0x4c) = auVar5._56_4_;
        *(int *)(iVar7 + 0x50) = auVar5._12_4_;
        *(int *)(iVar7 + 0x54) = auVar5._28_4_;
        *(int *)(iVar7 + 0x58) = auVar5._44_4_;
        *(int *)(iVar7 + 0x5c) = auVar5._60_4_;
        local_d8 = fVar11;
        if (param_6 == 1) {
          local_d8 = fVar11 * param_4;
        }
        auVar2 = vscl_q(*pauVar8,fVar11);
        auVar3 = vscl_q(*(undefined (*) [16])(iVar7 + 0x30),fVar11);
        auVar4 = vscl_q(*(undefined (*) [16])(iVar7 + 0x40),local_d8);
        *(int *)*pauVar8 = auVar2._0_4_;
        *(int *)(iVar7 + 0x24) = auVar2._4_4_;
        *(int *)(iVar7 + 0x28) = auVar2._8_4_;
        *(int *)(iVar7 + 0x2c) = auVar2._12_4_;
        *(int *)(iVar7 + 0x30) = auVar3._0_4_;
        *(int *)(iVar7 + 0x34) = auVar3._4_4_;
        *(int *)(iVar7 + 0x38) = auVar3._8_4_;
        *(int *)(iVar7 + 0x3c) = auVar3._12_4_;
        *(int *)(iVar7 + 0x40) = auVar4._0_4_;
        *(int *)(iVar7 + 0x44) = auVar4._4_4_;
        *(int *)(iVar7 + 0x48) = auVar4._8_4_;
        *(int *)(iVar7 + 0x4c) = auVar4._12_4_;
        FUN_08823804();
        uVar10 = uVar10 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar10 < 6);
    }
  }
  else {
    *(undefined *)(param_5 + 2) = 0;
    uVar10 = 0;
    fVar11 = param_1 * 0.1;
    piVar9 = param_5;
    do {
      iVar7 = piVar9[3];
      auVar2 = vscl_q(*(undefined (*) [16])(iVar7 + 0x20),fVar11);
      auVar3 = vscl_q(*(undefined (*) [16])(iVar7 + 0x30),fVar11);
      auVar4 = vscl_q(*(undefined (*) [16])(iVar7 + 0x40),fVar11);
      *(int *)*(undefined (*) [16])(iVar7 + 0x20) = auVar2._0_4_;
      *(int *)(iVar7 + 0x24) = auVar2._4_4_;
      *(int *)(iVar7 + 0x28) = auVar2._8_4_;
      *(int *)(iVar7 + 0x2c) = auVar2._12_4_;
      *(int *)(iVar7 + 0x30) = auVar3._0_4_;
      *(int *)(iVar7 + 0x34) = auVar3._4_4_;
      *(int *)(iVar7 + 0x38) = auVar3._8_4_;
      *(int *)(iVar7 + 0x3c) = auVar3._12_4_;
      *(int *)(iVar7 + 0x40) = auVar4._0_4_;
      *(int *)(iVar7 + 0x44) = auVar4._4_4_;
      *(int *)(iVar7 + 0x48) = auVar4._8_4_;
      *(int *)(iVar7 + 0x4c) = auVar4._12_4_;
      FUN_08823804();
      uVar10 = uVar10 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar10 < 6);
    if (*(int *)(param_5[3] + 0x204) != 0) {
      *(undefined4 *)(*(int *)(param_5[3] + 0x204) + 0x1b4) = 0xdd040000;
    }
    if (*(int *)(param_5[4] + 0x204) != 0) {
      *(undefined4 *)(*(int *)(param_5[4] + 0x204) + 0x1b0) = 0xdd050000;
    }
    if (*(int *)(param_5[6] + 0x204) != 0) {
      *(undefined4 *)(*(int *)(param_5[6] + 0x204) + 0x1b4) = 0xdd040000;
    }
    if (*(int *)(param_5[7] + 0x204) != 0) {
      *(undefined4 *)(*(int *)(param_5[7] + 0x204) + 0x1b0) = 0xdd050000;
    }
  }
  if (*param_5 != 0) {
    bVar6 = true;
    if (*(char *)(param_5 + 9) == '\0') {
      bVar6 = false;
    }
    else {
      auVar2 = vsub_q(*(undefined (*) [16])(DAT_08ac5c90 + 0x50),*(undefined (*) [16])param_5[1]);
      uVar12 = vdot_t(auVar2._0_12_,auVar2._0_12_);
      fVar13 = (float)vsqrt_s(uVar12);
      iVar7 = FUN_088e1948();
      fVar11 = fVar13;
      if (iVar7 != 0) {
        auVar2 = vsub_q(*(undefined (*) [16])(iVar7 + 0x20),*(undefined (*) [16])param_5[1]);
        uVar12 = vdot_t(auVar2._0_12_,auVar2._0_12_);
        fVar11 = (float)vsqrt_s(uVar12);
        if (fVar13 <= fVar11) {
          fVar11 = fVar13;
        }
      }
      if (param_2 < fVar11) {
        bVar6 = false;
      }
    }
    uVar10 = 0;
    if ((bVar6) && (uVar10 = 0, *(char *)((int)param_5 + 0x25) != '\0')) {
      uVar12 = vmul_s(param_3,in_V7C);
      auVar2 = vrot_q(uVar12,1,0,2,0);
      auVar1 = vscl_t(auVar2._0_12_,param_1);
      vadd_t(*(undefined (*) [12])param_5[1],auVar1);
      uVar10 = 0;
      piVar9 = param_5;
      do {
        iVar7 = piVar9[3];
        *(int *)(iVar7 + 0x90) = auVar2._0_4_;
        *(int *)(iVar7 + 0x94) = auVar2._4_4_;
        *(int *)(iVar7 + 0x98) = auVar2._8_4_;
        *(int *)(iVar7 + 0x9c) = auVar2._12_4_;
        if (*(int *)(piVar9[3] + 0x204) != 0) {
          *(bool *)(*(int *)(piVar9[3] + 0x204) + 0x13c) = 2 < (int)uVar10;
        }
        uVar10 = uVar10 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar10 < 6);
      *(undefined *)(*(int *)(param_5[5] + 0x204) + 0x13c) = 0;
      *(undefined *)(*(int *)(param_5[8] + 0x204) + 0x13c) = 0;
    }
    else {
      do {
        if (*(int *)(param_5[3] + 0x204) != 0) {
          *(undefined *)(*(int *)(param_5[3] + 0x204) + 0x13c) = 0;
        }
        uVar10 = uVar10 + 1;
        param_5 = param_5 + 1;
      } while (uVar10 < 6);
    }
  }
  return;
}

