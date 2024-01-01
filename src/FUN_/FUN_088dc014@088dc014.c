#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dc014(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
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
  *(int *)(param_1 + 0x174) = iVar5;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0x41200000;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0x40200000;
  *(undefined4 *)(param_1 + 0x1fc) = 0x40c80000;
  uVar3 = vdot_t(*(undefined (*) [12])(param_1 + 0x200),*(undefined (*) [12])(param_1 + 0x200));
  uVar3 = vsqrt_s(uVar3);
  *(undefined4 *)(param_1 + 0x20c) = uVar3;
  FUN_0881a520(iVar5,param_1 + 0x1d0,0,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  iVar5 = *(int *)(param_1 + 0x174);
  *(int *)(iVar5 + 0x110) = param_1 + 0x180;
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
  *(int *)(param_1 + 0x170) = iVar5;
  *(undefined4 *)(param_1 + 0x230) = in_V72;
  *(undefined4 *)(param_1 + 0x234) = in_V76;
  *(undefined4 *)(param_1 + 0x238) = in_V7A;
  *(undefined4 *)(param_1 + 0x23c) = in_V7E;
  *(undefined4 *)(param_1 + 0x240) = 0x40b33333;
  *(undefined4 *)(param_1 + 0x23c) = 0x41fae147;
  FUN_0881a520(*(undefined4 *)(param_1 + 0x170),param_1 + 0x220,0,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x170) + 0x104) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x170) + 0xf4);
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
  iVar5 = *(int *)(param_1 + 0x170);
  *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) | 1;
  *(undefined4 *)(iVar5 + 0x148) = 0;
  return;
}

