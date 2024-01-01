#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1f048(uint param_1)

{
  dl_write_enable_disable(DAT_08afcf9c,param_1,1);
  DAT_08afcf98 = DAT_08afcf98 | 1 << (param_1 & 0x1f);
  return;
}

