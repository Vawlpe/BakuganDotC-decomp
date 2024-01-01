#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fe2bc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar3 = FUN_089d76ac(*(int *)(param_1 + 0x30));
  }
  if (iVar3 == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c((param_4 & 1) != 0);
    iVar2 = FUN_089d7d74(0x10b0,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089fdc84(iVar2,param_2,param_3,param_4,param_5);
      iVar3 = iVar2;
    }
  }
  else {
    FUN_089fdc84(iVar3,param_2,param_3,param_4,param_5);
  }
  return iVar3;
}

