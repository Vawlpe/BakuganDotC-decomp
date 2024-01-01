#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1ea30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_08afd48c != (code *)0x0) {
    (*DAT_08afd48c)();
  }
  uVar2 = DAT_08afcf84;
  iVar1 = DAT_08afcf80;
  DAT_08afcf84 = DAT_08afcf80;
  DAT_08afcf80 = uVar2;
  if (DAT_08afcf5c == 1) {
    zz_sceDisplaySetFrameBuf(DAT_08afcf68 + iVar1,DAT_08afcf7c,DAT_08afcf78,0);
  }
  if (DAT_08afd490 != (code *)0x0) {
    (*DAT_08afd490)();
  }
  if (DAT_08afd498 != (code *)0x0) {
    (*DAT_08afd498)(DAT_08afcf78,DAT_08afcf80,DAT_08afcf7c);
  }
  return DAT_08afcf80;
}

