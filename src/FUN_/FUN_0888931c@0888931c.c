#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0888931c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  while (((piVar1[0x35] == -1 || (*param_1 == 0)) ||
         (param_2 != piVar1[0x35] + *(int *)(*param_1 + 8) * -4 + 4))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (1 < iVar2) {
      return -1;
    }
  }
  return iVar2;
}

