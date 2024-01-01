#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1e954(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  if (DAT_08afd494 != (code *)0x0) {
    (*DAT_08afd494)();
  }
  DAT_08afcf78 = param_1;
  DAT_08afcf7c = param_5;
  DAT_08afcf84 = param_4;
  DAT_08afcf90 = param_2;
  DAT_08afcf94 = param_3;
  zz_sceDisplaySetMode(0,param_2,param_3);
  if (DAT_08afcf5c == 1) {
    zz_sceDisplaySetFrameBuf(DAT_08afcf68 + DAT_08afcf84,param_5,param_1,1);
  }
  return;
}

