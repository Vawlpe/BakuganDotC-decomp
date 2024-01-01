#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088636fc(undefined4 param_1,float param_2,int param_3)

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
  *(int *)(param_3 + 0x20c) = iVar5;
  *(undefined4 *)(param_3 + 0x290) = 0;
  *(undefined4 *)(param_3 + 0x294) = 0;
  *(undefined4 *)(param_3 + 0x298) = 0;
  *(undefined4 *)(param_3 + 0x2a0) = 0;
  *(undefined4 *)(param_3 + 0x2a4) = param_1;
  *(undefined4 *)(param_3 + 0x2a8) = 0;
  *(undefined4 *)(param_3 + 0x2ac) = 0;
  *(float *)(param_3 + 0x2b0) = param_2;
  *(float *)(param_3 + 0x29c) = param_2 * param_2;
  uVar3 = vdot_t(*(undefined (*) [12])(param_3 + 0x2a0),*(undefined (*) [12])(param_3 + 0x2a0));
  uVar3 = vsqrt_s(uVar3);
  *(undefined4 *)(param_3 + 0x2ac) = uVar3;
  FUN_0881a520(iVar5,param_3 + 0x270,0,param_3,0);
  *(undefined *)(*(int *)(param_3 + 0x20c) + 0x104) = 0;
  iVar5 = *(int *)(param_3 + 0x20c);
  *(int *)(iVar5 + 0x110) = param_3 + 0x220;
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
  *(int *)(param_3 + 0x208) = iVar5;
  *(undefined4 *)(param_3 + 0x2d0) = in_V72;
  *(undefined4 *)(param_3 + 0x2d4) = in_V76;
  *(undefined4 *)(param_3 + 0x2d8) = in_V7A;
  *(undefined4 *)(param_3 + 0x2dc) = in_V7E;
  *(float *)(param_3 + 0x2e0) = param_2;
  *(float *)(param_3 + 0x2dc) = param_2 * param_2;
  FUN_0881a520(*(undefined4 *)(param_3 + 0x208),param_3 + 0x2c0,0,param_3,0);
  *(undefined *)(*(int *)(param_3 + 0x208) + 0x104) = 0;
  iVar5 = *(int *)(*(int *)(param_3 + 0x208) + 0xf4);
  iVar4 = *(int *)(param_3 + 0x130);
  uVar3 = *(undefined4 *)(iVar4 + 0xb4);
  uVar1 = *(undefined4 *)(iVar4 + 0xb8);
  uVar2 = *(undefined4 *)(iVar4 + 0xbc);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + 0xb0);
  *(undefined4 *)(iVar5 + 0x14) = uVar3;
  *(undefined4 *)(iVar5 + 0x18) = uVar1;
  *(undefined4 *)(iVar5 + 0x1c) = uVar2;
  *(float *)(iVar5 + 0x14) = *(float *)(iVar5 + 0x14) + *(float *)(iVar5 + 0x20);
  (**(code **)(*(int *)(iVar5 + 4) + 0x4c))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x48));
  iVar5 = *(int *)(param_3 + 0x208);
  *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) | 1;
  *(undefined4 *)(iVar5 + 0x148) = 0;
  return;
}

