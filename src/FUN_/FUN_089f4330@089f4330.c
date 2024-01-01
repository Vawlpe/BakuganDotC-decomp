#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4330(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x120);
  *(undefined4 *)(*(int *)(param_1 + 0x120) + 0x18) = 0;
  *puVar2 = 0;
  fVar3 = *(float *)(*(int *)(param_1 + 0xd4) + 0xa4);
  iVar1 = FUN_089f70c4();
  fVar3 = (float)iVar1 * fVar3;
  iVar1 = *(int *)(param_1 + 0x120);
  *(float *)(*(int *)(param_1 + 0x120) + 0x24) = fVar3;
  *(float *)(iVar1 + 0xc) = fVar3;
  iVar1 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(*(int *)(param_1 + 0x120) + 0x10) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  fVar3 = *(float *)(*(int *)(param_1 + 0xd4) + 0xa8);
  iVar1 = FUN_089f70d0();
  fVar3 = (float)iVar1 * fVar3;
  iVar1 = *(int *)(param_1 + 0x120);
  *(float *)(*(int *)(param_1 + 0x120) + 0x28) = fVar3;
  *(float *)(iVar1 + 0x1c) = fVar3;
  return;
}

