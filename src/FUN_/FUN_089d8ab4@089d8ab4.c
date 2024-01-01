#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d8ab4(int *param_1)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  
  ppiVar1 = (int **)param_1[4];
  if (ppiVar1[1] == param_1) {
    if ((int *)param_1[1] == (int *)0x0) {
      if ((int *)*param_1 == (int *)0x0) {
        piVar2 = *ppiVar1;
        do {
          piVar3 = piVar2;
          if (piVar3 == (int *)0x0) {
            ppiVar1[1] = (int *)0x0;
            goto LAB_089d8b0c;
          }
          piVar2 = (int *)piVar3[1];
        } while ((int *)piVar3[1] != (int *)0x0);
        ppiVar1[1] = piVar3;
LAB_089d8b0c:
        ppiVar1 = (int **)param_1[4];
      }
      else {
        ppiVar1[1] = (int *)*param_1;
        ppiVar1 = (int **)param_1[4];
      }
    }
    else {
      ppiVar1[1] = (int *)param_1[1];
      ppiVar1 = (int **)param_1[4];
    }
    piVar2 = *ppiVar1;
  }
  else {
    piVar2 = *ppiVar1;
  }
  if (piVar2 == param_1) {
    *ppiVar1 = (int *)param_1[1];
    ppiVar1 = (int **)param_1[4];
    piVar2 = ppiVar1[2];
  }
  else {
    piVar2 = ppiVar1[2];
  }
  ppiVar1[2] = (int *)((int)piVar2 + -1);
  return;
}

