#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891e7b8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  
  iVar3 = 0;
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if ((*(char *)(iVar2 + 0x21b8) != '\0') && (*(char *)(param_1 + iVar3 + 0x2134) != -1)) {
      fVar5 = *(float *)(iVar2 + 0x21c0) + 0.025;
      *(float *)(iVar2 + 0x21c0) = fVar5;
      uVar6 = vmul_s(fVar5 * 3.141593,in_V7C);
      fVar5 = (float)vcos_s(uVar6);
      fVar5 = (1.0 - fVar5) * 0.5 * 0.6;
      *(float *)(iVar2 + 0x21bc) = fVar5;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0x27c);
      *(float *)(iVar4 + 0xc0) = fVar5;
      *(float *)(iVar4 + 0xc4) = fVar5;
      *(float *)(iVar4 + 200) = fVar5;
      *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0xc;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 3);
  return;
}

