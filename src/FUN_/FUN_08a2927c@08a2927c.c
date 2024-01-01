#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2927c(undefined4 param_1,undefined4 param_2)

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
      iVar2 = zz___sceSasRevVON(&DAT_08b02c80,param_1,param_2);
    }
  }
  return iVar2;
}

