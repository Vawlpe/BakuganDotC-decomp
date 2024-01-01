#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c9144(int param_1)

{
  undefined4 uVar1;
  
  FUN_089d8b38();
  *(undefined **)(param_1 + 0x20) = &DAT_08af52a4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar1 = FUN_089c2658();
  uVar1 = FUN_089c2730(uVar1,4);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined *)(param_1 + 0x54) = 0;
  return param_1;
}

