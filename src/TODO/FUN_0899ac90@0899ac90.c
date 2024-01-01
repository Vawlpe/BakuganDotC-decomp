#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899ac90(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = FUN_08996448();
  if (iVar2 == 0) {
    piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
    uVar4 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
    iVar2 = *piVar3 + ((int)uVar4 >> 3);
    if ((int)uVar4 < 0) {
      bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
    }
    else {
      bVar1 = (byte)(1 << (uVar4 & 7));
    }
    *(byte *)(iVar2 + 0x8d) = *(byte *)(iVar2 + 0x8d) | bVar1;
  }
  return;
}

