#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint ** FUN_08a0fe94(int param_1,uint **param_2)

{
  uint **ppuVar1;
  uint **ppuVar2;
  
  if (param_2 != (uint **)0x0) {
    param_1 = param_1 * 0x24;
    ppuVar2 = *(uint ***)(&DAT_08af1268 + param_1);
    if ((ppuVar2 == (uint **)0x0) || (ppuVar2 <= param_2)) {
      ppuVar1 = *(uint ***)(&DAT_08af126c + param_1);
    }
    else {
      if (*ppuVar2 <= param_2) {
        return ppuVar2;
      }
      ppuVar1 = *(uint ***)(&DAT_08af126c + param_1);
    }
    if ((ppuVar1 == (uint **)0x0) || (ppuVar1 <= param_2)) {
      ppuVar1 = *(uint ***)(&DAT_08af1274 + param_1);
    }
    else {
      if (*ppuVar1 <= param_2) {
        *(uint ***)(&DAT_08af126c + param_1) = ppuVar2;
        *(uint ***)(&DAT_08af1268 + param_1) = ppuVar1;
        return ppuVar1;
      }
      ppuVar1 = *(uint ***)(&DAT_08af1274 + param_1);
    }
    if ((ppuVar1 <= param_2) && (param_2 < *(uint ***)(&DAT_08af1278 + param_1))) {
      ppuVar1 = *(uint ***)(&DAT_08af1264 + param_1);
      while (ppuVar1 != (uint **)0x0) {
        if (param_2 < ppuVar1) {
          if (*ppuVar1 <= param_2) {
            *(uint ***)(&DAT_08af126c + param_1) = ppuVar2;
            *(uint ***)(&DAT_08af1268 + param_1) = ppuVar1;
            return ppuVar1;
          }
          ppuVar1 = (uint **)ppuVar1[2];
        }
        else {
          ppuVar1 = (uint **)ppuVar1[2];
        }
      }
    }
  }
  return (uint **)0x0;
}

