#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089dec38(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    iVar2 = 0;
    do {
      iVar1 = strcmp(*(undefined4 *)(*(int *)(param_1 + 0xfc) + iVar2),param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0xe8));
  }
  return -1;
}

