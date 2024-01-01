#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c24cc(void)

{
  undefined4 uVar1;
  int *ptr;
  int iVar2;
  int iVar3;
  
  if (DAT_08ac5278 == (int *)0x0) {
    FUN_089c1c5c(0x1c0);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    ptr = (int *)FUN_089d7d74(8,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5278 = ptr;
    memset_jak((undefined *)ptr,0,8);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x14,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089d74cc(iVar2,0x40,0x40,1);
      iVar3 = iVar2;
    }
    DAT_08ac5278[1] = iVar3;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x30,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089d90ac(iVar2);
      *(undefined **)(iVar2 + 0x20) = &DAT_08af6fd8;
      iVar3 = iVar2;
    }
    *DAT_08ac5278 = iVar3;
  }
  return;
}

