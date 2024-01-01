#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899a698(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  
  fVar5 = *(float *)(param_1 + 0x2290) + 0.008333334;
  *(float *)(param_1 + 0x2290) = fVar5;
  uVar6 = vmul_s(fVar5 * 3.141593,in_V7C);
  fVar5 = (float)vcos_s(uVar6);
  *(float *)(*(int *)(param_1 + 0x226c) + 0x24) = (1.0 - fVar5) * 0.5 * 5.0 + -20.0;
  fVar5 = *(float *)(param_1 + 0x2294) + 0.008333334;
  *(float *)(param_1 + 0x2294) = fVar5;
  uVar6 = vmul_s(fVar5 * 3.141593,in_V7C);
  fVar5 = (float)vcos_s(uVar6);
  *(float *)(*(int *)(param_1 + 0x226c) + 0x20) = (1.0 - fVar5) * 0.5 * 8.0 + -4.0;
  iVar3 = *(int *)(param_1 + 0x226c);
  iVar4 = *(int *)(iVar3 + 0x130);
  uVar6 = *(undefined4 *)(iVar3 + 0x24);
  uVar1 = *(undefined4 *)(iVar3 + 0x28);
  uVar2 = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(iVar4 + 0xb4) = uVar6;
  *(undefined4 *)(iVar4 + 0xb8) = uVar1;
  *(undefined4 *)(iVar4 + 0xbc) = uVar2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x226c) + 0x130) + 0xbc) = 0x3f800000;
  return;
}

