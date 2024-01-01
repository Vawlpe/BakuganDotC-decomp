#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cdb50(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 4));
  if (((-1 < param_2) && (param_2 < 8)) && (*(int *)(DAT_08ac5924 + param_2 * 8 + 4) == 0)) {
    uVar1 = 1;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 4));
  return uVar1;
}

