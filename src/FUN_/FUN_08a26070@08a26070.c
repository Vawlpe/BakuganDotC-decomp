#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a26070(int *param_1,int param_2)

{
  if (param_1 != (int *)0x0) {
    if (param_2 - 1U < 0x1f) {
      return 0;
    }
    if ((*param_1 == 0x2e47494d) && (param_1[1] == 0x312e3030)) {
      if (param_1[2] == 0x505350) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

