#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089be538(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_089be500(param_1);
    if (0 < iVar1) {
      FUN_089be61c(param_1 + 4,param_2,iVar1);
    }
  }
  return iVar1;
}

