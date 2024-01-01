#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880a38c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined auStack_90 [128];
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_0880dc94();
    FUN_089b4c84(auStack_90,"dialog_moji_%s.rep",uVar1);
    uVar1 = FUN_089be054(*(undefined4 *)(param_1 + 0x18),auStack_90);
    uVar2 = FUN_089be1b8(*(undefined4 *)(param_1 + 0x18),auStack_90);
    FUN_08804484("dialog_moji",uVar1,uVar2);
  }
  *(undefined *)(param_1 + 0x58) = 1;
  return;
}

