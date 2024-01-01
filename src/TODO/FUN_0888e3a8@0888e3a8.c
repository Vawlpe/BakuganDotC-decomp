#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888e3a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_4 == 0) {
    return 0;
  }
  local_20 = *(undefined4 *)(param_4 + 0x20);
  uStack_1c = *(undefined4 *)(param_4 + 0x24);
  uStack_18 = *(undefined4 *)(param_4 + 0x28);
  uStack_14 = *(undefined4 *)(param_4 + 0x2c);
  uVar1 = FUN_0888e238(param_1,param_2,param_3,&local_20);
  return uVar1;
}

