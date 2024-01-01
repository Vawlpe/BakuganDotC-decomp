#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08809174(int param_1)

{
  undefined4 uVar1;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af1494;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = FUN_0880cc48();
  FUN_0880d808(uVar1,0x40000000);
  return param_1;
}

