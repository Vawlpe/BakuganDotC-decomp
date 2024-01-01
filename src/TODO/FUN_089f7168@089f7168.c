#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f7168(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xad) != '\0') {
    param_2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0xb0) + param_2 * 0x60;
  *(int *)(param_1 + 0x4c) = iVar1;
  *(int *)(param_1 + 100) = iVar1;
  return;
}

