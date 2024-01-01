#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a2063c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0x80450001;
  if (DAT_08af13ac != -1) {
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    uVar3 = 0;
    uVar1 = FUN_08a29018();
    uVar4 = 0;
    do {
      uVar2 = FUN_08a22dbc(uVar4,uVar1 & 1,0);
      if ((uVar2 >> 0x1f & (uint)(uVar2 != 0x80450012)) != 0) {
        uVar3 = uVar2;
      }
      uVar2 = FUN_08a22c64(uVar4,uVar1 & 1);
      uVar4 = uVar4 + 1;
      if ((uVar2 >> 0x1f & (uint)(uVar2 != 0x80450012)) != 0) {
        uVar3 = uVar2;
      }
      uVar1 = uVar1 >> 1;
    } while (uVar4 < 0x20);
    zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  }
  return uVar3;
}

