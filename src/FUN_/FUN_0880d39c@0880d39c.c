#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880d39c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089c59d4();
  if (iVar1 != 0) {
    uVar2 = FUN_089c59f0();
    FUN_089c5cfc((float)(uint)*(byte *)(*param_1 + 0x6a8) * 0.1 * 0.7,uVar2);
    uVar2 = FUN_089c59f0();
    FUN_089c5b6c((float)(uint)*(byte *)(*param_1 + 0x6a9) * 0.1,uVar2);
    uVar2 = FUN_089c59f0();
    FUN_089c5dac((float)(uint)*(byte *)(*param_1 + 0x6aa) * 0.1,uVar2);
  }
  return;
}
