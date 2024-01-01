#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088865f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = -1;
  iVar2 = param_1;
  do {
    if (*(short *)(iVar2 + 10) != iVar1) {
      FUN_088865ac(param_1,iVar3);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 6;
  } while (iVar3 < 0x15);
  return;
}

