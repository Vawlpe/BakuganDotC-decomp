#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890a424(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined param_7)

{
  int iVar1;
  
  if ((DAT_08ac0e60 != 0) && (iVar1 = param_6 * 4, *(int *)(DAT_08ac0e60 + iVar1) == 0)) {
    FUN_0890a088(param_4,param_5,param_6);
    *(undefined *)(*(int *)(DAT_08ac0e60 + iVar1) + 0x9c) = param_7;
    *(undefined4 *)(*(int *)(DAT_08ac0e60 + iVar1) + 0x98) = param_1;
    FUN_0890a18c(param_2,param_3,param_4,param_6);
  }
  return;
}

