#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08878084(float param_1,int param_2,undefined (*param_3) [12],undefined (*param_4) [12],
                 undefined4 param_5,undefined4 param_6,char param_7,uint param_8)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  
  param_8 = param_8 & ~(1 << (*(uint *)(*(int *)(*(int *)(param_2 + 0xb0) + 0x20c) + 0x134) & 0x1f))
  ;
  DAT_08b00680 = *(float *)*param_3;
  DAT_08b00684 = *(float *)(*param_3 + 4);
  DAT_08b00688 = *(float *)(*param_3 + 8);
  DAT_08b00690 = *(undefined4 *)*param_4;
  DAT_08b00694 = *(float *)(*param_4 + 4);
  DAT_08b00698 = *(undefined4 *)(*param_4 + 8);
  if ((*(int *)(param_2 + 0xf4) < 2) || (param_7 != '\0')) {
    auVar1 = vsub_t(*param_3,*(undefined (*) [12])(*(int *)(param_2 + 0xb0) + 0x20));
    auVar2._4_4_ = 0;
    auVar2._0_4_ = auVar1._0_4_;
    auVar2._8_4_ = auVar1._8_4_;
    auVar2 = vadd_t(*param_4,auVar2);
    DAT_08b00690 = auVar2._0_4_;
    DAT_08b00694 = auVar2._4_4_;
    DAT_08b00698 = auVar2._8_4_;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = auVar1._0_4_;
    auVar6._8_4_ = auVar1._8_4_;
    auVar2 = vsub_t(*param_3,auVar6);
    DAT_08b00680 = auVar2._0_4_;
    DAT_08b00684 = auVar2._4_4_;
    DAT_08b00688 = auVar2._8_4_;
  }
  DAT_08b0068c = param_1 * param_1;
  auVar4._4_4_ = DAT_08b00694;
  auVar4._0_4_ = DAT_08b00690;
  auVar4._8_4_ = DAT_08b00698;
  auVar1._4_4_ = DAT_08b00694;
  auVar1._0_4_ = DAT_08b00690;
  auVar1._8_4_ = DAT_08b00698;
  uVar11 = vdot_t(auVar1,auVar4);
  DAT_08b0069c = vsqrt_s(uVar11);
  DAT_08aba944 = &DAT_08b006b0;
  DAT_08aba948 = *(undefined4 *)(param_2 + 0xb0);
  DAT_08b006a0 = param_1;
  DAT_08aba954 = atan2f(*(undefined4 *)(*param_4 + 8),*(undefined4 *)*param_4);
  DAT_08ab02f0 = param_6;
  DAT_08aba958 = param_5;
  if (30.0 < param_1) {
    uVar8 = FUN_0881aa28(param_8 & 0x3e,&DAT_08aba930,1,0);
    DAT_08b006a0 = 30.0;
    uVar7 = FUN_0881aa28(0x1bf0300,&DAT_08aba930,1,0);
    uVar8 = (uint)((uVar8 | uVar7) != 0);
  }
  else {
    uVar8 = FUN_0881aa28(param_8,&DAT_08aba930,1,0);
  }
  if (uVar8 == 0) {
    iVar9 = FUN_0881a83c(0x2fb72700,&DAT_08b006b0,0);
    if (iVar9 == 0) {
      pfVar10 = (float *)FUN_0889dcc8();
      if (((((DAT_08b00680 < *pfVar10) || (pfVar10[3] < DAT_08b00680)) ||
           (DAT_08b00688 < pfVar10[2])) || (pfVar10[5] < DAT_08b00688)) &&
         (DAT_08b00684 + DAT_08b00694 < DAT_08b006a0)) {
        uVar8 = 1;
        auVar5._4_4_ = DAT_08b00694;
        auVar5._0_4_ = DAT_08b00690;
        auVar5._8_4_ = DAT_08b00698;
        auVar2 = vscl_t(auVar5,0x3f000000);
        auVar3._4_4_ = DAT_08b00684;
        auVar3._0_4_ = DAT_08b00680;
        auVar3._8_4_ = DAT_08b00688;
        auVar2 = vadd_t(auVar3,auVar2);
        DAT_08aba930 = auVar2._0_4_;
        DAT_08aba938 = auVar2._8_4_;
        DAT_08aba93c = DAT_08b0068c;
        DAT_08aba934 = DAT_08b006a0;
        DAT_08aba940 = 0;
      }
    }
    else {
      uVar8 = 1;
      DAT_08aba930 = DAT_08b00280;
      DAT_08aba938 = DAT_08b00288;
      DAT_08aba93c = DAT_08b0028c;
      DAT_08aba934 = DAT_08b00284 + 10.0;
      DAT_08aba940 = 0;
    }
  }
  else if (DAT_08ab02fc != 0) {
    uVar11 = *(undefined4 *)(DAT_08ab02fc + 0x138);
    iVar9 = FUN_08860188(uVar11);
    if (iVar9 != 0) {
      FUN_088631c4(uVar11,*(undefined4 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xb0));
    }
  }
  return uVar8;
}

