#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088500fc(int param_1)

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
  
  uVar1 = FUN_089f2178(0x40000000);
  fVar5 = *(float *)(param_1 + 0x4e4);
  fVar4 = *(float *)(param_1 + 0x4e0);
  if ((fVar5 != 0.0) || (fVar4 != 0.0)) {
    fVar3 = (fVar4 - fVar5) * 0.2;
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
      fVar2 = *(float *)(param_1 + 0x4e8) - 0.002;
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
      local_14 = fVar5 * 0.8;
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      FUN_089f1be8(uVar1,&local_20,1,0);
    }
  }
  FUN_089f17b0(uVar1,0);
  FUN_08826328(uVar1);
  return uVar1;
}

