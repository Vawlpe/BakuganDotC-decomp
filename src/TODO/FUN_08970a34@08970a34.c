#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08970a34(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0x1b;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar4 = 0x6c;
  iVar3 = param_1 + 0x6c;
  do {
    FUN_08970768(param_1,*(undefined4 *)(iVar1 + iVar4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0x3f800000;
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar5 = iVar5 + 1;
    piVar2 = (int *)(iVar1 + iVar4);
    iVar4 = iVar4 + 4;
    *(undefined4 *)(iVar3 + 0xa9c) = *(undefined4 *)(*piVar2 + 100);
    iVar3 = iVar3 + 4;
  } while (iVar5 < 0x1f);
  return;
}

