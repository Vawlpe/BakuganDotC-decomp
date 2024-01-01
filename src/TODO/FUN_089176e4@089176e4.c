#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089176e4(int param_1)

{
  undefined uVar1;
  
  FUN_0891752c();
  uVar1 = FUN_089176b4(param_1);
  *(undefined *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x910) = 0;
  *(undefined4 *)(param_1 + 0x914) = 0;
  *(undefined4 *)(param_1 + 0x918) = 0;
  memset_jak((undefined *)(param_1 + 0x8b8),0,0x24);
  return;
}

