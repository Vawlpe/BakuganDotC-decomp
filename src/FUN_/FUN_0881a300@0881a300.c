#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_0881a300(uint param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((-1 < (int)param_1) && (param_1 < 0x40)) {
    puVar1 = (&PTR_DAT_08ab01f0)[param_1];
    if ((-1 < param_2) && (param_2 < *(int *)(&DAT_08a50898 + param_1 * 4))) {
      puVar1 = puVar1 + param_2 * 0x14;
    }
  }
  return puVar1;
}

