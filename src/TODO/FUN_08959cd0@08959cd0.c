#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08959cd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      FUN_089583f4(param_1);
      FUN_08958628(param_1);
      FUN_08958828(param_1);
      FUN_08958c00(param_1);
      FUN_08958dd8(param_1);
      FUN_0895918c(param_1);
      FUN_089594a0(param_1);
      FUN_08959ab8(param_1);
      FUN_08959bb0(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
  }
  else if (iVar2 < 2) {
    uVar1 = FUN_089edb80();
    iVar2 = FUN_089edf70(uVar1);
    if (iVar2 == 0) {
      return;
    }
    FUN_0890a424(0x43960000,0,0,param_1,"main_start.fab",1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x4f7c) = 0;
  iVar2 = FUN_0880d354();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 5;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar2 = FUN_0881b22c();
    if (iVar2 != 0) {
      uVar1 = _DONE_GetPtr_DAT_08AB0300();
      FUN_0881b634(uVar1,0x1000000);
      uVar1 = _DONE_GetPtr_DAT_08AB0300();
      FUN_0881b620(uVar1,0x2000000);
      FUN_089cff94();
    }
  }
  return;
}

