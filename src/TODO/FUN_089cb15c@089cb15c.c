#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cb15c(int param_1)

{
  undefined2 uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)FUN_089c9ed8(param_1,2);
  uVar3 = FUN_089c9da8(param_1);
  uVar1 = FUN_089c9d1c(param_1);
  if ((*puVar2 & uVar3) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar1;
    return 3;
  }
  return 0;
}
