#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089fbb30(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
  uVar1 = *(uint *)(param_1 + 0x30);
  FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
  return (uVar1 & param_2) == param_2;
}

