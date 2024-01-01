#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fa0e4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_089bb728(param_1[0x11]);
  if ((*param_1 == 9) && (*(char *)((int)param_1 + 0xed) != '\0')) {
    uVar1 = FUN_089bc83c();
    iVar2 = FUN_089bcb20(uVar1);
    if (iVar2 != 0) {
      *param_1 = 10;
      *(undefined *)((int)param_1 + 0xed) = 0;
      uVar3 = 1;
    }
  }
  FUN_089bb790(param_1[0x11]);
  return uVar3;
}

