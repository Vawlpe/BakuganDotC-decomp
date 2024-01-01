#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2df9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_089d76ac();
  }
  if (iVar3 == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_08a2e6d8(iVar2);
      iVar3 = iVar2;
    }
  }
  else {
    FUN_08a2e6d8(iVar3);
  }
  FUN_08a2e744(iVar3,param_2);
  FUN_08a2e75c(iVar3,param_3);
  FUN_08a2e09c(param_1,*(undefined4 *)(param_1 + 4),iVar3);
  return iVar3;
}

