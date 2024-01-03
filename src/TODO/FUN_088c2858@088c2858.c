#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_088c2858(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  DAT_08abe906 = 0;
  FUN_088eaba8(&DAT_08b00d40);
  FUN_088eab78(&DAT_08b00bb0);
  piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
  if (*(char *)(*piVar1 + 0x461) == '\0') {
    *(undefined4 *)(DAT_08ac58c4 + 4) = 0x25;
    uVar6 = FUN_088cdc88(*(undefined4 *)(DAT_08ac58c4 + 4));
    *(undefined4 *)(DAT_08ac58c4 + 0x3c) = uVar6;
    piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
    DAT_08b00bd8._1_1_ = 'c';
    if (*(char *)(*piVar1 + 0x410) < 'd') {
      DAT_08b00bd8._1_1_ = *(char *)(*piVar1 + 0x410);
    }
  }
  else {
    piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar4 = *piVar1;
    iVar3 = 0;
    iVar2 = 0x21;
    do {
      puVar5 = (undefined4 *)(iVar4 + 0x138 + iVar3);
      uVar6 = puVar5[1];
      *(undefined4 *)(&DAT_08b00bd4 + iVar3) = *puVar5;
      *(undefined4 *)((int)&DAT_08b00bd8 + iVar3) = uVar6;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 8;
    } while (iVar2 != 0);
    piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar2 = *piVar1;
    DAT_08b00d1c = *(undefined4 *)(iVar2 + 0x240);
    DAT_08b00d20 = *(undefined4 *)(iVar2 + 0x244);
    DAT_08b00d24 = *(undefined4 *)(iVar2 + 0x248);
    _DAT_08b00d28 = *(undefined4 *)(iVar2 + 0x24c);
    piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
    if (*(char *)(*piVar1 + 0x461) == '\x02') {
      *(undefined4 *)(DAT_08ac58c4 + 4) = 0x25;
      uVar6 = FUN_088cdc88(*(undefined4 *)(DAT_08ac58c4 + 4));
      *(undefined4 *)(DAT_08ac58c4 + 0x3c) = uVar6;
    }
    else {
      *(undefined4 *)(DAT_08ac58c4 + 4) = 0x20;
      DAT_08b00dd7 = 0;
    }
  }
  return;
}

