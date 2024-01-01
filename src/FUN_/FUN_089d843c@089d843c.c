#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d843c(int *param_1,int **param_2,char param_3)

{
  int **ppiVar1;
  int *piVar2;
  int **ppiVar3;
  
  if (param_2 == (int **)0x0) {
    return;
  }
  ppiVar1 = (int **)param_1[2];
  if ((int **)param_1[2] == (int **)0x0) {
    ppiVar1 = (int **)param_1[1];
  }
  if ((int **)param_1[1] == (int **)0x0) {
    param_1[1] = (int)param_2;
    *param_2 = param_1;
  }
  else {
    piVar2 = param_2[2];
    if (piVar2 < ppiVar1[2]) {
      if (ppiVar1 == (int **)0x0) {
        param_1[2] = (int)param_2;
        return;
      }
      do {
        if (ppiVar1[2] < piVar2) {
          piVar2 = ppiVar1[1];
          *param_2 = (int *)ppiVar1;
          param_2[1] = piVar2;
          *ppiVar1[1] = (int)param_2;
          ppiVar1[1] = (int *)param_2;
          goto LAB_089d85a0;
        }
        ppiVar3 = (int **)*ppiVar1;
        if (ppiVar3 == (int **)0x0) {
          *param_2 = (int *)ppiVar1;
          piVar2 = ppiVar1[1];
          param_2[1] = piVar2;
          *piVar2 = (int)param_2;
          ppiVar1[1] = (int *)param_2;
          goto LAB_089d85a0;
        }
        if ((int **)ppiVar3[1] != ppiVar1) {
          *param_2 = (int *)ppiVar3;
          param_2[1] = (int *)ppiVar1;
          (*ppiVar1)[1] = (int)param_2;
          *ppiVar1 = (int *)param_2;
          goto LAB_089d85a0;
        }
        ppiVar1 = ppiVar3;
      } while (param_3 != '\0');
      piVar2 = ppiVar3[1];
      *param_2 = (int *)ppiVar3;
      param_2[1] = piVar2;
      *ppiVar3[1] = (int)param_2;
      ppiVar3[1] = (int *)param_2;
    }
    else {
      if (ppiVar1 == (int **)0x0) {
        param_1[2] = (int)param_2;
        return;
      }
      do {
        if (piVar2 < ppiVar1[2]) {
          param_2[1] = (int *)ppiVar1;
          piVar2 = *ppiVar1;
          *param_2 = piVar2;
          piVar2[1] = (int)param_2;
          *ppiVar1 = (int *)param_2;
          goto LAB_089d85a0;
        }
        ppiVar3 = (int **)ppiVar1[1];
        if (ppiVar3 == (int **)0x0) {
          ppiVar1[1] = (int *)param_2;
          *param_2 = (int *)ppiVar1;
          goto LAB_089d85a0;
        }
        if ((int **)*ppiVar3 != ppiVar1) {
          param_2[1] = (int *)ppiVar3;
          *param_2 = (int *)ppiVar1;
          *ppiVar1[1] = (int)param_2;
          ppiVar1[1] = (int *)param_2;
          goto LAB_089d85a0;
        }
        ppiVar1 = ppiVar3;
      } while (param_3 != '\0');
      param_2[1] = (int *)ppiVar3;
      piVar2 = *ppiVar3;
      *param_2 = piVar2;
      piVar2[1] = (int)param_2;
      *ppiVar3 = (int *)param_2;
    }
  }
LAB_089d85a0:
  param_1[2] = (int)param_2;
  return;
}

