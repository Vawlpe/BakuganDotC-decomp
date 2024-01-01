#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d6848(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_08ac5b8c;
  uVar2 = 0;
  if (DAT_08ac5b88 == '\0') {
    DAT_08ac5b8c = FUN_089d5554(DAT_08ac5b8c);
    if (DAT_08ac5b8c < 0) {
      DAT_08ac5b88 = '\x01';
      FUN_089d5600();
    }
    else if (DAT_08ac5b8c == iVar1) {
      DAT_08ac5b90 = DAT_08ac5b90 + 1;
    }
    else {
      DAT_08ac5b90 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

