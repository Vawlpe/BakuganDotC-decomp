#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1ef80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_08a1e954(DAT_08afcf78,param_1,param_2,param_3,param_4);
  puVar3 = &DAT_08afcfa0;
  iVar4 = 4;
  do {
    uVar2 = DAT_08afcf94;
    uVar1 = DAT_08afcf90;
    iVar4 = iVar4 + -1;
    puVar3[0x27] = DAT_08afcf78;
    puVar3[0x28] = uVar1;
    puVar3[0x29] = uVar2;
    puVar3 = puVar3 + 0x3f;
  } while (-1 < iVar4);
  return;
}

