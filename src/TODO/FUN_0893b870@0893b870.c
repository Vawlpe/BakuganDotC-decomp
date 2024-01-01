#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893b870(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 in_V7C;
  
  if (*(int *)(param_1 + 0x794) == 0) {
    return;
  }
  uVar3 = vmul_s(*(float *)(param_1 + 0x7a0) * 3.141593 * 0.005555556,in_V7C);
  fVar4 = (float)vsin_s(uVar3);
  *(float *)(*(int *)(param_1 + 0x794) + 0x34) = *(float *)(param_1 + 0x7e8) + fVar4 * 0.16;
  iVar2 = *(int *)(param_1 + 0x794);
  if (360.0 <= *(float *)(param_1 + 0x7a0)) {
    *(undefined4 *)(param_1 + 0x7a0) = 0;
  }
  if (*(char *)(param_1 + 0x5ee) == '\x05') {
    *(float *)(param_1 + 0x7a0) = *(float *)(param_1 + 0x7a0) + 2.0;
  }
  else {
    if (*(char *)(param_1 + 0x5ee) != '\x06') {
      iVar1 = *(int *)(iVar2 + 0x14);
      goto LAB_0893b950;
    }
    *(float *)(param_1 + 0x7a0) = *(float *)(param_1 + 0x7a0) + 4.0;
  }
  iVar1 = *(int *)(iVar2 + 0x14);
LAB_0893b950:
  (**(code **)(iVar1 + 0x3c))(iVar2 + *(short *)(iVar1 + 0x38));
  return;
}

