#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08929ee4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x14;
  iVar2 = 0x50;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    if (iVar3 == 0x15) {
      if (*(short *)(param_1 + 0x704) == 0x12) {
        FUN_08929ea4(param_1,iVar1,1);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      }
      else {
        FUN_08929ea4(param_1,iVar1,0);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      }
    }
    *(undefined4 *)(iVar1 + 0xbc) = 0;
    iVar3 = iVar3 + 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x18);
  return;
}

