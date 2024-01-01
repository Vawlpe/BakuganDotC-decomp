#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08887278(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_08887124();
  if ((iVar1 != 0) && (param_2 != -1)) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (0x18 < param_2) {
      param_2 = 0x18;
    }
    iVar2 = iVar1 + param_2 * 0xe;
  }
  return iVar2;
}

