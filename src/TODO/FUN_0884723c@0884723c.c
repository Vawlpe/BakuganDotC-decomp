#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884723c(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 in_V7C;
  
  iVar1 = FUN_08860344(*(undefined4 *)(param_1 + 0x2a0));
  iVar2 = FUN_0886aac8(*(undefined4 *)(param_1 + 0x2a0));
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      fVar3 = 0.0;
      goto LAB_088472a4;
    }
    iVar1 = FUN_0886aac8(iVar1);
    if (iVar1 == 0) {
      fVar3 = 0.0;
      goto LAB_088472a4;
    }
  }
  fVar3 = *(float *)(param_1 + 0x3a0) + 0.025;
LAB_088472a4:
  *(float *)(param_1 + 0x3a0) = fVar3;
  if (1.0 < fVar3) {
    *(undefined4 *)(param_1 + 0x3a0) = 0x3f800000;
  }
  fVar3 = *(float *)(param_1 + 0x3a0) - 1.0;
  uVar4 = vmul_s((1.0 - fVar3 * fVar3) * 3.141593,in_V7C);
  fVar3 = (float)vcos_s(uVar4);
  *(float *)(param_1 + 0x204) = 1.0 - (1.0 - fVar3) * 0.5 * 0.35;
  return;
}

