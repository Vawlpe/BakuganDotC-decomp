#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088971f8(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x1a4) != (param_2 & 0xff)) {
    *(uint *)(param_1 + 0x1a4) = param_2 & 0xff;
    FUN_0888d118();
  }
  return;
}

