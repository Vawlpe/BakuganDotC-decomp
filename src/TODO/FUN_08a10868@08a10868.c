#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a10868(int param_1)

{
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 2) & 0x20) != 0)) {
    return param_1 + 0x20;
  }
  return 0;
}

