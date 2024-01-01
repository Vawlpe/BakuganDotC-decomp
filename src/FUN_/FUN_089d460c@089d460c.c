#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d460c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x54)) {
  case 0:
    iVar1 = FUN_089d4fc8(param_1);
    if (iVar1 == 0) {
      FUN_089d4f38(param_1);
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 1:
    iVar1 = FUN_089d4ca8(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_089d4c04(param_1);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 2:
    iVar1 = FUN_089d4ca8(param_1);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 3:
    if (-1 < *(int *)(param_1 + 4)) {
      iVar2 = zz_sceNetAdhocctlDelHandler();
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 4:
    iVar2 = zz_sceNetAdhocctlTerm();
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 5:
    iVar2 = zz_sceNetAdhocTerm();
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 6:
    iVar2 = zz_sceNetTerm();
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  default:
    iVar2 = 1;
  }
  return iVar2;
}

