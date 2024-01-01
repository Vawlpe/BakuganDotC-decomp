#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a32624(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_08a326f4(param_1);
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = *(int *)(param_1 + 8);
    }
    else {
      iVar1 = FUN_089d774c(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar1 = *(int *)(param_1 + 8);
      }
      else {
        FUN_089d75e8(*(int *)(param_1 + 0xc),3);
        *(undefined4 *)(param_1 + 0xc) = 0;
        iVar1 = *(int *)(param_1 + 8);
      }
    }
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

