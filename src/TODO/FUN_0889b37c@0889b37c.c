#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0889b37c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_08abd120;
  if (DAT_08abd124 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x200,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_08a02cfc(iVar3,0x20,0x10,&LAB_0889b1cc);
      iVar1 = iVar3;
    }
  }
  DAT_08abd120 = iVar1;
  DAT_08abd124 = DAT_08abd124 + 1;
  return DAT_08abd120;
}

