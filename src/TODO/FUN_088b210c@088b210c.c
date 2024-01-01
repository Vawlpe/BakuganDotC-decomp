#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b210c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (DAT_08abd620 == (undefined4 *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar2 = (undefined4 *)FUN_089d7d74(0xc,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08abd620 = puVar2;
    puVar2[1] = 0;
    *puVar2 = 0;
    DAT_08abd620[2] = 0;
  }
  DAT_08b00b90 = 0;
  FUN_088a8f18();
  FUN_088a83b0();
  FUN_088b3438();
  FUN_088a54a8();
  return;
}

