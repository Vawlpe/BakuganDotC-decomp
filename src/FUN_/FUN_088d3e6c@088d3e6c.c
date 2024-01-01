#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_088d3e6c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_08a95654;
  if (param_1 == -1) {
    param_1 = DAT_08abef9c;
  }
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_088d3e64();
    if (iVar1 <= iVar3) {
      return (int *)0x0;
    }
    iVar3 = iVar3 + 1;
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 3;
  }
  return piVar2;
}

