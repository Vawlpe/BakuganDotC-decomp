#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08828c34(undefined4 param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  undefined4 in_V7F;
  
  iVar4 = 0;
  do {
    iVar3 = FUN_08828b60(1,param_1);
    uVar5 = vrndf1_s();
    fVar6 = (float)vsub_s(uVar5,in_V7F);
    uVar5 = vmul_s((float)iVar4 * 6.283185 * 0.0625,in_V7C);
    auVar2 = vrot_q(uVar5,1,0,2,0);
    auVar1 = vscl_t(auVar2._0_12_,fVar6 * 0.1 + 1.0);
    *(int *)*(undefined (*) [12])(iVar3 + 0x90) = auVar1._0_4_;
    *(int *)(iVar3 + 0x94) = auVar1._4_4_;
    *(int *)(iVar3 + 0x98) = auVar1._8_4_;
    *(int *)(iVar3 + 0x9c) = auVar2._12_4_;
    *(undefined4 *)(iVar3 + 0xb0) = 0x3f666666;
    *(undefined4 *)(iVar3 + 0xb4) = 0x3f333333;
    *(undefined4 *)(iVar3 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0xbc) = 0x3e4ccccd;
    auVar1 = vscl_t(*(undefined (*) [12])(iVar3 + 0x90),0x40800000);
    uVar5 = *(undefined4 *)(iVar3 + 0x6c);
    auVar1 = vadd_t(*(undefined (*) [12])(iVar3 + 0x60),auVar1);
    *(int *)*(undefined (*) [12])(iVar3 + 0x60) = auVar1._0_4_;
    *(int *)(iVar3 + 100) = auVar1._4_4_;
    *(int *)(iVar3 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(iVar3 + 0x6c) = uVar5;
    *(undefined4 *)(iVar3 + 0x20) = in_V72;
    *(undefined4 *)(iVar3 + 0x24) = in_V76;
    *(undefined4 *)(iVar3 + 0x28) = in_V7A;
    *(undefined4 *)(iVar3 + 0x2c) = in_V7E;
    uVar5 = vrndf1_s();
    fVar6 = (float)vsub_s(uVar5,in_V7F);
    fVar6 = fVar6 * 3.0 + 4.0;
    *(float *)(iVar3 + 0x70) = fVar6;
    *(float *)(iVar3 + 0x74) = fVar6;
    *(float *)(iVar3 + 0x78) = fVar6;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar3 + 0x7c) = 0;
  } while (iVar4 < 0x10);
  return;
}

