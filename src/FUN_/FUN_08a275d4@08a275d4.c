#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08a275d4(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (0x11 < param_2)) {
    bVar1 = (*(byte *)(param_1 + 2) & 0xfffffff7) - 1 < 2;
  }
  return bVar1;
}

