#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a01384(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = zz_sceUtilityMsgDialogGetStatus();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

