#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08870274(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  memset_jak(param_2,0,0x15);
  iVar1 = 0;
  do {
    iVar2 = *param_1;
    if (iVar2 == -1) {
      return uVar4;
    }
    if (((iVar2 < 0x15) && (iVar2 != 0)) &&
       (bVar3 = *(byte *)(param_2 + iVar2) + 1, *(byte *)(param_2 + iVar2) = bVar3, 1 < bVar3)) {
      uVar4 = 1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 4);
  return uVar4;
}

