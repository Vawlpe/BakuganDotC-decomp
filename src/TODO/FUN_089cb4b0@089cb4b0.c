#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cb4b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = FUN_089c9da8();
  uVar2 = FUN_089c9da8(param_1);
  puVar3 = (undefined4 *)FUN_089c9ed8(param_1,2);
  iVar4 = FUN_089bfa40(uVar1);
  if (iVar4 != 0) {
    uVar1 = (**(code **)(*(int *)(iVar4 + 0xc) + 0x34))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 0x30),uVar2);
    *puVar3 = uVar1;
  }
  return 0;
}

