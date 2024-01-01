#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ea298(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x2f);
  if (iVar2 + -1 == 0) {
    FUN_088ea238(param_1);
  }
  else {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,0x2f,iVar2 + -1);
    iVar2 = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 % 3 == 0) {
      *(bool *)(param_1 + 8) = *(char *)(param_1 + 8) == '\0';
      FUN_088e9fd4(param_1,*(undefined *)(param_1 + 8));
      FUN_088ea0b0(param_1,*(undefined *)(param_1 + 8));
    }
  }
  return;
}

