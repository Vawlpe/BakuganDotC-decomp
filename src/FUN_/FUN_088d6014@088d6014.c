#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d6014(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined local_50 [64];
  char *local_10 [2];
  
  puVar3 = local_50;
  local_10[0] = "menu_itembox_Open";
  local_10[1] = "menu_itembox_Close";
  FUN_089b4c84(local_50,local_10[param_2 & 0xff]);
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    *(undefined *)(uVar1 + param_3) = *puVar3;
    puVar3 = local_50 + uVar1 + 1;
    uVar1 = uVar2;
  } while (uVar2 < 0x40);
  return;
}

