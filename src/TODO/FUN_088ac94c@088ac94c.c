#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ac94c(float param_1,int param_2)

{
  *(int *)(param_2 + 0x204) = (int)param_1;
  *(int *)(param_2 + 0x200) = (int)param_1;
  if (*(int *)(param_2 + 0x290) != 0) {
    FUN_0888b810();
  }
  return;
}

