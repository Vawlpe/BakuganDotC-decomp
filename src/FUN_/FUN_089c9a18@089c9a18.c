#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c9a18(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_08ac58c0 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(DAT_08ac58c0,0,0);
    FUN_089d866c();
    DAT_08ac58c0 = 0;
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(0);
  iVar2 = FUN_089d7d74(0xfd0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac58c0 = iVar2;
  memset_jak(iVar2,0,0xfd0);
  DAT_08ac58c4 = DAT_08ac58c0;
  DAT_08ac58c8 = DAT_08ac58c0 + 0x80;
  FUN_0880c7e0();
  FUN_0880d228();
  return;
}

