#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e15cc(int param_1,int *param_2)

{
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    *(undefined4 *)*param_2 = 0xe8ffffff;
    *param_2 = *param_2 + 4;
  }
  FUN_089df8d0(param_1,param_2);
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    *(undefined4 *)*param_2 = 0xe8000000;
    *param_2 = *param_2 + 4;
  }
  return;
}

