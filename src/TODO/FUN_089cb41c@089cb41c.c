#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cb41c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_089c9da8();
  uVar2 = FUN_089c9da8(param_1);
  uVar3 = FUN_089c9da8(param_1);
  iVar4 = FUN_089bfa40(uVar1);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0xc) + 0x2c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 0x28),uVar2,uVar3);
  }
  return 0;
}

