#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d8e70(int *param_1)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  
  ppiVar1 = (int **)param_1[5];
  if (ppiVar1[1] == param_1) {
    if ((int *)param_1[1] == (int *)0x0) {
      if ((int *)*param_1 == (int *)0x0) {
        piVar2 = (int *)(*ppiVar1)[1];
        if (piVar2 == (int *)0x0) {
          ppiVar1[1] = *ppiVar1;
        }
        else {
          do {
            piVar3 = piVar2;
            piVar2 = (int *)piVar3[1];
          } while (piVar2 != (int *)0x0);
          ppiVar1[1] = piVar3;
        }
        ppiVar1 = (int **)param_1[5];
      }
      else {
        ppiVar1[1] = (int *)*param_1;
        ppiVar1 = (int **)param_1[5];
      }
    }
    else {
      ppiVar1[1] = (int *)param_1[1];
      ppiVar1 = (int **)param_1[5];
    }
    piVar2 = *ppiVar1;
  }
  else {
    piVar2 = *ppiVar1;
  }
  if (piVar2 == param_1) {
    *ppiVar1 = (int *)param_1[1];
    ppiVar1 = (int **)param_1[5];
    piVar2 = ppiVar1[2];
  }
  else {
    piVar2 = ppiVar1[2];
  }
  ppiVar1[2] = (int *)((int)piVar2 + -1);
  return;
}

