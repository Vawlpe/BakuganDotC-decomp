#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cf22c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x2c) = 0x154000;
  *(undefined4 *)(param_1 + 0x30) = 0x100;
  iVar1 = zz_sceGeEdramGetAddr();
  *(int *)(param_1 + 0x34) = iVar1 + 0x154000;
  *(int *)(param_1 + 0x38) = iVar1 + 0x174000;
  *(int *)(param_1 + 0x40) = iVar1 + 0x174000;
  iVar1 = zz_sceGeEdramGetAddr();
  *(int *)(param_1 + 0x3c) = iVar1 + 0x200000;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_089d6e7c(*(int *)(param_1 + 0x48),3);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x1c,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar1 = 0;
  if (iVar3 != 0) {
    FUN_089d6d64(iVar3,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38),
                 0x1000,0x10,1);
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x48) = iVar1;
  *(undefined *)(iVar1 + 0x19) = 0;
  return;
}

