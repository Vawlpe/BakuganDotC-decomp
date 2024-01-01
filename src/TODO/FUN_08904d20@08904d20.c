#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08904d20(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = 0;
  puVar5 = param_2 + 1;
  if (*param_2 != 0) {
    do {
      uVar3 = *puVar5;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar2 = FUN_089d7d74(0x2c,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      iVar4 = 0;
      if (iVar2 != 0) {
        FUN_08904c50(iVar2,(int)(param_2 + 1) + uVar3);
        iVar4 = iVar2;
      }
      FUN_089d8984(iVar4,param_1);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < *param_2);
  }
  iVar4 = *param_1;
  if (iVar4 != 0) {
    uVar6 = *(uint *)(iVar4 + 0x1c);
    while( true ) {
      if (uVar6 < 5) {
        iVar4 = *(int *)(iVar4 + 4);
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
      }
      if (iVar4 == 0) break;
      uVar6 = *(uint *)(iVar4 + 0x1c);
    }
  }
  return;
}

