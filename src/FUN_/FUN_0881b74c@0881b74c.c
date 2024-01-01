#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0881b74c(int param_1,undefined *param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if ((*(int *)(param_1 + 0xc0) == 6) && (param_2 != (undefined *)0x0)) {
    uVar1 = *(undefined *)(param_1 + 0xd9);
    uVar2 = *(undefined *)(param_1 + 0xda);
    uVar4 = *(undefined *)(param_1 + 0xdc);
    *param_2 = *(undefined *)(param_1 + 0xd8);
    uVar3 = *(undefined *)(param_1 + 0xdb);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = uVar4;
    uVar5 = 1;
  }
  return uVar5;
}

