#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0897b2b4(int param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + (param_2 & 0xff) * 0x28 + 0x1140);
  if ((bVar1 != 0) && (bVar1 < 3)) {
    return 0;
  }
  return 0xbf47ae14;
}

