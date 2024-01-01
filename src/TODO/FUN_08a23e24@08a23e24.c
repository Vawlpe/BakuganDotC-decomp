#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a23e24(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80440010;
  if (param_1 < 4) {
    uVar1 = zz_sceAudioGetChannelRestLength((&DAT_08b000bc)[param_1]);
  }
  return uVar1;
}

