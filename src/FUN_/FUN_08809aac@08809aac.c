#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08809aac(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 3) {
    uVar1 = FUN_089bf354(param_1,param_2);
    return uVar1;
  }
  if ((int)param_2 < 4) {
    if (2 < (int)param_2) {
      return *(undefined4 *)(param_1 + 0x10);
    }
  }
  else {
    if ((int)param_2 < 5) {
      return *(undefined4 *)(param_1 + 0x14);
    }
    if ((int)param_2 < 6) {
      uVar1 = *(undefined4 *)(param_1 + 0x5c);
    }
  }
  return uVar1;
}

