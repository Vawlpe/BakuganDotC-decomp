#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d8608(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  int iVar7;
  undefined (*pauVar8) [12];
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V7C;
  
  iVar7 = FUN_088d83b0();
  if (iVar7 == 0) {
    pauVar8 = (undefined (*) [12])(param_1 + 0x220);
    if (*(int *)(param_1 + 0x25c) == 0) {
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
    }
    else if (*(int *)(param_1 + 0x25c) == 1) {
      iVar7 = *(int *)(param_1 + 0x180);
      if (iVar7 < 1) {
        if (-1 < iVar7) {
          *(undefined4 *)(param_1 + 0x240) = 0x3a;
          *(undefined4 *)(param_1 + 0x238) = 0;
          *(undefined4 *)(param_1 + 0x23c) = 0x3c92a4ba;
          *(undefined4 *)(param_1 + 0x234) = 0;
          *(undefined4 *)(param_1 + 0x230) = 0x3f060a92;
          *(undefined4 *)(param_1 + 0x180) = 1;
        }
      }
      else if (iVar7 < 2) {
        if (*(int *)(param_1 + 0x240) < 1) {
          *(undefined4 *)(param_1 + 0x240) = 3;
          *(undefined4 *)(param_1 + 0x180) = 2;
        }
        else {
          *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
        }
      }
      else if (iVar7 < 3) {
        if (*(int *)(param_1 + 0x240) < 1) {
          *(undefined4 *)(param_1 + 0x240) = 0x75;
          *(float *)(param_1 + 0x23c) = -*(float *)(param_1 + 0x23c);
          *(undefined4 *)(param_1 + 0x180) = 1;
        }
        else {
          *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
        }
      }
    }
    else if (*(int *)(param_1 + 0x25c) == 2) {
      iVar7 = *(int *)(param_1 + 0x180);
      if (iVar7 < 1) {
        if (-1 < iVar7) {
          *(undefined4 *)(param_1 + 0x240) = 0x3a;
          *(undefined4 *)(param_1 + 0x238) = 0x3b43864d;
          *(undefined4 *)(param_1 + 0x23c) = 0;
          *(undefined4 *)(param_1 + 0x234) = 0;
          *(undefined4 *)(param_1 + 0x230) = 0x3f060a92;
          *(undefined4 *)(param_1 + 0x180) = 1;
        }
      }
      else if (iVar7 < 2) {
        if (*(int *)(param_1 + 0x240) < 1) {
          *(undefined4 *)(param_1 + 0x240) = 3;
          *(undefined4 *)(param_1 + 0x180) = 2;
        }
        else {
          *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
        }
      }
      else if (iVar7 < 3) {
        if (*(int *)(param_1 + 0x240) < 1) {
          *(undefined4 *)(param_1 + 0x240) = 0x75;
          *(float *)(param_1 + 0x238) = -*(float *)(param_1 + 0x238);
          *(undefined4 *)(param_1 + 0x180) = 1;
        }
        else {
          *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
        }
      }
    }
    uVar11 = vcst_s(6);
    uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x234),uVar11);
    auVar3 = vrot_q(uVar11,0,0,2,1);
    uVar11 = vcst_s(6);
    uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x230),uVar11);
    auVar4 = vrot_q(uVar11,2,0,0,1);
    auVar3 = vqmul_q(*(undefined (*) [16])(param_1 + 0x1d0),auVar3);
    auVar3 = vqmul_q(auVar3,auVar4);
    iVar7 = *(int *)(param_1 + 0x244);
    *(int *)(iVar7 + 0x60) = auVar3._0_4_;
    *(int *)(iVar7 + 100) = auVar3._4_4_;
    *(int *)(iVar7 + 0x68) = auVar3._8_4_;
    *(int *)(iVar7 + 0x6c) = auVar3._12_4_;
    iVar7 = *(int *)(param_1 + 0x244);
    iVar9 = *(int *)(param_1 + 0x130);
    auVar2._60_4_ = *(undefined4 *)(iVar9 + 0xbc);
    auVar2._56_4_ = *(undefined4 *)(iVar9 + 0xac);
    auVar2._52_4_ = *(undefined4 *)(iVar9 + 0x9c);
    auVar2._48_4_ = *(undefined4 *)(iVar9 + 0x8c);
    auVar2._44_4_ = *(undefined4 *)(iVar9 + 0xb8);
    auVar2._40_4_ = *(undefined4 *)(iVar9 + 0xa8);
    auVar2._36_4_ = *(undefined4 *)(iVar9 + 0x98);
    auVar2._32_4_ = *(undefined4 *)(iVar9 + 0x88);
    auVar2._28_4_ = *(undefined4 *)(iVar9 + 0xb4);
    auVar2._24_4_ = *(undefined4 *)(iVar9 + 0xa4);
    auVar2._20_4_ = *(undefined4 *)(iVar9 + 0x94);
    auVar2._16_4_ = *(undefined4 *)(iVar9 + 0x84);
    auVar2._12_4_ = *(undefined4 *)(iVar9 + 0xb0);
    auVar2._8_4_ = *(undefined4 *)(iVar9 + 0xa0);
    auVar2._4_4_ = *(undefined4 *)(iVar9 + 0x90);
    auVar2._0_4_ = *(undefined4 *)(iVar9 + 0x80);
    auVar6._60_4_ = *(undefined4 *)(iVar7 + 0xbc);
    auVar6._56_4_ = *(undefined4 *)(iVar7 + 0xac);
    auVar6._52_4_ = *(undefined4 *)(iVar7 + 0x9c);
    auVar6._48_4_ = *(undefined4 *)(iVar7 + 0x8c);
    auVar6._44_4_ = *(undefined4 *)(iVar7 + 0xb8);
    auVar6._40_4_ = *(undefined4 *)(iVar7 + 0xa8);
    auVar6._36_4_ = *(undefined4 *)(iVar7 + 0x98);
    auVar6._32_4_ = *(undefined4 *)(iVar7 + 0x88);
    auVar6._28_4_ = *(undefined4 *)(iVar7 + 0xb4);
    auVar6._24_4_ = *(undefined4 *)(iVar7 + 0xa4);
    auVar6._20_4_ = *(undefined4 *)(iVar7 + 0x94);
    auVar6._16_4_ = *(undefined4 *)(iVar7 + 0x84);
    auVar6._12_4_ = *(undefined4 *)(iVar7 + 0xb0);
    auVar6._8_4_ = *(undefined4 *)(iVar7 + 0xa0);
    auVar6._4_4_ = *(undefined4 *)(iVar7 + 0x90);
    auVar6._0_4_ = *(undefined4 *)(iVar7 + 0x80);
    auVar2 = vmmul_q(auVar2,auVar6);
    *(undefined4 *)(param_1 + 0x1f0) = auVar2._0_4_;
    *(int *)(param_1 + 500) = auVar2._16_4_;
    *(int *)(param_1 + 0x1f8) = auVar2._32_4_;
    *(int *)(param_1 + 0x1fc) = auVar2._48_4_;
    *(int *)(param_1 + 0x200) = auVar2._4_4_;
    *(int *)(param_1 + 0x204) = auVar2._20_4_;
    *(int *)(param_1 + 0x208) = auVar2._36_4_;
    *(int *)(param_1 + 0x20c) = auVar2._52_4_;
    *(int *)(param_1 + 0x210) = auVar2._8_4_;
    *(int *)(param_1 + 0x214) = auVar2._24_4_;
    *(int *)(param_1 + 0x218) = auVar2._40_4_;
    *(int *)(param_1 + 0x21c) = auVar2._56_4_;
    *(int *)(param_1 + 0x220) = auVar2._12_4_;
    *(int *)(param_1 + 0x224) = auVar2._28_4_;
    *(int *)(param_1 + 0x228) = auVar2._44_4_;
    *(int *)(param_1 + 0x22c) = auVar2._60_4_;
    auVar3._12_4_ = auVar2._20_4_;
    auVar3._8_4_ = auVar2._4_4_;
    auVar4._8_4_ = 0x3f666666;
    auVar4._0_8_ = 0xbf80000000000000;
    auVar4._12_4_ = 0;
    auVar3._4_4_ = auVar2._16_4_;
    auVar3._0_4_ = auVar2._0_4_;
    auVar3 = vtfm4_q(auVar3,auVar4);
    uVar11 = *(undefined4 *)(param_1 + 0x22c);
    auVar1 = vadd_t(*pauVar8,auVar3._0_12_);
    *(int *)*pauVar8 = auVar1._0_4_;
    *(int *)(param_1 + 0x224) = auVar1._4_4_;
    *(int *)(param_1 + 0x228) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x22c) = uVar11;
    if (*(int *)(param_1 + 0x250) == 0) {
      iVar7 = *(int *)(param_1 + 0x180);
    }
    else {
      uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x230),in_V7C);
      fVar10 = (float)vsin_s(uVar11);
      auVar5._8_8_ = *(undefined8 *)(param_1 + 0x200);
      auVar5._4_4_ = *(undefined4 *)(param_1 + 500);
      auVar5._0_4_ = *(undefined4 *)(param_1 + 0x1f0);
      auVar3 = vtfm4_q(auVar5,ZEXT416((uint)(-(*(float *)(param_1 + 0x224) -
                                              *(float *)(param_1 + 0x24)) / fVar10)) << 0x20);
      auVar1 = vadd_t(auVar3._0_12_,*pauVar8);
      iVar7 = *(int *)(param_1 + 0x250);
      *(int *)(iVar7 + 0x60) = auVar1._0_4_;
      *(undefined4 *)(iVar7 + 100) = *(undefined4 *)(iVar7 + 100);
      *(int *)(iVar7 + 0x68) = auVar1._8_4_;
      *(int *)(iVar7 + 0x6c) = auVar3._12_4_;
      iVar7 = *(int *)(param_1 + 0x180);
    }
    if (iVar7 == 1) {
      fVar10 = *(float *)(param_1 + 0x234) + *(float *)(param_1 + 0x23c);
      *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x230) + *(float *)(param_1 + 0x238);
      *(float *)(param_1 + 0x234) = fVar10;
      if (6.283185 < fVar10) {
        fVar10 = *(float *)(param_1 + 0x234);
        do {
          fVar10 = fVar10 - 6.283185;
        } while (6.283185 < fVar10);
        *(float *)(param_1 + 0x234) = fVar10;
      }
      if (*(float *)(param_1 + 0x234) < -6.283185) {
        fVar10 = *(float *)(param_1 + 0x234);
        do {
          fVar10 = fVar10 + 6.283185;
        } while (fVar10 < -6.283185);
        *(float *)(param_1 + 0x234) = fVar10;
      }
    }
  }
  else {
    iVar7 = FUN_089bfa40(500);
    if (*(char *)(iVar7 + 0x6e8) == '\0') {
      iVar7 = FUN_088e1948();
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x16c) = 1;
      }
      else {
        if (*(char *)(iVar7 + 0x354) == '\0') {
          *(undefined *)(iVar7 + 0x354) = 1;
          FUN_088e2788(iVar7,9,0);
          if (DAT_08b00bd8._1_1_ == '\0') {
            FUN_088e14d4(iVar7);
          }
          *(undefined4 *)(iVar7 + 0x324) = 0;
          *(undefined *)(iVar7 + 0x540) = 0xff;
          *(int *)(iVar7 + 0x544) = param_1 + 0x20;
        }
        *(undefined4 *)(param_1 + 0x16c) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x16c) = 1;
    }
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  return;
}

