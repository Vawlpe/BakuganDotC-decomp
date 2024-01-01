#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08809ed8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  bVar3 = false;
  if (iVar2 < 3) {
    if (1 < iVar2) {
      bVar3 = true;
    }
  }
  else if ((iVar2 < 4) && (0 < *(int *)(param_1 + 0x14))) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar1 = FUN_089f2178(0x42480000);
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_089f5084(*(int *)(param_1 + 0x1c),uVar1);
    }
  }
  return;
}

