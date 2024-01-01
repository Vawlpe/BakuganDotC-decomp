#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_089c2b60(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((int)param_1 < 10000) {
    if ((-1 < (int)param_1) && (param_1 < 0x29)) {
      return (&PTR_DAT_08ac5280)[param_1];
    }
  }
  else {
    puVar1 = (undefined *)FUN_089c2848();
  }
  return puVar1;
}

