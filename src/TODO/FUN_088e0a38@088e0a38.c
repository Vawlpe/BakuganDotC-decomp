#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e0a38(int param_1)

{
  if (*(char *)(DAT_08abf710 + 0x88) == '\0') {
    if (*(int *)(param_1 + 0x324) < 1) {
      if (*(int *)(param_1 + 0x35c) != 0) {
        FUN_088e05dc(param_1,9,0);
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + -1;
    }
  }
  return;
}

