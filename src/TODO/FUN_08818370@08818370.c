#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08818370(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + *param_2);
  if (uVar1 == 0) {
    return -1;
  }
  *param_2 = *param_2 + 1;
  if (0xee < uVar1) {
    return *(int *)(&DAT_08a39e0c + uVar1 * 4);
  }
  if (199 < uVar1) {
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    uVar1 = (uVar1 * 0x100 + (uint)*(byte *)(param_1 + iVar2)) - 51000;
  }
  return uVar1 - 1;
}

