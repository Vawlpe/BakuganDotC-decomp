#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088469d4(undefined4 param_1,char param_2,int param_3)

{
  if (param_3 == 0) {
    param_3 = FUN_088660e0();
  }
  if (param_2 == '\0') {
    *(undefined *)(*(int *)(param_3 + 0x168) + 0xc) = 0;
  }
  else {
    *(undefined *)(*(int *)(param_3 + 0x168) + 0xc) = 1;
  }
  return;
}

