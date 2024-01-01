#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08929d2c(int param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 0x6fc) + 0.0625;
  uVar1 = 0;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x6fc) = fVar5;
    fVar6 = *(float *)(param_1 + 0x6f4) + (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0));
    *(float *)(param_1 + 0x700) = 1.0 - (fVar5 - 1.0) * (fVar5 - 1.0);
    *(float *)(param_1 + 0x6f8) = fVar6;
    FUN_089f59e8(fVar6,0,*(undefined4 *)(param_1 + 0x18),0);
    if (*(float *)(param_1 + 0x6fc) < 1.0) goto LAB_08929e38;
    FUN_089f59e8(0x3f800000,0,*(undefined4 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x700) = 0x3f800000;
  }
  else {
    *(float *)(param_1 + 0x6fc) = fVar5;
    fVar6 = *(float *)(param_1 + 0x6f4) - fVar5 * fVar5;
    *(float *)(param_1 + 0x6f8) = fVar6;
    *(float *)(param_1 + 0x700) = 1.0 - fVar5 * fVar5;
    FUN_089f59e8(fVar6,0,*(undefined4 *)(param_1 + 0x18),0);
    if (*(float *)(param_1 + 0x6fc) < 1.0) goto LAB_08929e38;
    FUN_089f59e8(0,0,*(undefined4 *)(param_1 + 0x18),0);
  }
  uVar1 = 1;
LAB_08929e38:
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    if ((*(uint *)(iVar2 + 0xd0) & 1) != 0) {
      *(undefined4 *)(iVar2 + 0xbc) = *(undefined4 *)(param_1 + 0x700);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0x1a);
  return uVar1;
}

