#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e520c(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 200);
    if (iVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0xd4);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 200) = 0;
      cVar1 = *(char *)(param_1 + 0xd4);
    }
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_1 + 0xcc);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc4);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xcc);
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar2,0,0);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0xc4) = 0;
        iVar2 = *(int *)(param_1 + 0xcc);
      }
    }
    if (iVar2 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

