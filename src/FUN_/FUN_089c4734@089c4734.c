#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c4734(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_08ac5638 != 0) {
    if (param_1 < 0) {
      iVar2 = 0;
      iVar1 = 0;
      do {
        if (*(int *)(DAT_08ac5638 + iVar1) != 0) {
          FUN_089c4a14(*(int *)(DAT_08ac5638 + iVar1),3);
          *(undefined4 *)(DAT_08ac5638 + iVar1) = 0;
        }
        FUN_089bbd80(iVar2 + 6);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < 3);
      *(undefined4 *)(DAT_08ac5638 + 0xc) = 0;
    }
    else if ((param_1 < 3) && (iVar1 = *(int *)(DAT_08ac5638 + param_1 * 4), iVar1 != 0)) {
      FUN_089c4a14(iVar1,3);
      iVar1 = DAT_08ac5638;
      *(undefined4 *)(DAT_08ac5638 + param_1 * 4) = 0;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      FUN_089bbd80(param_1 + 6);
    }
  }
  return;
}

