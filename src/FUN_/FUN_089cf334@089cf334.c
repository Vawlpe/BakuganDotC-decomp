#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cf334(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  
  if (DAT_08ac5938 == (undefined4 *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar2 = (undefined4 *)FUN_089d7d74(0x94,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5938 = puVar2;
    memset_jak(puVar2,0,0x94);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x38,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar3 != 0) {
      FUN_089bb5dc(iVar3,"CONetChara SOLocal",2);
      iVar5 = iVar3;
    }
    DAT_08ac5938[1] = iVar5;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar4 = (undefined *)FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    puVar6 = (undefined *)0x0;
    if (puVar4 != (undefined *)0x0) {
      FUN_08a30f70(puVar4,0x10);
      puVar6 = puVar4;
    }
    puVar2 = DAT_08ac5938;
    *DAT_08ac5938 = puVar6;
    *puVar6 = 1;
    FUN_089bb728(puVar2[1]);
    if (DAT_08ac5940 == 0) {
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar5 = FUN_089d7d74(0x3c0,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      memset_jak(iVar5,0,0x3c0);
      DAT_08ac5940 = iVar5;
    }
    FUN_089bb790(DAT_08ac5938[1]);
  }
  FUN_089d28d0();
  DAT_08ac593c = 1;
  return;
}

