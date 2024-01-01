#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c357c(int *param_1,int param_2,undefined param_3,byte param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = false;
  FUN_089bb728(param_1[1]);
  if ((((*(byte *)((int)param_1 + 0x1a) | param_4) != 0) &&
      (iVar2 = param_1[0x2c], iVar2 != param_2)) && (param_1[9] == 0)) {
    if ((param_1[0x2d] != iVar2) && (*(char *)((int)param_1 + 0x1b) == '\0')) {
      param_1[0x2d] = iVar2;
    }
    iVar2 = FUN_089c2b60(param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_089c2b60(param_1[0x2c]);
    }
    else {
      param_1[0x2c] = param_2;
    }
    strncpy(param_1 + 0xb,iVar2,0x80);
    *(undefined *)((int)param_1 + 0x19) = param_3;
    if (*(char *)((int)param_1 + 0x1a) == '\0') {
      FUN_089c37e8(0x3f000000,param_1,1);
    }
    bVar1 = true;
    param_1[9] = 1;
    param_1[8] = 2;
    *(undefined *)((int)param_1 + 0x1a) = 0;
    *(byte *)((int)param_1 + 0x1b) = param_4;
    uVar3 = 1;
  }
  FUN_089bb790(param_1[1]);
  if (bVar1) {
    FUN_089bbf78(*param_1 + 9);
  }
  return uVar3;
}

