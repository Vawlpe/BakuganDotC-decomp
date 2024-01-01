#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c45b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  if (DAT_08ac5638 == 0) {
    local_28 = param_2;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5638 = iVar2;
    memset_jak(iVar2,0,0x10);
    param_2 = local_28;
  }
  if (*(int *)(DAT_08ac5638 + param_1 * 4) == 0) {
    local_2c = 0;
    local_28 = param_2;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0xec,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar2 = local_2c;
    if (iVar3 != 0) {
      FUN_089c4894(iVar3,local_28);
      iVar2 = iVar3;
    }
    iVar3 = DAT_08ac5638;
    *(int *)(DAT_08ac5638 + param_1 * 4) = iVar2;
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
    *(int *)(iVar2 + 0x10) = param_1;
    iVar2 = FUN_089c2b10(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_089c2b48(param_1);
      *(undefined *)(iVar2 + 0xc6) = 0;
    }
    memset_jak(&local_30,0,4);
    local_30 = param_1;
    FUN_089bbcbc(param_1 + 6,&local_30,4);
  }
  return;
}

