#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cf0a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      uVar2 = 2;
      goto LAB_089cf0ec;
    }
  }
  else {
    if (iVar1 < 3) {
      uVar2 = 3;
      goto LAB_089cf0ec;
    }
    uVar2 = 4;
    if (iVar1 < 4) goto LAB_089cf0ec;
  }
  uVar2 = 1;
LAB_089cf0ec:
  zz_sceDisplayWaitVblankStartMultiCB(uVar2);
  FUN_08a1ea30();
  DAT_08ac5990 = uVar2;
  return;
}

