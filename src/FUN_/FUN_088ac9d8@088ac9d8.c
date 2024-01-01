#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ac9d8(float param_1,int param_2)

{
  if (0 < *(int *)(param_2 + 0x200)) {
    *(int *)(param_2 + 0x200) = (int)((float)*(int *)(param_2 + 0x200) - param_1);
  }
  return;
}

