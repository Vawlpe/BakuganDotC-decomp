#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a15924(int param_1,uint param_2,uint param_3)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & ~param_2 | param_2 & param_3;
  }
  return;
}

