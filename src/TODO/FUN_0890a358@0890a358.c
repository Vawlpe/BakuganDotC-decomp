#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890a358(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,int param_6,undefined param_7)

{
  int iVar1;
  
  if ((*(int *)(param_4 + 0x50) != 0) &&
     (iVar1 = param_6 * 4, *(int *)(*(int *)(param_4 + 0x50) + iVar1) == 0)) {
    FUN_08909e8c(param_4,param_5,param_6);
    *(undefined *)(*(int *)(*(int *)(param_4 + 0x50) + iVar1) + 0x9c) = param_7;
    *(undefined4 *)(*(int *)(*(int *)(param_4 + 0x50) + iVar1) + 0x98) = param_1;
    FUN_08909f8c(param_2,param_3,param_4,param_6);
  }
  return;
}

