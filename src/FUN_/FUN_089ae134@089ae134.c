#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ae134(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = FUN_0880cc48();
  uVar2 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 3000),uVar1);
  FUN_0880c85c(uVar1,uVar2);
  uVar1 = FUN_0880cc48();
  uVar2 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 0xbb9),uVar1);
  FUN_0880c97c(uVar1,uVar2);
  uVar1 = FUN_0880cc48();
  uVar2 = FUN_089ab694(param_1,1,*(undefined *)(param_1 + 0xbba),uVar1);
  FUN_0880c8f4(uVar1,uVar2);
  piVar3 = (int *)FUN_0880cc48();
  *(undefined *)(*piVar3 + 0x6ab) = *(undefined *)(param_1 + 0xbbb);
  return;
}

