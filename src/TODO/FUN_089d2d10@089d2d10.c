#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d2d10(void)

{
  undefined4 uVar1;
  int *ptr;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (int *)FUN_089d7d74(0x28,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac5978 = ptr;
  memset_jak((undefined *)ptr,0,0x28);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089d2e98(iVar2);
    iVar3 = iVar2;
  }
  *DAT_08ac5978 = iVar3;
  return;
}

