#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0888de58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xa30,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_0888c408(iVar2);
  }
  *(int *)(iVar2 + 0x1a0) = param_1;
  FUN_08897e18(iVar2);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  FUN_0888dcf4(iVar2,uVar1);
  FUN_0888ddf0(iVar2,*(undefined4 *)(param_1 + 0x150));
  return iVar2;
}

