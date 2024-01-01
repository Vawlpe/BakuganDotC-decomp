#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08970910(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1 + 4;
  iVar5 = 1;
  iVar4 = 4;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    if ((iVar5 + -1) % 3 == 2) {
      *(undefined4 *)(iVar1 + 0xb0) = 0;
      *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    }
    FUN_08970768(param_1,iVar1);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0x3f800000;
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(undefined4 *)(iVar3 + 0xa9c) = *(undefined4 *)(*piVar2 + 100);
    if (0xb < iVar5 + -1) {
      FUN_089f4c84(*piVar2);
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 4;
  } while (iVar5 < 0x19);
  return;
}

