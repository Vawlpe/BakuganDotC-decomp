#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088602ec(int param_1,char param_2)

{
  if ((3 < *(int *)(param_1 + 0x184)) &&
     ((param_2 == '\0' ||
      (*(float *)(param_1 + 0x344) + 100.0 <
       *(float *)(param_1 + 0x24) - *(float *)(*(int *)(param_1 + 0x4bc) + 0x70))))) {
    return 1;
  }
  return 0;
}

