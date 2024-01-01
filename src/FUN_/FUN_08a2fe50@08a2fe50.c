#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2fe50(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    FUN_08a30068(param_1);
    if (param_1[4] == 0) {
      iVar1 = *param_1;
    }
    else {
      iVar1 = FUN_089d774c(param_1[4],*param_1);
      if (iVar1 == 0) {
        iVar1 = param_1[4];
      }
      else {
        FUN_08a303e4(*param_1,2);
        *param_1 = 0;
        iVar1 = param_1[4];
      }
      iVar1 = FUN_089d774c(iVar1,param_1[1]);
      if (iVar1 == 0) {
        iVar1 = *param_1;
      }
      else {
        FUN_08a303e4(param_1[1],2);
        param_1[1] = 0;
        iVar1 = *param_1;
      }
    }
    if (iVar1 == 0) {
      iVar1 = param_1[1];
    }
    else {
      FUN_08a303e4(iVar1,3);
      *param_1 = 0;
      iVar1 = param_1[1];
    }
    if (iVar1 != 0) {
      FUN_08a303e4(iVar1,3);
      param_1[1] = 0;
    }
    FUN_08a303ac(param_1);
    param_1[2] = 0;
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

