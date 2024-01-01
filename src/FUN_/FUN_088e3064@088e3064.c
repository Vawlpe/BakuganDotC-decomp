#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3064(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x314) == 0) {
    FUN_088e2788(param_1,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x324);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      FUN_088baba4();
      *(undefined *)(DAT_08ac5928 + 0x3c) = 1;
      *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
      return;
    }
  }
  else if (iVar1 < 2) {
    if ((*(uint *)(param_1 + 0x168) & 0x20000) == 0) {
      return;
    }
    FUN_088b9f54(*(int *)(param_1 + 0x314),0,0);
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    return;
  }
  FUN_088e2788(param_1,0,0);
  *(undefined *)(DAT_08ac5928 + 0x3c) = 0;
  return;
}

