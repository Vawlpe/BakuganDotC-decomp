#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d9174(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_2 + 0x10) = param_1;
    if (*(int *)(param_1 + 0x28) == 0) {
      *(int *)(param_1 + 0x28) = param_2;
      if (*(int *)(param_1 + 0x24) == 0) {
        *(int *)(param_1 + 0x24) = param_2;
      }
    }
    else {
      FUN_089d8cd8(param_2,*(int *)(param_1 + 0x28));
      *(int *)(param_1 + 0x28) = param_2;
    }
  }
  return;
}

