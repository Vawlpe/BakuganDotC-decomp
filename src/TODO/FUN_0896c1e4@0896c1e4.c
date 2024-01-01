#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896c1e4(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_1 + 0x2b7d);
  uVar5 = 0;
  if (0 < cVar1) {
    iVar4 = (int)*(char *)(param_1 + 0x29bd) << 2;
    bVar2 = 0 < iVar4;
    do {
      if (bVar2) {
        if ((int)uVar5 < 0) {
          uVar3 = -(-uVar5 & 3);
        }
        else {
          uVar3 = uVar5 & 3;
        }
        *(float *)(param_1 + ((int)(uVar5 + ((uint)((int)uVar5 >> 2) >> 0x1e)) >> 2) * 0x10 +
                   uVar3 * 4 + 0x2a0c) =
             *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                                (*(byte *)(param_1 + 0x2b8c) + uVar5) * 4) + 100) -
             *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                                (*(byte *)(param_1 + 0x2b7c) + uVar5) * 4) + 100);
      }
      uVar5 = uVar5 + 1;
      bVar2 = (int)uVar5 < iVar4;
    } while ((int)uVar5 < (int)cVar1);
  }
  return;
}

