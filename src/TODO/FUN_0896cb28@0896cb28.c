#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896cb28(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = 0;
  if ('\0' < *(char *)(param_1 + 0x2b7d)) {
    cVar1 = *(char *)(param_1 + 0x29bd);
    while( true ) {
      if ((int)uVar4 < (int)cVar1 << 2) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b7c) + uVar4) * 4);
        iVar2 = param_1 + ((int)(uVar4 + ((uint)((int)uVar4 >> 2) >> 0x1e)) >> 2) * 0x10;
        if ((int)uVar4 < 0) {
          fVar5 = *(float *)(iVar2 + (-uVar4 & 3) * -4 + 0x2a0c);
        }
        else {
          fVar5 = *(float *)(iVar2 + (uVar4 & 3) * 4 + 0x2a0c);
        }
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b8c) + uVar4) * 4) +
                  100) = *(float *)(iVar3 + 100) + fVar5 * *(float *)(iVar3 + 0x94);
        cVar1 = *(char *)(param_1 + 0x2b7d);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x2b7d);
      }
      uVar4 = uVar4 + 1;
      if ((int)cVar1 <= (int)uVar4) break;
      cVar1 = *(char *)(param_1 + 0x29bd);
    }
  }
  return;
}

