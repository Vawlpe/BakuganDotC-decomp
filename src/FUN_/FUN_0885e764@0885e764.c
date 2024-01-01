#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885e764(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    FUN_0881a358(iVar4,1);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x20c) = iVar5;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 10:
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x10);
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = uVar3;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    break;
  default:
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x10);
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    break;
  case 0x18:
  case 0x1b:
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x10);
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = uVar3;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    break;
  case 0x19:
    fVar6 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x10);
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(float *)(param_1 + 0x2a4) = -fVar6;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
  }
  fVar6 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x14);
  *(float *)(param_1 + 0x2b0) = fVar6;
  *(float *)(param_1 + 0x29c) = fVar6 * fVar6;
  uVar3 = vdot_t(*(undefined (*) [12])(param_1 + 0x2a0),*(undefined (*) [12])(param_1 + 0x2a0));
  uVar3 = vsqrt_s(uVar3);
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  FUN_0881a520(*(undefined4 *)(param_1 + 0x20c),param_1 + 0x270,0,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x20c) + 0x104) = 0;
  iVar5 = *(int *)(param_1 + 0x20c);
  *(int *)(iVar5 + 0x110) = param_1 + 0x220;
  *(undefined *)(iVar5 + 0x10c) = 1;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    FUN_0881a358(iVar4,2);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x208) = iVar5;
  *(undefined4 *)(param_1 + 0x2d0) = in_V72;
  *(undefined4 *)(param_1 + 0x2d4) = in_V76;
  *(undefined4 *)(param_1 + 0x2d8) = in_V7A;
  *(undefined4 *)(param_1 + 0x2dc) = in_V7E;
  fVar6 = *(float *)(*(int *)(param_1 + 0x4bc) + 0xc);
  *(float *)(param_1 + 0x2e0) = fVar6;
  *(float *)(param_1 + 0x2dc) = fVar6 * fVar6;
  FUN_0881a520(*(undefined4 *)(param_1 + 0x208),param_1 + 0x2c0,0,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x208) + 0x104) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x208) + 0xf4);
  iVar4 = *(int *)(param_1 + 0x130);
  uVar3 = *(undefined4 *)(iVar4 + 0xb4);
  uVar1 = *(undefined4 *)(iVar4 + 0xb8);
  uVar2 = *(undefined4 *)(iVar4 + 0xbc);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + 0xb0);
  *(undefined4 *)(iVar5 + 0x14) = uVar3;
  *(undefined4 *)(iVar5 + 0x18) = uVar1;
  *(undefined4 *)(iVar5 + 0x1c) = uVar2;
  *(float *)(iVar5 + 0x14) = *(float *)(iVar5 + 0x14) + *(float *)(iVar5 + 0x20);
  (**(code **)(*(int *)(iVar5 + 4) + 0x4c))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x48));
  iVar5 = *(int *)(param_1 + 0x208);
  *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) | 1;
  *(undefined4 *)(iVar5 + 0x148) = 0;
  return;
}

