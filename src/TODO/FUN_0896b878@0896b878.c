#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0896b878(int param_1,char param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x29c8);
  fVar3 = *(float *)(param_1 + 0x29cc) + 0.125;
  uVar1 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x29d0) == '\0') {
      *(float *)(param_1 + 0x29cc) = fVar3;
      fVar4 = fVar4 + (1.0 - (fVar3 - 1.0) * (fVar3 - 1.0)) * 1.2;
      *(float *)(param_1 + 0x29c4) = fVar4;
      FUN_089f59e8(fVar4,0,uVar2,0);
      if (1.0 <= *(float *)(param_1 + 0x29cc)) {
        FUN_089f59e8(0x3f99999a,0,*(undefined4 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x29c8) = *(undefined4 *)(param_1 + 0x29c4);
        *(undefined4 *)(param_1 + 0x29cc) = 0;
        *(char *)(param_1 + 0x29d0) = *(char *)(param_1 + 0x29d0) + '\x01';
      }
    }
    else {
      *(float *)(param_1 + 0x29cc) = fVar3;
      fVar4 = fVar4 - fVar3 * fVar3 * 0.2;
      *(float *)(param_1 + 0x29c4) = fVar4;
      FUN_089f59e8(fVar4,0,uVar2,0);
      if (1.0 <= *(float *)(param_1 + 0x29cc)) {
        FUN_089f59e8(0x3f800000,0,*(undefined4 *)(param_1 + 0x18),0);
        uVar1 = 1;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x29cc) = fVar3;
    *(float *)(param_1 + 0x29c4) = fVar4 - fVar3;
    FUN_089f59e8(fVar4 - fVar3,0,uVar2,0);
    if (1.0 <= *(float *)(param_1 + 0x29cc)) {
      FUN_089f59e8(0,0,*(undefined4 *)(param_1 + 0x18),0);
      uVar1 = 1;
    }
  }
  return uVar1;
}

