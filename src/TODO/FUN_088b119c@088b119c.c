#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b119c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0884b248();
  if (iVar1 != 0) {
    iVar1 = FUN_0884b268();
    if ((*(char *)(iVar1 + 0x558) != '\0') && (iVar1 = DONE_NotZero_DAT_08AC5258(), iVar1 != 0)) {
      uVar2 = DONE_Get_DAT_08AC5258();
      FUN_089c00c4(uVar2,param_2,*(int *)(param_1 + 0x130) + 0xb0,0,1);
    }
  }
  return;
}

