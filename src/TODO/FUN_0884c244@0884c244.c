#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884c244(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(param_1 + 0x510) = *param_3;
    *(undefined4 *)(param_1 + 0x514) = uVar1;
    *(undefined4 *)(param_1 + 0x518) = uVar2;
    *(undefined4 *)(param_1 + 0x51c) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x524) = param_2;
  return;
}

