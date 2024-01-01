#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d9ed4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    iVar1 = FUN_089d9ddc(param_1,param_2);
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x10))();
  }
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x20) + 0x14))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 0x10));
    return uVar2;
  }
  return 0;
}

