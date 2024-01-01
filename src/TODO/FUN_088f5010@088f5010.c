#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088f5010(int param_1,ushort param_2)

{
  if ((*(ushort *)(&DAT_08a99830 + param_1 * 2) <= param_2) &&
     (param_2 <= *(ushort *)(&DAT_08a99840 + param_1 * 2))) {
    return 1;
  }
  return 0;
}

