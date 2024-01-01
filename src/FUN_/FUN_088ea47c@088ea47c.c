#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088ea47c(int *param_1,short param_2)

{
  int iVar1;
  
  if (param_2 == 0x14) {
    iVar1 = FUN_088b9450(0x3c23d70a,0x58,0,0);
    *param_1 = iVar1;
    FUN_088b7fd8(0x3e4ccccd,iVar1,2,1,0);
    iVar1 = *param_1;
  }
  else {
    iVar1 = FUN_088b9450(0x3c23d70a,0x58,0,0);
    *param_1 = iVar1;
  }
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

