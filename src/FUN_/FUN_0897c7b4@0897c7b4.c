#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0897c7b4(int param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + (param_2 & 0xff) * 0x28 + 0x1140);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0x3e3851ec;
    }
  }
  else if (bVar1 < 3) {
    return 0x3e4ccccd;
  }
  return 0x3ecccccd;
}

