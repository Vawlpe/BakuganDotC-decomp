#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08819f28(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < (int)param_1) && (param_1 < 0x40)) {
    uVar1 = *(undefined4 *)(&DAT_08a50898 + param_1 * 4);
  }
  return uVar1;
}

