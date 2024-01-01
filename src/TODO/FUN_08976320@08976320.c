#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08976320(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined *)(param_1 + 0x520) = 1;
    FUN_089762c4(param_1,0);
    return;
  }
  *(undefined *)(param_1 + 0x520) = 1;
  FUN_089762c4(param_1,1);
  return;
}

