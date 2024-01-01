#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a28ea0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = -0x7fbdfeff;
  if ((DAT_08b00110 == 0) &&
     (iVar1 = zz___sceSasInit(&DAT_08b02c80,param_1,0x20,0,0xac44), iVar1 == 0)) {
    iVar1 = 0;
    do {
      if (((DAT_08b00110 != 0) &&
          (zz___sceSasSetPitch(&DAT_08b02c80,iVar1,0x1000), DAT_08b00110 != 0)) &&
         (zz___sceSasSetSimpleADSR(&DAT_08b02c80,iVar1,0xf,0x5fc0), DAT_08b00110 != 0)) {
        zz___sceSasSetVolume(&DAT_08b02c80,iVar1,0,0,0,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
    DAT_08b00110 = 1;
    iVar1 = 0;
  }
  return iVar1;
}

