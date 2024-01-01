#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a318bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_089d76ac(*(int *)(param_1 + 0x10));
  }
  if (iVar1 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_08a32104(iVar3);
      iVar1 = iVar3;
    }
  }
  else {
    FUN_08a32104(iVar1);
  }
  FUN_08a32170(iVar1,param_2);
  FUN_08a32188(iVar1,param_3);
  FUN_08a31a00(param_1,*(undefined4 *)(param_1 + 4),iVar1);
  return iVar1;
}

