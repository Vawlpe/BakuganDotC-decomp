#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880e078(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if ((0 < param_2) && (param_2 < 0x15)) {
    iVar1 = FUN_0888c220();
    iVar1 = *(int *)(&DAT_08a342a0 + iVar1 * 4) + 3;
  }
  return iVar1;
}

