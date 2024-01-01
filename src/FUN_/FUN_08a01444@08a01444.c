#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a01444(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_08ac6230 + 0x2c4);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      iVar1 = FUN_089cbde8(param_1);
      if (((iVar1 < 1) || (4 < iVar1)) &&
         (iVar1 = zz_sceUtilityMsgDialogInitStart(DAT_08ac6230), iVar1 == 0)) {
        *(undefined4 *)(DAT_08ac6230 + 0x2c4) = 2;
      }
    }
  }
  else if (iVar1 < 5) {
    iVar1 = FUN_089cbde8(param_1);
    if (iVar1 < 2) {
      if ((iVar1 == 0) && (*(int *)(DAT_08ac6230 + 0x2c4) == 4)) {
        *(undefined4 *)(DAT_08ac6230 + 0x2c4) = 0;
        FUN_089cbe08(param_1,0);
      }
    }
    else if (iVar1 < 3) {
      if ((*(int *)(DAT_08ac6230 + 0x2c4) == 3) &&
         (iVar1 = zz_sceUtilityMsgDialogAbort(), iVar1 == 0)) {
        *(undefined4 *)(DAT_08ac6230 + 0x2c4) = 4;
      }
    }
    else if ((iVar1 < 4) && (iVar1 = zz_sceUtilityMsgDialogShutdownStart(), iVar1 == 0)) {
      *(undefined4 *)(DAT_08ac6230 + 0x2c4) = 4;
    }
  }
  if (*(int *)(DAT_08ac6230 + 0x2c4) != DAT_08ac6234) {
    DAT_08ac6234 = *(int *)(DAT_08ac6230 + 0x2c4);
  }
  FUN_08a01364(param_1);
  return 0;
}

