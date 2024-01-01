#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_08a2e7a4(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar5 = 0;
  }
  else {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x14,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar2 != 0) {
      FUN_089d74cc(iVar2,0x10,param_2,1);
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar4 = (undefined4 *)0x0;
  if (iVar5 != 0) {
    puVar4 = (undefined4 *)FUN_089d76ac(iVar5);
  }
  if (puVar4 == (undefined4 *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar3 = (undefined4 *)FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    puVar4 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      *(undefined *)(puVar3 + 2) = 0;
      puVar4 = puVar3;
    }
  }
  else {
    *puVar4 = 0;
    *(undefined *)(puVar4 + 2) = 0;
  }
  *(undefined4 **)(param_1 + 8) = puVar4;
  return param_1;
}

