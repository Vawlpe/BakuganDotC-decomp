#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880d308(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0x8ab0000;
  DAT_08aac9e8 = 0;
  iVar1 = FUN_0880d2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_0880cc48();
    uVar3 = FUN_0880d0ac(uVar2,0);
    if ((uVar3 & 1) != 0) {
      *(undefined *)(iVar4 + -0x3618) = 1;
    }
  }
  return;
}

