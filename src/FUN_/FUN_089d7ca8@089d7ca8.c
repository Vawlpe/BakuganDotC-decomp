#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d7ca8(void)

{
  int iVar1;
  
  if (DAT_08ac5ba0 != 0) {
    FUN_089d8634();
    if (*(int *)(DAT_08ac5ba0 + 0x24) != 0) {
      for (iVar1 = *(int *)(*(int *)(DAT_08ac5ba0 + 0x24) + 4); iVar1 != 0;
          iVar1 = *(int *)(iVar1 + 4)) {
      }
    }
    if (*(int *)(DAT_08ac5ba0 + 0x34) != 0) {
      for (iVar1 = *(int *)(*(int *)(DAT_08ac5ba0 + 0x34) + 4); iVar1 != 0;
          iVar1 = *(int *)(iVar1 + 4)) {
      }
    }
    FUN_089d866c();
  }
  return;
}

