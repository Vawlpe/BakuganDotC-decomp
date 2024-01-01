#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c6b6c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _DONE_Get_DAT_08AC5874();
  *(undefined *)(iVar1 + 0x1c) = 1;
  *(undefined *)(iVar1 + 0x1d) = 0;
  iVar2 = FUN_089c2b10(0);
  if (iVar2 != 0) {
    uVar3 = FUN_089c2b48(0);
    FUN_089c3888(uVar3);
  }
  iVar2 = FUN_089c2b10(1);
  if (iVar2 != 0) {
    uVar3 = FUN_089c2b48(1);
    FUN_089c36b8(uVar3,0,0);
    uVar3 = FUN_089c2b48(1);
    FUN_089c3888(uVar3);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}

