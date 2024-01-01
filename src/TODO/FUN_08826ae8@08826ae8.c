#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08826ae8(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  undefined (*pauVar4) [12];
  undefined (*pauVar5) [12];
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 < 2) {
    if (-1 < iVar3) {
      pauVar5 = (undefined (*) [12])(param_1 + 0xc0);
      pauVar4 = (undefined (*) [12])(param_1 + 0xb0);
      if (iVar3 < 1) {
        *(undefined **)(param_1 + 0xf0) = &DAT_08a62420;
        *(undefined4 *)(param_1 + 0xfc) = 1;
        *(undefined4 *)(param_1 + 0x1a8) = 1;
        *(undefined4 *)(param_1 + 0x1ac) = 0x1fd;
        uVar6 = FUN_089f74a8();
        *(undefined4 *)(param_1 + 0x18c) = uVar6;
        *(undefined4 *)(param_1 + 0x15c) = 0x1200089a;
        *(undefined **)(param_1 + 0xf4) = &DAT_08a6301e;
        *(undefined *)(param_1 + 0x1a0) = 1;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xec) = 0x3f000000;
        uVar6 = vrndf1_s();
        fVar7 = (float)vsub_s(uVar6,in_V7F);
        *(float *)(param_1 + 0x150) = fVar7 * 10.0 + 22.0;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        fVar7 = 1.570796 - *(float *)(DAT_08ac5c90 + 0x150);
        if (3.141593 < fVar7) {
          fVar7 = fVar7 - 6.283185;
        }
        else if (fVar7 <= -3.141593) {
          fVar7 = fVar7 + 6.283185;
        }
        uVar6 = vrndf1_s();
        fVar8 = (float)vsub_s(uVar6,in_V7F);
        uVar6 = vmul_s(fVar7,in_V7C);
        auVar2 = vrot_q(uVar6,1,0,2,0);
        auVar1 = vscl_t(auVar2._0_12_,fVar8 * 2.0 - 1.0);
        *(int *)*pauVar5 = auVar1._0_4_;
        *(int *)(param_1 + 0xc4) = auVar1._4_4_;
        *(int *)(param_1 + 200) = auVar1._8_4_;
        *(int *)(param_1 + 0xcc) = auVar2._12_4_;
        uVar6 = *(undefined4 *)(param_1 + 0xbc);
        auVar1 = vadd_t(*pauVar4,*pauVar5);
        *(int *)*pauVar4 = auVar1._0_4_;
        *(int *)(param_1 + 0xb4) = auVar1._4_4_;
        *(int *)(param_1 + 0xb8) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0xbc) = uVar6;
        auVar1 = vscl_t(*pauVar5,0x3cf5c28f);
        *(int *)*(undefined (*) [12])(param_1 + 0xd0) = auVar1._0_4_;
        *(int *)(param_1 + 0xd4) = auVar1._4_4_;
        *(int *)(param_1 + 0xd8) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0xdc) = in_V7D;
        return;
      }
      *(undefined *)(param_1 + 0x13c) = 1;
      *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) + 0.5;
      *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xc0) * 0.87;
      *(float *)(param_1 + 200) = *(float *)(param_1 + 200) * 0.87;
      uVar6 = *(undefined4 *)(param_1 + 0xcc);
      auVar1 = vsub_t(*pauVar5,*(undefined (*) [12])(param_1 + 0xd0));
      *(int *)*pauVar5 = auVar1._0_4_;
      *(int *)(param_1 + 0xc4) = auVar1._4_4_;
      *(int *)(param_1 + 200) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0xcc) = uVar6;
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + 0.08;
      uVar6 = *(undefined4 *)(param_1 + 0xbc);
      auVar1 = vadd_t(*pauVar4,*pauVar5);
      *(int *)*pauVar4 = auVar1._0_4_;
      *(int *)(param_1 + 0xb4) = auVar1._4_4_;
      *(int *)(param_1 + 0xb8) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
      auVar1._8_4_ = 0x3e4ccccd;
      auVar1._0_8_ = 0x3e4ccccd;
      auVar1 = vmul_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x70),auVar1);
      uVar6 = *(undefined4 *)(param_1 + 0xbc);
      auVar1 = vsub_t(*pauVar4,auVar1);
      *(int *)*pauVar4 = auVar1._0_4_;
      *(int *)(param_1 + 0xb4) = auVar1._4_4_;
      *(int *)(param_1 + 0xb8) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
      fVar7 = *(float *)(param_1 + 0xec) + 0.091;
      *(float *)(param_1 + 0xec) = fVar7;
      if (0.84 <= fVar7) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
    }
  }
  else {
    if (2 < iVar3) {
      if (iVar3 < 4) {
        if (param_1 == 0) {
          return;
        }
        (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
        return;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x150);
      goto LAB_08826f0c;
    }
    *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) + 0.5;
    *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xc0) * 0.87;
    *(float *)(param_1 + 200) = *(float *)(param_1 + 200) * 0.87;
    pauVar4 = (undefined (*) [12])(param_1 + 0xc0);
    uVar6 = *(undefined4 *)(param_1 + 0xcc);
    auVar1 = vsub_t(*pauVar4,*(undefined (*) [12])(param_1 + 0xd0));
    *(int *)*pauVar4 = auVar1._0_4_;
    *(int *)(param_1 + 0xc4) = auVar1._4_4_;
    *(int *)(param_1 + 200) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0xcc) = uVar6;
    if (*(float *)(param_1 + 0xc4) < 1.5) {
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + 0.08;
    }
    uVar6 = *(undefined4 *)(param_1 + 0xbc);
    auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0xb0),*pauVar4);
    *(int *)*(undefined (*) [12])(param_1 + 0xb0) = auVar1._0_4_;
    *(int *)(param_1 + 0xb4) = auVar1._4_4_;
    *(int *)(param_1 + 0xb8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0xbc) = uVar6;
    fVar7 = *(float *)(param_1 + 0xec) - 0.07;
    *(float *)(param_1 + 0xec) = fVar7;
    if (fVar7 <= 0.0) {
      *(undefined *)(param_1 + 0x13c) = 0;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x150);
LAB_08826f0c:
  FUN_08826938(uVar6,param_1);
  return;
}

