#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089488ec(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_089f8a64(param_1 + 0x54);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_089f5474(*(int *)(param_1 + 0x18),1);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = FUN_089f2178(0x41f00000);
    FUN_089f5084(uVar2,uVar1);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = FUN_089f2178(0x41200000);
    FUN_089f5084(uVar2,uVar1);
  }
  return;
}

