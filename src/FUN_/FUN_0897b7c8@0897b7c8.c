#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897b7c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_V7C;
  
  if (*(char *)(param_1 + 0x1300) != '\0') {
    iVar4 = 0;
    *(float *)(param_1 + 0x1304) = *(float *)(param_1 + 0x1304) + 0.01666667;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0x12a4) != 0) {
        uVar7 = vmul_s(*(float *)(param_1 + 0x1304) * 3.141593,in_V7C);
        fVar8 = (float)vcos_s(uVar7);
        *(float *)(*(int *)(iVar3 + 0x12a4) + 0x24) =
             *(float *)(param_1 + 0x1308) + (1.0 - fVar8) * 0.5 * 0.2;
        iVar5 = *(int *)(iVar3 + 0x12a4);
        iVar6 = *(int *)(iVar5 + 0x130);
        uVar7 = *(undefined4 *)(iVar5 + 0x24);
        uVar1 = *(undefined4 *)(iVar5 + 0x28);
        uVar2 = *(undefined4 *)(iVar5 + 0x2c);
        *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined4 *)(iVar6 + 0xb4) = uVar7;
        *(undefined4 *)(iVar6 + 0xb8) = uVar1;
        *(undefined4 *)(iVar6 + 0xbc) = uVar2;
        *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x12a4) + 0x130) + 0xbc) = 0x3f800000;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 7);
  }
  return;
}

