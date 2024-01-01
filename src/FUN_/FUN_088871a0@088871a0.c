#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088871a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_08887124(param_1,param_2,param_1,param_2);
  iVar2 = FUN_08887028(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 != -1)) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x18 < iVar2) {
      iVar2 = 0x18;
    }
    iVar3 = iVar1 + iVar2 * 0xe;
  }
  return iVar3;
}

