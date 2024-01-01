#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c323c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_089bc814();
  if (iVar1 != 0) {
    uVar2 = _DONE_GetPtr_DAT_08AC51F8();
    iVar1 = FUN_089bccc4(uVar2,param_2);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  FUN_089bb728(*(undefined4 *)(param_1 + 4));
  *(undefined *)(param_1 + 0x1c) = uVar3;
  *(undefined *)(param_1 + 0x1d) = 0;
  *(int *)(param_1 + 0xc) = param_2;
  if ((param_2 == 0) || (param_2 == 1)) {
    *(bool *)(param_1 + 0x14) = param_2 != 0;
    *(undefined *)(param_1 + 0x15) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x15) = 1;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 4));
  return;
}

