#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899c658(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar2 = 0;
  iVar5 = param_1;
  do {
    if ((int)(uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) +
                                                      0x10a0) + 0x11c2) <= iVar6) {
      return;
    }
    iVar3 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 200);
    iVar4 = *(int *)(iVar5 + 0x1240);
    if (0.0 < *(float *)(iVar5 + 0x122c)) {
      do {
        iVar3 = iVar3 + 1;
        *(float *)(iVar4 + 100) = *(float *)(iVar1 + 100) - 19.0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 200);
        iVar4 = *(int *)(iVar4 + 4);
      } while ((float)iVar3 < *(float *)(iVar5 + 0x122c));
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar5 + 0x1224) = *(undefined4 *)(iVar1 + 0xbc);
    iVar5 = iVar5 + 0x224;
    iVar2 = iVar2 + 4;
  } while (iVar6 < 3);
  return;
}

