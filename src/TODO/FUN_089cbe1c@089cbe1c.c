#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cbe1c(void)

{
  undefined4 uVar1;
  int *ptr;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (int *)FUN_089d7d74(0x18,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac58e0 = ptr;
  memset_jak((undefined *)ptr,0,0x18);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08a3047c(iVar2,8);
    iVar3 = iVar2;
  }
  DAT_08ac58e0[1] = iVar3;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089cc090(iVar2);
    iVar3 = iVar2;
  }
  *DAT_08ac58e0 = iVar3;
  return;
}

