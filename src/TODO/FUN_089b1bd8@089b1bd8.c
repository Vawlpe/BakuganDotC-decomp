#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b1bd8(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    uVar3 = uVar4 & 0xff;
    uVar4 = uVar4 + 1;
    *(undefined *)(*piVar1 + uVar3 + 0x84) = 0;
  } while ((int)uVar4 < 4);
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar2,0x2d,0);
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar2,0x30,0);
  return;
}

