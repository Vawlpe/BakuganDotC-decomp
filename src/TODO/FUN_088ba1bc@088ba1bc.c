#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ba1bc(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  
  if (*(int *)(param_1 + 0x2a0) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x2a0) + 0x328) == 0) {
    return;
  }
  FUN_088b9eac(param_1,1);
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  iVar4 = *(int *)(param_1 + 0x2a0);
  fVar5 = (float)atan2f(*(float *)(*(int *)(iVar4 + 0x328) + 0x28) - *(float *)(iVar4 + 0x28),
                        *(float *)(*(int *)(iVar4 + 0x328) + 0x20) - *(float *)(iVar4 + 0x20));
  fVar7 = *(float *)(*(int *)(param_1 + 0x2a0) + 0x34) + 3.141593;
  if (3.141593 < fVar7) {
    fVar7 = fVar7 - 6.283185;
  }
  else if (fVar7 <= -3.141593) {
    fVar7 = fVar7 + 6.283185;
  }
  fVar6 = (float)atan2f(*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x68),
                        *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x60));
  if (3.141593 < fVar6) {
    fVar6 = fVar6 - 6.283185;
  }
  else if (fVar6 <= -3.141593) {
    fVar6 = fVar6 + 6.283185;
  }
  fVar7 = (fVar7 - fVar6) - (float)(int)((fVar7 - fVar6) * 0.3183099) * 6.283185;
  if (fVar7 < 0.0) {
    fVar7 = fVar7 + 6.283185;
  }
  if (3.141593 <= fVar7) {
    fVar7 = 6.283185 - fVar7;
  }
  else {
    fVar7 = -fVar7;
  }
  if (3.141593 < fVar7) {
    fVar7 = fVar7 - 6.283185;
  }
  else if (fVar7 <= -3.141593) {
    fVar7 = fVar7 + 6.283185;
  }
  if (fVar7 < 0.1) {
    fVar5 = fVar5 + 2.042035;
    *(float *)(param_1 + 800) = fVar5 + 0.4363672;
  }
  else {
    fVar5 = fVar5 - 2.042035;
    *(float *)(param_1 + 800) = fVar5 - 0.4363672;
  }
  if (3.141593 < fVar5) {
    fVar5 = fVar5 - 6.283185;
LAB_088ba430:
    iVar4 = *(int *)(param_1 + 0x2a0);
  }
  else {
    if (fVar5 <= -3.141593) {
      fVar5 = fVar5 + 6.283185;
      goto LAB_088ba430;
    }
    iVar4 = *(int *)(param_1 + 0x2a0);
  }
  auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(iVar4 + 0x328) + 0x20),
                  *(undefined (*) [12])(iVar4 + 0x20));
  uVar9 = vmul_s(fVar5,in_V7C);
  auVar3 = vrot_q(uVar9,1,0,2,0);
  auVar2 = vscl_t(auVar3._0_12_,0x41700000);
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x2a0) + 0x2c);
  auVar2 = vadd_t(*(undefined (*) [12])(*(int *)(param_1 + 0x2a0) + 0x20),auVar2);
  if (3.141593 < *(float *)(param_1 + 800)) {
    *(float *)(param_1 + 800) = *(float *)(param_1 + 800) - 6.283185;
LAB_088ba4d8:
    fVar5 = *(float *)(param_1 + 800);
  }
  else {
    if (*(float *)(param_1 + 800) <= -3.141593) {
      *(float *)(param_1 + 800) = *(float *)(param_1 + 800) + 6.283185;
      goto LAB_088ba4d8;
    }
    fVar5 = *(float *)(param_1 + 800);
  }
  *(float *)(param_1 + 0x2f0) = fVar5;
  uVar8 = vdot_t(auVar1,auVar1);
  fVar6 = (float)vsqrt_s(uVar8);
  *(float *)(param_1 + 0x344) = fVar6;
  uVar8 = vmul_s(0,in_V7C);
  fVar7 = (float)vcos_s(uVar8);
  fVar5 = fVar5 + 3.141593;
  *(float *)(param_1 + 0x344) = fVar6 / fVar7;
  if (3.141593 < fVar5) {
    fVar5 = fVar5 - 6.283185;
  }
  else {
    if (-3.141593 < fVar5) {
      uVar8 = *(undefined4 *)(param_1 + 0x344);
      goto LAB_088ba558;
    }
    fVar5 = fVar5 + 6.283185;
  }
  uVar8 = *(undefined4 *)(param_1 + 0x344);
LAB_088ba558:
  uVar10 = vmul_s(fVar5,in_V7C);
  auVar3 = vrot_q(uVar10,1,0,2,0);
  auVar1 = vscl_t(auVar3._0_12_,uVar8);
  auVar2 = vadd_t(auVar2,auVar1);
  *(int *)(param_1 + 0x350) = auVar2._0_4_;
  *(int *)(param_1 + 0x354) = auVar2._4_4_;
  *(int *)(param_1 + 0x358) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x35c) = uVar9;
  return;
}

