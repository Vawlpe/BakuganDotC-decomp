#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3cf8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4a4) == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x840,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_088b7920(iVar2);
      iVar3 = iVar2;
    }
    *(int *)(param_1 + 0x4a4) = iVar3;
  }
  else {
    FUN_088b7808(*(int *)(param_1 + 0x4a4),0);
  }
  return;
}

