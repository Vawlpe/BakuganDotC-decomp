#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2d338(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar5 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar5 = (undefined4 *)FUN_089d76ac(*(int *)(param_1 + 0xc));
  }
  if (puVar5 == (undefined4 *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar2 = (undefined4 *)FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 2) = 0;
      puVar5 = puVar2;
    }
  }
  else {
    *puVar5 = 0;
    *(undefined *)(puVar5 + 2) = 0;
  }
  iVar3 = -1;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[3] = param_2;
    puVar5[1] = param_3;
    puVar2 = *(undefined4 **)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar2;
      iVar4 = 0;
      puVar7 = puVar2;
      if (0 < iVar3) {
        do {
          puVar2 = puVar6;
          puVar6 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            *puVar7 = puVar5;
            goto LAB_08a2d474;
          }
          if (param_3 < (int)puVar2[1]) {
            *puVar7 = puVar5;
            goto LAB_08a2d474;
          }
          puVar6 = (undefined4 *)*puVar2;
          iVar4 = iVar4 + 1;
          puVar7 = puVar2;
        } while (iVar4 < iVar3);
      }
      *puVar2 = puVar5;
LAB_08a2d474:
      *puVar5 = puVar6;
      iVar3 = *(int *)(param_1 + 4);
    }
    iVar3 = iVar3 + 1;
    *(int *)(param_1 + 4) = iVar3;
  }
  return iVar3;
}

