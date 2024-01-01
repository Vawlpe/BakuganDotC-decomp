#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a24e90(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar1 = FUN_08a247b8();
    if ((iVar1 != 0) && (FUN_08a129b4(param_2,param_4), 0 < param_2)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_08a24dc4(0,param_1,param_3,param_4);
        param_1 = param_1 + 0x40;
      } while (param_2 != iVar1);
    }
    return 1;
  }
  return 0;
}

