#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ed6c8(int param_1,undefined4 param_2)

{
  undefined auStack_40 [48];
  
  FUN_089ed320();
  *(undefined **)(param_1 + 0x28) = &DAT_08af5734;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_089ed320(auStack_40);
  FUN_089ed358(auStack_40,2);
  return param_1;
}

