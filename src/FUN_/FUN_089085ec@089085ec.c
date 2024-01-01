#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089085ec(undefined4 param_1,uint *param_2)

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
      iVar2 = FUN_089d7d74(0x40,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      iVar4 = 0;
      if (iVar2 != 0) {
        FUN_0890837c(iVar2,(int)(param_2 + 1) + uVar3);
        iVar4 = iVar2;
      }
      FUN_089d8984(iVar4,param_1);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < *param_2);
  }
  return;
}

