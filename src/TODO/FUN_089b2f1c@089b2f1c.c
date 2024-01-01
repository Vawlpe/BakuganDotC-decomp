#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089b2f1c(int param_1)

{
  undefined4 uVar1;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af51dc;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar1 = *(undefined4 *)(DAT_08ac5934 + 0x1c);
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(DAT_08ac5934 + 0x1c) = 0;
  return param_1;
}

