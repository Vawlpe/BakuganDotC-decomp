#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880953c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 < 1) {
    if (iVar3 < 0) goto LAB_088095dc;
    iVar3 = FUN_089cc058(param_1);
    if (iVar3 != 0) {
      uVar1 = _DONE_GetPtr_DAT_08AC58E0();
      FUN_089cc460(uVar1,1);
      uVar1 = _DONE_GetPtr_DAT_08AC58E0();
      iVar3 = FUN_089cc630(uVar1,1);
      *DAT_08aac9c0 = iVar3;
      iVar3 = *(int *)(*DAT_08aac9c0 + 0x10);
      (**(code **)(iVar3 + 0x14))(*DAT_08aac9c0 + (int)*(short *)(iVar3 + 0x10),2);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  else {
    if (1 < iVar3) {
LAB_088095dc:
      FUN_089bf7a8(param_1,1);
      return;
    }
    if ((*DAT_08aac9c0 != 0) && (iVar3 = FUN_089cc778(), iVar3 != 0)) {
      iVar3 = _DONE_NotZero_DAT_08AAC9E0();
      if (iVar3 != 0) {
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        uVar2 = FUN_089cc798(*DAT_08aac9c0);
        FUN_0880cd9c(uVar1,1,uVar2);
      }
      uVar1 = _DONE_GetPtr_DAT_08AC58E0();
      FUN_089cc5a8(uVar1,1);
      *(undefined4 *)(param_1 + 0x10) = 999;
    }
  }
  return;
}

