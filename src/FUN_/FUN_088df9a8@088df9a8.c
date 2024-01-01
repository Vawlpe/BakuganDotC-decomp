#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088df9a8(undefined4 param_1,int param_2)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 in_V7D;
  
  auVar1 = vscl_t(*(undefined (*) [12])(param_2 + 0x40),param_1);
  *(int *)*(undefined (*) [12])(param_2 + 0x40) = auVar1._0_4_;
  *(int *)(param_2 + 0x44) = auVar1._4_4_;
  *(int *)(param_2 + 0x48) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x4c) = in_V7D;
  if (*(int *)(param_2 + 0x16c) != 0) {
    iVar2 = *(int *)(param_2 + 0x16c);
    auVar1 = vscl_t(*(undefined (*) [12])(iVar2 + 0x10),param_1);
    *(int *)*(undefined (*) [12])(iVar2 + 0x10) = auVar1._0_4_;
    *(int *)(iVar2 + 0x14) = auVar1._4_4_;
    *(int *)(iVar2 + 0x18) = auVar1._8_4_;
    *(undefined4 *)(iVar2 + 0x1c) = in_V7D;
  }
  return;
}

