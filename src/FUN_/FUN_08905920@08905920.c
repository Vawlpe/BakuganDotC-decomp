#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08905920(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x1c4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08904edc(iVar2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  FUN_089051b4(iVar3,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x5c) = DAT_08ac5c90;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}

