#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5600(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *ptr;
  int iVar3;
  
  *(undefined4 *)(DAT_08ac5934 + 0x1c) = 1;
  if (DAT_08ac5b7c == (undefined *)0x0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    ptr = (undefined *)FUN_089d7d74(4,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    DAT_08ac5b7c = ptr;
    memset_jak(ptr,0,4);
  }
  iVar1 = DAT_08ac5b80;
  if (DAT_08ac5b80 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x58,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_089d6324(iVar3);
      iVar1 = iVar3;
    }
  }
  DAT_08ac5b80 = iVar1;
  return;
}

