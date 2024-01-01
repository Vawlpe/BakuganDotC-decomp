#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c45b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  if (DAT_08ac5638 == (undefined *)0x0) {
    local_28 = param_2;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar2 = (undefined *)FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5638 = puVar2;
    memset_jak(puVar2,0,0x10);
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
    iVar4 = local_2c;
    if (iVar3 != 0) {
      FUN_089c4894(iVar3,local_28);
      iVar4 = iVar3;
    }
    puVar2 = DAT_08ac5638;
    *(int *)(DAT_08ac5638 + param_1 * 4) = iVar4;
    *(int *)(puVar2 + 0xc) = *(int *)(puVar2 + 0xc) + 1;
    *(int *)(iVar4 + 0x10) = param_1;
    iVar4 = FUN_089c2b10(param_1);
    if (iVar4 != 0) {
      iVar4 = FUN_089c2b48(param_1);
      *(undefined *)(iVar4 + 0xc6) = 0;
    }
    memset_jak((undefined *)&local_30,0,4);
    local_30 = param_1;
    _WIP_Init__LoopThingIdk_Step(param_1 + 6,&local_30,4);
  }
  return;
}

