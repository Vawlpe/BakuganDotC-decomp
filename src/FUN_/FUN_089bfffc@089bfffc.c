#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089bfffc(int **param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = (int *)(param_1 + 2);
  param_1[1] = (int *)(param_1 + 5);
  param_1[4] = (int *)0x0;
  puVar1 = *param_1;
  *(undefined4 *)((int)*param_1 + 4) = 0;
  *puVar1 = 0;
  piVar3 = param_1[1];
  param_1[1][2] = 0;
  piVar2 = param_1[1];
  piVar3[1] = 0;
  *piVar2 = 0;
  param_1[8] = (int *)0x0;
  *(undefined *)(param_1 + 9) = 0;
  return (int *)param_1;
}

