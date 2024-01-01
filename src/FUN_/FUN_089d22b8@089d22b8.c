#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d22b8(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_08a31f9c(param_1[2]);
    iVar2 = param_1[2];
    if (iVar1 != 0) {
      FUN_08a31d4c(iVar2);
      while (iVar1 = FUN_08a31834(param_1[2]), iVar1 != 0) {
        if (*(int *)(DAT_08ac5968 + 4) == 0) {
          FUN_089d8634();
          FUN_089d7fd8(iVar1,0,0);
          FUN_089d866c();
        }
        else {
          iVar2 = FUN_089d774c(*(int *)(DAT_08ac5968 + 4),iVar1);
          if (iVar2 == 0) {
            FUN_089d8634();
            FUN_089d7fd8(iVar1,0,0);
            FUN_089d866c();
          }
        }
      }
      iVar2 = param_1[2];
    }
    if (iVar2 != 0) {
      FUN_08a3171c(iVar2,3);
      param_1[2] = 0;
    }
    if (*param_1 != 0) {
      FUN_089bb668(*param_1,3);
      *param_1 = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

