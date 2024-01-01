#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a30068(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_08a3044c(*param_1);
  if (iVar1 == 0) {
    uVar4 = *param_1;
  }
  else {
    do {
      iVar2 = FUN_08a3044c(iVar1);
      if ((param_1[4] != 0) && (iVar3 = FUN_089d774c(param_1[4],iVar1), iVar3 != 0)) {
        FUN_08a303e4(iVar1,2);
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        FUN_08a303e4(iVar1,3);
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    uVar4 = *param_1;
  }
  FUN_08a30444(uVar4,0);
  iVar1 = FUN_08a3044c(param_1[1]);
  if (iVar1 == 0) {
    uVar4 = param_1[1];
  }
  else {
    do {
      iVar2 = FUN_08a3044c(iVar1);
      if ((param_1[4] != 0) && (iVar3 = FUN_089d774c(param_1[4],iVar1), iVar3 != 0)) {
        FUN_08a303e4(iVar1,2);
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        FUN_08a303e4(iVar1,3);
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    uVar4 = param_1[1];
  }
  FUN_08a30444(uVar4,0);
  return;
}

