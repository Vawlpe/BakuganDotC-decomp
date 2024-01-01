#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0889cb00(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_0881a358(iVar2,2);
    iVar3 = iVar2;
  }
  uVar1 = FUN_089be054(DAT_08ac520c,param_1);
  FUN_0881a484(iVar3,uVar1,8,0,0);
  *(undefined *)(iVar3 + 0x104) = 0;
  *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) | 1;
  return iVar3;
}

