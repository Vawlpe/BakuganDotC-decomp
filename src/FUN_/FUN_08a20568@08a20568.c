#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a20568(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -0x7fbaffff;
  if (DAT_08af13ac != -1) {
    uVar1 = *param_1;
    if ((uVar1 & 1) != 0) {
      iVar2 = FUN_08a293a4(param_1[1]);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar1 = *param_1;
    }
    if ((uVar1 & 2) != 0) {
      iVar2 = FUN_08a29428(param_1[2],param_1[3]);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar1 = *param_1;
    }
    if ((uVar1 & 4) != 0) {
      iVar2 = FUN_08a29310(param_1[4],param_1[5]);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar1 = *param_1;
    }
    if ((uVar1 & 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_08a2927c(param_1[6],param_1[7]);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

