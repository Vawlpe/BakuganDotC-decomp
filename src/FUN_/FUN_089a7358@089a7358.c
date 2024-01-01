#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a7358(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  if (*(char *)(param_1 + 0x9c0) != '\0') {
    iVar4 = 0;
    iVar3 = param_1;
    do {
      if (iVar4 != 1) {
        fVar7 = *(float *)(iVar3 + 0x9cc) + 0.02222222;
        *(float *)(iVar3 + 0x9cc) = fVar7;
        uVar8 = vmul_s(fVar7 * 3.141593,in_V7C);
        fVar7 = (float)vcos_s(uVar8);
        *(float *)(*(int *)(param_1 + 0x68c) + 0x24) =
             *(float *)(iVar3 + 0x9c8) + (1.0 - fVar7) * 0.5 * 10.0;
        iVar5 = *(int *)(param_1 + 0x68c);
        iVar6 = *(int *)(iVar5 + 0x130);
        uVar8 = *(undefined4 *)(iVar5 + 0x24);
        uVar1 = *(undefined4 *)(iVar5 + 0x28);
        uVar2 = *(undefined4 *)(iVar5 + 0x2c);
        *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined4 *)(iVar6 + 0xb4) = uVar8;
        *(undefined4 *)(iVar6 + 0xb8) = uVar1;
        *(undefined4 *)(iVar6 + 0xbc) = uVar2;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x68c) + 0x130) + 0xbc) = 0x3f800000;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
      param_1 = param_1 + 4;
    } while (iVar4 < 5);
  }
  return;
}

