#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a15d78(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != param_2)) {
    FUN_08a13244(1,*(int *)(param_1 + 0x24));
    FUN_08a13120(1,param_2);
    *(int *)(param_1 + 0x24) = param_2;
  }
  return;
}

