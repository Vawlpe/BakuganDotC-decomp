#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08993498(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x104)) {
    do {
      iVar1 = *(int *)(iVar3 + 0xb4);
      if (iVar1 < 0) {
        if (-2 < iVar1) goto LAB_08993508;
LAB_08993510:
        uVar2 = 0x27;
        iVar1 = strcmp(*(undefined4 *)(DAT_08ac3bf0 + iVar1 * 4),&DAT_08a9edc8);
        if (iVar1 != 0) {
          uVar2 = *(undefined4 *)(iVar3 + 0xb4);
        }
        *(undefined4 *)(iVar3 + 0xdc) = uVar2;
      }
      else {
        if (iVar1 != 0x27) goto LAB_08993510;
LAB_08993508:
        *(int *)(iVar3 + 0xdc) = iVar1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x104));
  }
  return;
}

