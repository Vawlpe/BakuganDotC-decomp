#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089daffc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined auStack_200 [480];
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x50) != 0) && ((*(uint *)(param_1 + 0x28) & 8) != 0)) {
    uVar1 = FUN_08a19580(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  FUN_089db130(auStack_200,param_2,param_3,param_4);
  FUN_089db274(auStack_200,param_1,0xffffffff,param_5,param_6,param_7);
  FUN_089dd4a0(auStack_200,param_1);
  uVar1 = FUN_089db178(auStack_200,param_2,param_3);
  return uVar1;
}

