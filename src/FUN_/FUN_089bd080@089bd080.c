#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bd080(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 & 0x80000) == 0) {
    if ((param_1 & 0x10000) == 0) {
      if ((param_1 & 0x20000) != 0) {
        iVar1 = FUN_089bc83c();
        *(undefined4 *)(iVar1 + 0x24) = 1;
      }
    }
    else {
      iVar1 = FUN_089bc814();
      if (iVar1 != 0) {
        iVar1 = FUN_089bc83c();
        *(undefined *)(iVar1 + 0x17) = 1;
      }
      iVar1 = FUN_089f944c();
      if (iVar1 != 0) {
        uVar2 = FUN_089f9468();
        FUN_089fa1a0(uVar2);
      }
    }
  }
  return;
}

