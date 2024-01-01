#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08844150(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  
  FUN_088440a8();
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar4 = **(int **)(param_1 + 0x48);
  if (iVar3 < 2) {
    if (-1 < iVar3) {
      if (iVar3 < 1) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x48) + 8);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x3c0);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        uVar6 = *(undefined4 *)(iVar4 + 100);
        uVar1 = *(undefined4 *)(iVar4 + 0x68);
        uVar2 = *(undefined4 *)(iVar4 + 0x6c);
        *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar4 + 0x60);
        *(undefined4 *)(param_1 + 0x334) = uVar6;
        *(undefined4 *)(param_1 + 0x338) = uVar1;
        *(undefined4 *)(param_1 + 0x33c) = uVar2;
        *(undefined4 *)(param_1 + 0xad4) = 0x168;
        *(undefined4 *)(param_1 + 0xad8) = 0;
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        *(undefined4 *)(iVar4 + 0xbc) = 0;
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
        iVar3 = *(int *)(param_1 + 0xad8);
      }
      else {
        iVar3 = *(int *)(param_1 + 0xad8);
      }
      *(int *)(param_1 + 0xad8) = iVar3 + 1;
      fVar5 = (float)(iVar3 + 1) * 0.04166667 - 1.0;
      uVar6 = vmul_s((1.0 - fVar5 * fVar5) * 3.141593,in_V7C);
      fVar5 = (float)vcos_s(uVar6);
      *(float *)(iVar4 + 0x60) =
           *(float *)(param_1 + 0x330) +
           (float)*(int *)(param_1 + 0xad4) * (1.0 - (1.0 - fVar5) * 0.5);
      *(float *)(iVar4 + 0xbc) = *(float *)(iVar4 + 0xbc) + 0.05;
      if (1.0 <= *(float *)(iVar4 + 0xbc)) {
        *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      }
      if (0x13 < *(int *)(param_1 + 0xad8)) {
        *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(param_1 + 0x330);
        *(undefined4 *)(param_1 + 0xadc) = 5;
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      }
    }
  }
  else {
    if (iVar3 < 3) {
      iVar3 = *(int *)(param_1 + 0xadc) + -1;
      *(int *)(param_1 + 0xadc) = iVar3;
      if (0 < iVar3) {
        return;
      }
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    }
    else if (3 < iVar3) {
      return;
    }
    FUN_0883acdc(param_1,0x29fe);
    *(undefined4 *)(param_1 + 0xb0) = 9;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}

