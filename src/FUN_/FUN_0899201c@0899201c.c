#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0899201c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089f3aa8(iVar2);
    iVar3 = iVar2;
  }
  FUN_089f5194(param_2,iVar3);
  FUN_089f3dd4(param_1,iVar3);
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
  return iVar3;
}

