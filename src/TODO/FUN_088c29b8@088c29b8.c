#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_088c29b8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
  iVar6 = *piVar3;
  iVar5 = 0;
  iVar4 = 0x21;
  do {
    uVar7 = *(undefined4 *)((int)&DAT_08b00bd8 + iVar5);
    puVar8 = (undefined4 *)(iVar6 + 0x138 + iVar5);
    *puVar8 = *(undefined4 *)(&DAT_08b00bd4 + iVar5);
    puVar8[1] = uVar7;
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 8;
  } while (iVar4 != 0);
  piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
  uVar1 = DAT_08b00d24;
  uVar7 = DAT_08b00d20;
  iVar4 = *piVar3;
  *(undefined4 *)(iVar4 + 0x240) = DAT_08b00d1c;
  uVar2 = _DAT_08b00d28;
  *(undefined4 *)(iVar4 + 0x244) = uVar7;
  *(undefined4 *)(iVar4 + 0x248) = uVar1;
  *(undefined4 *)(iVar4 + 0x24c) = uVar2;
  piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
  *(undefined *)(*piVar3 + 0x461) = 1;
  FUN_088c17f8();
  return;
}

