#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a293a4(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = -0x7fbdff00;
  if (DAT_08b00110 != 0) {
    if (DAT_08b00110 == 1) {
      iVar2 = zz___sceSasGetOutputmode(&DAT_08b02c80);
    }
    bVar1 = iVar2 != 1;
    iVar2 = -0x7fbdffdc;
    if (bVar1) {
      iVar2 = zz___sceSasRevType(&DAT_08b02c80,param_1);
    }
  }
  return iVar2;
}

