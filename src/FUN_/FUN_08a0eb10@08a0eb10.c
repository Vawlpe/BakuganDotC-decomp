#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0eb10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_60;
  uint local_5c;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = param_1;
  local_2c = param_2;
  local_20 = param_3;
  local_1c = param_4;
  FUN_08a0f3cc(&local_30,&local_70);
  FUN_08a0f3cc(&local_20,&local_50);
  puVar2 = &local_70;
  uVar5 = local_60;
  uVar6 = local_5c;
  if ((1 < local_70) && (puVar2 = &local_50, 1 < local_50)) {
    local_6c = local_6c ^ local_4c;
    if ((local_70 == 4) || (local_70 == 2)) {
      puVar2 = (uint *)&DAT_08aa5000;
      if (local_70 != local_50) {
        puVar2 = &local_70;
      }
    }
    else if (local_50 == 4) {
      local_60 = 0;
      local_5c = 0;
      local_68 = 0;
      puVar2 = &local_70;
      uVar5 = local_60;
      uVar6 = local_5c;
    }
    else if (local_50 == 2) {
      local_70 = 4;
      puVar2 = &local_70;
    }
    else {
      bVar1 = local_5c < local_3c;
      local_68 = local_68 - local_48;
      if ((bVar1) || ((local_3c == local_5c && (local_60 < local_40)))) {
        local_68 = local_68 + -1;
        local_5c = local_5c << 1 | local_60 >> 0x1f;
        local_60 = local_60 << 1;
        bVar1 = local_5c < local_3c;
      }
      uVar4 = 0x10000000;
      uVar3 = 0;
      uVar5 = 0;
      uVar6 = 0;
      do {
        if ((!bVar1) && ((local_3c != local_5c || (local_40 <= local_60)))) {
          bVar1 = local_60 < local_40;
          local_60 = local_60 - local_40;
          local_5c = (local_5c - local_3c) - (uint)bVar1;
          uVar5 = uVar5 | uVar3;
          uVar6 = uVar6 | uVar4;
        }
        uVar3 = uVar3 >> 1 | uVar4 << 0x1f;
        uVar4 = uVar4 >> 1;
        local_5c = local_5c << 1 | local_60 >> 0x1f;
        local_60 = local_60 << 1;
        bVar1 = local_5c < local_3c;
      } while ((uVar3 | uVar4) != 0);
      puVar2 = &local_70;
      if (((uVar5 & 0xff) == 0x80) &&
         (((uVar5 & 0x100) != 0 || (puVar2 = &local_70, (local_60 | local_5c) != 0)))) {
        puVar2 = &local_70;
        uVar5 = uVar5 + 0x80;
        uVar6 = uVar6 + (uVar5 + 0x80 < 0x80);
      }
    }
  }
  local_5c = uVar6;
  local_60 = uVar5;
  FUN_08a0f12c(puVar2);
  return;
}

