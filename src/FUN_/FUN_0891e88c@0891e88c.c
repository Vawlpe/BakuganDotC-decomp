#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891e88c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_V7C;
  
  iVar4 = 0;
  if (*(char *)(param_1 + 0x2137) != '\0') {
    iVar2 = 0;
    iVar3 = param_1;
    do {
      if (*(char *)(iVar3 + 0x21dc) == '\0') {
        bVar1 = *(byte *)(param_1 + 0x2137);
      }
      else {
        fVar6 = *(float *)(iVar3 + 0x21e4) + 0.025;
        *(float *)(iVar3 + 0x21e4) = fVar6;
        uVar7 = vmul_s(fVar6 * 3.141593,in_V7C);
        fVar6 = (float)vcos_s(uVar7);
        fVar6 = (1.0 - fVar6) * 0.5 * 0.6;
        *(float *)(iVar3 + 0x21e0) = fVar6;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x2a8);
        *(float *)(iVar5 + 0xc0) = fVar6;
        *(float *)(iVar5 + 0xc4) = fVar6;
        *(undefined4 *)(iVar5 + 200) = 0;
        *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
        bVar1 = *(byte *)(param_1 + 0x2137);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
      iVar2 = iVar2 + 4;
    } while (iVar4 < (int)(uint)bVar1);
  }
  return;
}

