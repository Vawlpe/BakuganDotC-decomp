#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a23d80(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80440010;
  if (param_1 < 4) {
    uVar1 = 0x8044000a;
    if (param_2 < 0x8001) {
      uVar1 = 0x8044000a;
      if (param_3 < 0x8001) {
        uVar1 = zz_sceAudioOutputPannedBlocking((&DAT_08b000bc)[param_1]);
      }
    }
  }
  return uVar1;
}

