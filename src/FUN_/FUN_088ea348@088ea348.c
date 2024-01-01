#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ea348(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_088be274();
  if (*(int *)(iVar2 + 0x61c) != 5) {
    bVar1 = false;
    if (*(int *)(iVar2 + 0x61c) != 0x1e) goto LAB_088ea380;
  }
  bVar1 = true;
LAB_088ea380:
  if (!bVar1) {
    iVar2 = *param_1;
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        FUN_088ea1c4(param_1);
      }
    }
    else if (iVar2 < 2) {
      FUN_088ea298(param_1);
    }
  }
  return;
}

