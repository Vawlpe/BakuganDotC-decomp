#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895ad80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if ('\0' < *(char *)(param_1 + 0x4cda)) {
    do {
      uVar1 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar1,iVar2 + 3,(int)*(char *)(param_1 + iVar2 + 0x4cdd));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(char *)(param_1 + 0x4cda));
  }
  return;
}

