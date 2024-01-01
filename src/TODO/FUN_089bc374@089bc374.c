#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bc374(void)

{
  int iVar1;
  
  FUN_089fb4f8();
  FUN_089f937c();
  while (iVar1 = FUN_089f944c(), iVar1 != 0) {
    iVar1 = FUN_089f9468();
    (**(code **)(*(int *)(iVar1 + 0x100) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x100) + 8));
  }
  FUN_089f9414();
  FUN_089fb574();
  return 0;
}

