#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ced40(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_2 < *(uint *)(param_1 + 0x38)) || (*(uint *)(param_1 + 0x3c) <= param_2)) {
    iVar1 = FUN_089ceeac(param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

