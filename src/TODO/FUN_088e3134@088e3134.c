#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3134(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x314);
  if (iVar1 == 0) {
    FUN_088e2788(param_1,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x324);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      FUN_088baba4();
      *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
      return;
    }
  }
  else if (iVar2 < 2) {
    if (*(int *)(iVar1 + 0x304) != 2) {
      return;
    }
    *(int *)(param_1 + 0x324) = iVar2 + 1;
    return;
  }
  FUN_088b9f54(iVar1,0,0);
  FUN_088e2788(param_1,0,0);
  return;
}

