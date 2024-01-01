#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088888f0(int param_1,int param_2)

{
  if ((((10 < param_2) && (param_2 < 0x11)) && (*(char *)(param_1 + param_2 * 6 + 0xc) == '\0')) &&
     (*(int *)(param_1 + 0xf4) < 1)) {
    *(undefined4 *)(param_1 + 0xf4) = 0x5a;
  }
  FUN_088887f8(param_1,param_2,0xffffffff);
  return;
}

