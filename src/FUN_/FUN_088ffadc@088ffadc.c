#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ffadc(int param_1)

{
  undefined auVar1 [16];
  undefined (*pauVar2) [16];
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 in_V7C;
  
  FUN_088b2774();
  FUN_0889e228();
  if (*(int *)(param_1 + 0x4c4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x1c4) = 10;
    iVar3 = *(int *)(*(int *)(param_1 + 0x4c4) + 0x14);
    (**(code **)(iVar3 + 0x3c))(*(int *)(param_1 + 0x4c4) + (int)*(short *)(iVar3 + 0x38));
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    iVar3 = *(int *)(param_1 + 0x4c8);
    *(undefined4 *)(iVar3 + 0x250) = 0;
    *(undefined4 *)(iVar3 + 0x33c) = 1;
  }
  FUN_089e0f6c(*(undefined4 *)(param_1 + 0x4f0));
  FUN_089e0f6c(**(undefined4 **)(param_1 + 0x4e0));
  FUN_089e0f6c(**(undefined4 **)(param_1 + 0xf0));
  FUN_088a9578();
  FUN_088fde00(param_1 + 0x100);
  FUN_089e2b14(param_1 + 0x100,2);
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar3 = *(int *)(param_1 + 0xec);
  }
  else {
    FUN_08823d74(*(undefined4 *)(param_1 + 0xe8));
    iVar3 = *(int *)(param_1 + 0xec);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xe4);
  }
  else {
    FUN_08823d74(*(undefined4 *)(param_1 + 0xec));
    iVar3 = *(int *)(param_1 + 0xe4);
  }
  if (iVar3 != 0) {
    FUN_089f50bc(*(undefined4 *)(param_1 + 0xe4));
  }
  FUN_089f50bc(*(undefined4 *)(param_1 + 0xe0));
  FUN_088259a4();
  if (*(int *)(param_1 + 0x784) < 1) {
    fVar4 = *(float *)(param_1 + 0x780) - 0.05;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 0x780) = fVar4;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x780) + 0.05;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    *(float *)(param_1 + 0x780) = fVar4;
    *(int *)(param_1 + 0x784) = *(int *)(param_1 + 0x784) + -1;
  }
  pauVar2 = (undefined (*) [16])(param_1 + 0x760);
  uVar5 = vmul_s(*(float *)(param_1 + 0x780) * 3.141593,in_V7C);
  fVar4 = (float)vcos_s(uVar5);
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x770),*pauVar2);
  auVar1 = vscl_q(auVar1,(1.0 - fVar4) * 0.5);
  auVar1 = vadd_q(*pauVar2,auVar1);
  *(int *)*pauVar2 = auVar1._0_4_;
  *(int *)(param_1 + 0x764) = auVar1._4_4_;
  *(int *)(param_1 + 0x768) = auVar1._8_4_;
  *(int *)(param_1 + 0x76c) = auVar1._12_4_;
  uVar5 = vmul_s(*(float *)(param_1 + 0x780) * 3.141593,in_V7C);
  fVar4 = (float)vcos_s(uVar5);
  *(float *)(param_1 + 0x76c) = (1.0 - fVar4) * 0.5 * *(float *)(param_1 + 0x77c);
  return;
}

