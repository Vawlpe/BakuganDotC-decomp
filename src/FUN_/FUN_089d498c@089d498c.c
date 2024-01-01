#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089d498c(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0xc) & 1 << (param_2 & 0x1f)) != 0;
}

