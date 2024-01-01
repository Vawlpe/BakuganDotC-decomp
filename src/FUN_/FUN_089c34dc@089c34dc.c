#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c34dc(int *param_1,undefined param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = false;
  FUN_089bb728(param_1[1]);
  if ((*(char *)((int)param_1 + 0x17) != '\0') && (param_1[9] == 0)) {
    bVar1 = true;
    *(undefined *)((int)param_1 + 0x19) = param_2;
    param_1[9] = 1;
    param_1[8] = 2;
    *(undefined *)((int)param_1 + 0x1a) = 0;
    uVar2 = 1;
  }
  FUN_089bb790(param_1[1]);
  if (bVar1) {
    FUN_089bbf78(*param_1 + 9);
  }
  return uVar2;
}

