#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2ff70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = 0;
  do {
    if (iVar3 == 0) goto LAB_08a2ffe8;
    iVar3 = FUN_08a3044c(iVar3);
  } while (((iVar3 == 0) || (iVar1 = FUN_08a30434(iVar3), iVar1 != param_2)) ||
          (iVar1 = FUN_08a30460(iVar3), iVar1 != 0));
  FUN_08a30454(iVar3);
  iVar2 = 1;
LAB_08a2ffe8:
  if (iVar2 == 0) {
    iVar3 = param_1[1];
    do {
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_08a3044c(iVar3);
    } while (((iVar3 == 0) || (iVar2 = FUN_08a30434(iVar3), iVar2 != param_2)) ||
            (iVar2 = FUN_08a30460(iVar3), iVar2 != 0));
    FUN_08a30454(iVar3);
    iVar2 = 1;
  }
  return iVar2;
}

