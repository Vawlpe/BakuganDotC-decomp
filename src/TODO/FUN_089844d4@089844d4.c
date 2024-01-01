#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089844d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 in_V7C;
  
  if (*(char *)(param_1 + 0xc78) != '\0') {
    iVar3 = 0;
    *(float *)(param_1 + 0xc7c) = *(float *)(param_1 + 0xc7c) + 0.01666667;
    iVar1 = 0;
    iVar2 = param_1;
    do {
      if (*(char *)(iVar3 + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xbd8) != -1) {
        uVar4 = vmul_s(*(float *)(param_1 + 0xc7c) * 3.141593,in_V7C);
        fVar5 = (float)vcos_s(uVar4);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0x34) + 100) =
             *(float *)(iVar2 + 0xc88) - (1.0 - fVar5) * 0.5 * 8.0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + 4;
    } while (iVar3 < 4);
  }
  return;
}

