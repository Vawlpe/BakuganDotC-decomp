#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ca48(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x51;
  iVar3 = 0x144;
  iVar2 = param_1 + 0x144;
  do {
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
    *(undefined4 *)(iVar2 + 0x2140) = *(undefined4 *)(*piVar1 + 100);
    if ((iVar4 - 0x51U & 1) != 0) {
      FUN_089f4cb8(*piVar1);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 4;
  } while (iVar4 < 0x55);
  return;
}

