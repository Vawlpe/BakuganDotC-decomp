#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896cde4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x2a6c) + 0.125;
  *(float *)(param_1 + 0x2a6c) = fVar6;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4);
  if (*(char *)(param_1 + 0x2a5d) != '\0') {
    *(float *)(iVar1 + 0xbc) = *(float *)(param_1 + 0x2a64) + fVar6;
    iVar3 = (int)*(char *)(param_1 + 0x29be);
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(iVar4 + ((uint)*(byte *)(param_1 + 0x2b84) + iVar3) * 4);
    if (1.0 <= *(float *)(param_1 + 0x2a6c)) {
      *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
      iVar3 = (int)*(char *)(param_1 + 0x29be);
      iVar4 = *(int *)(param_1 + 0x1c);
      piVar2 = (int *)(iVar4 + ((uint)*(byte *)(param_1 + 0x2b84) + iVar3) * 4);
      uVar5 = *(undefined4 *)(*piVar2 + 0xbc);
      *(undefined4 *)(param_1 + 0x2a6c) = 0;
      *(undefined4 *)(param_1 + 0x2a64) = uVar5;
      *(undefined *)(param_1 + 0x2a5d) = 0;
      iVar1 = *piVar2;
    }
    *(undefined4 *)(*(int *)(iVar4 + ((uint)*(byte *)(param_1 + 0x2b8a) + iVar3 * 2) * 4) + 0xbc) =
         *(undefined4 *)(iVar1 + 0xbc);
    return;
  }
  *(float *)(iVar1 + 0xbc) = *(float *)(param_1 + 0x2a64) - fVar6;
  iVar3 = (int)*(char *)(param_1 + 0x29be);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(iVar4 + ((uint)*(byte *)(param_1 + 0x2b84) + iVar3) * 4);
  if (1.0 <= *(float *)(param_1 + 0x2a6c)) {
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
    iVar3 = (int)*(char *)(param_1 + 0x29be);
    iVar4 = *(int *)(param_1 + 0x1c);
    piVar2 = (int *)(iVar4 + ((uint)*(byte *)(param_1 + 0x2b84) + iVar3) * 4);
    uVar5 = *(undefined4 *)(*piVar2 + 0xbc);
    *(undefined4 *)(param_1 + 0x2a6c) = 0;
    *(undefined4 *)(param_1 + 0x2a64) = uVar5;
    *(undefined *)(param_1 + 0x2a5d) = 1;
    iVar1 = *piVar2;
  }
  *(undefined4 *)(*(int *)(iVar4 + ((uint)*(byte *)(param_1 + 0x2b8a) + iVar3 * 2) * 4) + 0xbc) =
       *(undefined4 *)(iVar1 + 0xbc);
  return;
}

