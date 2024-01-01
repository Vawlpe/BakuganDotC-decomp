#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a24c1c(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    if (((param_3 & 0x21) != 0) && (FUN_08a129e0(param_2,param_4), 0 < param_2)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_08a24bfc(0,param_1,param_3,param_4);
        param_1 = param_1 + 0x30;
      } while (param_2 != iVar1);
    }
    return 1;
  }
  return 0;
}

