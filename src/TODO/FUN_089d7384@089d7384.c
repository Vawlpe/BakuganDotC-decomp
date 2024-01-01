#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d7384(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x24) != 0) {
      for (iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      }
    }
    if (*(int *)(iVar1 + 0x34) != 0) {
      for (iVar1 = *(int *)(*(int *)(iVar1 + 0x34) + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      }
    }
  }
  return;
}

