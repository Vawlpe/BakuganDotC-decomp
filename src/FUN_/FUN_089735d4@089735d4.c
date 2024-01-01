#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089735d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    iVar1 = iVar1 + 1;
    *(undefined *)(iVar2 + 0x500) = 0;
    iVar2 = param_1 + iVar1;
  } while (iVar1 < 2);
  *(undefined *)(param_1 + 0x503) = 0;
  *(undefined *)(param_1 + 0x752) = 0;
  *(undefined *)(param_1 + 0x753) = 0;
  *(undefined *)(param_1 + 0x502) = 0;
  FUN_089734c8(param_1);
  *(undefined4 *)(param_1 + 0x51c) = 0;
  *(undefined *)(param_1 + 0x520) = 0;
  *(undefined *)(param_1 + 0x521) = 0;
  memset_jak(param_1 + 0x754,0,0xc);
  return;
}

