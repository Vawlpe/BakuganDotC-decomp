#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089734c8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  char local_30 [8];
  undefined local_28 [20];
  
  pcVar5 = local_30;
  pcVar6 = local_30;
  local_30[0] = '\x01';
  local_30[1] = 1;
  local_30[2] = 1;
  local_30[3] = 1;
  local_30[4] = 1;
  memcpy_jak(local_28,&DAT_08ac34e0,0x14);
  *(undefined *)(param_1 + 0x50c) = 0;
  uVar4 = (uint)*(byte *)(param_1 + 0x50c);
  uVar7 = 0;
  do {
    if (*pcVar6 != '\0') {
      uVar4 = uVar4 | 1 << (uVar7 & 0x1f) & 0xffU;
    }
    uVar2 = uVar7 + 1;
    pcVar6 = local_30 + uVar7 + 1;
    uVar7 = uVar2;
  } while ((int)uVar2 < 5);
  *(char *)(param_1 + 0x50c) = (char)uVar4;
  *(undefined *)(param_1 + 0x511) = 0;
  *(undefined *)(param_1 + 0x512) = 0;
  *(undefined *)(param_1 + 0x513) = 0;
  iVar3 = 0;
  do {
    iVar8 = param_1 + iVar3;
    uVar4 = 0;
    uVar7 = (uint)*(byte *)(iVar8 + 0x511);
    puVar9 = pcVar5;
    do {
      if (puVar9[8] != '\0') {
        uVar7 = uVar7 | 1 << (uVar4 & 0x1f) & 0xffU;
      }
      uVar4 = uVar4 + 1;
      puVar9 = pcVar5 + uVar4;
    } while ((int)uVar4 < 3);
    iVar3 = iVar3 + 1;
    *(char *)(iVar8 + 0x511) = (char)uVar7;
    pcVar5 = pcVar5 + 4;
  } while (iVar3 < 5);
  *(undefined *)(param_1 + 0x760) = 0;
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  iVar3 = FUN_0880d0ac(uVar1,0x1d);
  if (iVar3 == 500) {
    *(undefined *)(param_1 + 0x760) = 1;
  }
  return;
}

