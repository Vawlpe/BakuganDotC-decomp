#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892e23c(int param_1,undefined param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined *)(param_1 + 0x1c94) = param_2;
  *(undefined4 *)(param_1 + 0x1ca4) = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    iVar4 = param_1 + iVar3;
    cVar1 = *(char *)(param_1 + (param_3 & 0xff) * 0xc + iVar3 + 0x1ba8);
    *(undefined *)(iVar4 + 0x1c95) = *(undefined *)(iVar4 + 0x1c99);
    *(char *)(iVar4 + 0x1c9d) = cVar1 * '\n';
    iVar3 = iVar3 + 1;
    *(float *)(iVar2 + 0x1ca8) =
         (float)((uint)*(byte *)(iVar4 + 0x1c9d) - (uint)*(byte *)(iVar4 + 0x1c95));
    iVar2 = iVar2 + 4;
  } while (iVar3 < 4);
  return;
}

