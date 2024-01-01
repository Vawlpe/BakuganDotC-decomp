#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a3ff4(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined local_70 [64];
  char *local_30 [4];
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  puVar3 = local_70;
  local_30[0] = "menu_itembox_Open";
  local_30[1] = "menu_itembox_Close";
  local_30[2] = "menu_itembox_rotation_L1";
  local_30[3] = "menu_itembox_rotation_L2";
  local_20 = "menu_itembox_rotation_L3";
  local_1c = "menu_itembox_rotation_R1";
  local_18 = "menu_itembox_rotation_R2";
  local_14 = "menu_itembox_rotation_R3";
  FUN_089b4c84(local_70,local_30[param_1 & 0xff]);
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    *(undefined *)(uVar1 + param_2) = *puVar3;
    puVar3 = local_70 + uVar1 + 1;
    uVar1 = uVar2;
  } while (uVar2 < 0x40);
  return;
}

