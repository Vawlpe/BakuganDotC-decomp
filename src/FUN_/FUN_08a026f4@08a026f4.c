#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a026f4(int **param_1)

{
  if ((*param_1 != (int *)0x0) || (param_1 == DAT_08afae48)) {
    FUN_08a026d8();
  }
  *param_1 = (int *)DAT_08afae48;
  DAT_08afae48 = param_1;
  return;
}

