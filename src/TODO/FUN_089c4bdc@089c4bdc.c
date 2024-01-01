#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c4bdc(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_089bb728(*param_1);
  if ((-1 < param_2) && (param_3 != 0)) {
    param_1[0xe] = param_2;
    param_1[5] = param_3;
    param_1[6] = param_4;
    FUN_089c4f6c(param_1,1);
    param_1[0x3a] = 0xffffffff;
    iVar2 = 1;
  }
  FUN_089bb790(*param_1);
  if ((iVar2 != 0) && (iVar1 = FUN_089bbfdc(param_1[4] + 6), iVar1 != 0)) {
    FUN_089bbf78(param_1[4] + 6);
  }
  return iVar2;
}

