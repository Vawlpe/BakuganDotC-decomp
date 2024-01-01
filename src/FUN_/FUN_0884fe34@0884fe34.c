#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884fe34(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  uVar1 = FUN_089f2178(0x3f800000);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x430),uVar1);
  uVar1 = FUN_089f2178(0x3fc00000);
  if (*(int *)(param_1 + 0x4ec) != 0) {
    FUN_08819ac8(*(int *)(param_1 + 0x4ec),uVar1);
  }
  uVar1 = FUN_089f2178(0x3fe66666);
  fVar5 = *(float *)(param_1 + 0x4e4);
  fVar4 = *(float *)(param_1 + 0x4e0);
  if ((fVar5 != 0.0) || (fVar4 != 0.0)) {
    fVar3 = (fVar4 - fVar5) * 0.3;
    if (0.1 < fVar3) {
      fVar2 = 0.1;
    }
    else {
      fVar2 = -0.1;
      if (-0.1 <= fVar3) {
        fVar2 = fVar3;
      }
    }
    if (fVar4 < fVar5) {
      fVar2 = *(float *)(param_1 + 0x4e8) - 0.004;
      *(float *)(param_1 + 0x4e8) = fVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x4e8) = 0;
    }
    fVar5 = fVar5 + fVar2;
    *(float *)(param_1 + 0x4e4) = fVar5;
    if (fVar5 < 0.0) {
      *(undefined4 *)(param_1 + 0x4e4) = 0;
      fVar5 = 0.0;
    }
    if (0.0 < fVar5) {
      local_20 = 0x3f800000;
      local_14 = fVar5 * 0.8;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      FUN_089f1be8(uVar1,&local_20,1,0);
    }
  }
  uVar1 = FUN_089f2178(0x40000000);
  FUN_089f17b0(uVar1,0);
  uVar1 = FUN_089f2178(0x44834000);
  if (0.0 < *(float *)(param_1 + 0x4fc)) {
    FUN_089f2ddc(uVar1,param_1 + 0x4f0);
  }
  FUN_089f8a64(param_1 + 0x488);
  return;
}

