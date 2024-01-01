#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_0897a03c(int param_1,uint param_2)

{
  if (*(char *)(param_1 + 0xee5) == '\x02') {
    return (param_2 & 0xff) % 3;
  }
  return 0xff;
}

