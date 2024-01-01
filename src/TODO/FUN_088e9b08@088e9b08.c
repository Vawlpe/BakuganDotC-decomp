#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e9b08(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar7 = 0;
  puVar6 = &DAT_08a98ec0;
  puVar5 = param_1;
  do {
    iVar4 = FUN_088243d8(*param_1,*puVar6,param_1[1]);
    puVar5[3] = iVar4;
    uVar3 = DAT_08b0093c;
    uVar2 = DAT_08b00938;
    uVar1 = DAT_08b00934;
    *(undefined4 *)(iVar4 + 0x90) = DAT_08b00930;
    *(undefined4 *)(iVar4 + 0x94) = uVar1;
    *(undefined4 *)(iVar4 + 0x98) = uVar2;
    *(undefined4 *)(iVar4 + 0x9c) = uVar3;
    if (*(int *)(iVar4 + 0x204) != 0) {
      *(undefined *)(*(int *)(iVar4 + 0x204) + 0x13c) = 0;
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar7 < 6);
  *(undefined *)(param_1 + 2) = 1;
  return;
}

