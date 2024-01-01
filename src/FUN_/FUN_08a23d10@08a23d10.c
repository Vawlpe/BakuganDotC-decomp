#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a23d10(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80440010;
  if (param_1 < 4) {
    uVar1 = 0x80440011;
    if (param_2 - 0x40 < 0xff81) {
      uVar1 = 0x80440011;
      if ((param_2 & 0x3f) == 0) {
        uVar1 = zz_sceAudioSetChannelDataLen((&DAT_08b000bc)[param_1]);
      }
    }
  }
  return uVar1;
}

