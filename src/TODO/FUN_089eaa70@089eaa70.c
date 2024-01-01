#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089eaa70(void)

{
  undefined4 uVar1;
  int *ptr;
  int iVar2;
  int iVar3;
  
  if (DAT_08ac5d80 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    ptr = (int *)FUN_089d7d74(4,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5d80 = ptr;
    memset_jak((undefined *)ptr,0,4);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089eaf90(iVar2);
      iVar3 = iVar2;
    }
    *DAT_08ac5d80 = iVar3;
  }
  iVar3 = FUN_089eb750();
  if (iVar3 == 0) {
    FUN_089bf6e8(0x2742,0x32);
  }
  return *DAT_08ac5d80;
}

