#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ebb6c(void)

{
  undefined4 uVar1;
  int *ptr;
  int iVar2;
  int iVar3;
  
  if (DAT_08ac5d90 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    ptr = (int *)FUN_089d7d74(4,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5d90 = ptr;
    memset_jak((undefined *)ptr,0,4);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x80,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089ebd28(iVar2);
      iVar3 = iVar2;
    }
    *DAT_08ac5d90 = iVar3;
  }
  iVar3 = FUN_089eac08();
  if (iVar3 == 0) {
    FUN_089eaa70();
  }
  return *DAT_08ac5d90;
}

