#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a15998(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((param_2 + 1 & 0xffff0000) != 0) {
      return param_2;
    }
    if ((param_2 & 0xffff) < (uint)*(ushort *)(param_1 + 0x1c)) {
      return *(int *)(param_1 + 0xc) + param_2 * 0x10;
    }
  }
  return 0;
}

