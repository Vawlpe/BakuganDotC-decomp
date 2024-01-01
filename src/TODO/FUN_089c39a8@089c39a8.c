#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c39a8(int *param_1)

{
  FUN_089bb728(param_1[1]);
  if ((param_1[8] == 3) && (*(char *)((int)param_1 + 0x1a) == '\0')) {
    *(undefined *)((int)param_1 + 0x1a) = 1;
    if (*param_1 != 0) {
      *(undefined *)((int)param_1 + 0xc9) = 1;
    }
  }
  FUN_089bb790(param_1[1]);
  FUN_089bbef8();
  return;
}

