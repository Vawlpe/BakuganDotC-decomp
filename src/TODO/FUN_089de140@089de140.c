#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089de140(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = (param_3 & 1) != 0;
  if ((param_3 & 2) != 0) {
    bVar3 = bVar3 | 2;
  }
  iVar2 = 0;
  iVar1 = 0;
  if (*(short *)(param_2 + 0x1e) != 0) {
    do {
      FUN_08a10e1c(param_1,*(undefined4 *)(*(int *)(param_2 + 0x10) + iVar1 + 4),bVar3);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 0x1e));
  }
  return;
}

