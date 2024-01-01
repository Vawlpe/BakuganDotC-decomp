#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fb074(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 2) {
    if (0 < param_2) {
      DAT_08ac61ac = 1;
      DAT_08ac61ad = 1;
      FUN_089cc664();
      return 0;
    }
  }
  else if (param_2 < 3) {
    DAT_08ac61ac = 0;
    iVar1 = _DONE_GetPtr_DAT_08AC61A8();
    *(undefined *)(iVar1 + 0x109) = 0;
    FUN_089cc664();
  }
  return 0;
}

