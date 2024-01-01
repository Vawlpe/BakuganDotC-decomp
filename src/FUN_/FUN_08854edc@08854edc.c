#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08854edc(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x88) != param_2) {
    *(int *)(param_1 + 0x88) = param_2;
  }
  return;
}

