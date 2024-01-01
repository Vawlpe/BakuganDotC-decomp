#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088550d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  fVar3 = 0.8;
  iVar4 = 0;
  if (iVar2 != 0) {
    FUN_0881a358(iVar2,1);
    iVar4 = iVar2;
  }
  fVar5 = *(float *)(param_1 + 0x40);
  *(int *)(param_1 + 0x20c) = iVar4;
  if (fVar5 < 0.8) {
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  else {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    *(undefined4 *)(param_1 + 0x290) = 0;
    fVar3 = fVar5;
  }
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(float *)(param_1 + 0x2a4) = *(float *)(param_1 + 0x40) * 730.0 * 1.2;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  fVar3 = fVar3 * 180.0;
  *(float *)(param_1 + 0x2b0) = fVar3;
  *(float *)(param_1 + 0x29c) = fVar3 * fVar3;
  uVar1 = vdot_t(*(undefined (*) [12])(param_1 + 0x2a0),*(undefined (*) [12])(param_1 + 0x2a0));
  uVar1 = vsqrt_s(uVar1);
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  FUN_0881a520(*(undefined4 *)(param_1 + 0x20c),param_1 + 0x270,0,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x20c) + 0x104) = 0;
  iVar4 = *(int *)(param_1 + 0x20c);
  *(int *)(iVar4 + 0x110) = param_1 + 0x220;
  *(undefined *)(iVar4 + 0x10c) = 1;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar2 != 0) {
    FUN_0881a358(iVar2,2);
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 0x208) = iVar4;
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x874) = 0;
  *(undefined4 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x880) = 0;
  *(float *)(param_1 + 0x884) = *(float *)(param_1 + 0x40) * 730.0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  fVar3 = *(float *)(param_1 + 0x40) * 260.0;
  *(float *)(param_1 + 0x890) = fVar3;
  *(float *)(param_1 + 0x87c) = fVar3 * fVar3;
  uVar1 = vdot_t(*(undefined (*) [12])(param_1 + 0x880),*(undefined (*) [12])(param_1 + 0x880));
  uVar1 = vsqrt_s(uVar1);
  *(undefined4 *)(param_1 + 0x88c) = uVar1;
  FUN_0881a520(iVar4,param_1 + 0x850,0,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x208) + 0x104) = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x208) + 0xf4);
  *(undefined4 *)(iVar4 + 0x10) = in_V72;
  *(undefined4 *)(iVar4 + 0x14) = in_V76;
  *(undefined4 *)(iVar4 + 0x18) = in_V7A;
  *(undefined4 *)(iVar4 + 0x1c) = in_V7E;
  iVar4 = *(int *)(param_1 + 0x208);
  *(int *)(iVar4 + 0x110) = param_1 + 0x220;
  *(undefined *)(iVar4 + 0x10c) = 1;
  iVar4 = *(int *)(param_1 + 0x208);
  *(uint *)(iVar4 + 0x130) = *(uint *)(iVar4 + 0x130) | 1;
  *(undefined4 *)(iVar4 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0;
  return;
}

