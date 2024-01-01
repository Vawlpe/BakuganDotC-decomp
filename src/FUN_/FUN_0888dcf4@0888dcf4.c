#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888dcf4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_28;
  
  FUN_0889b4e4(*(undefined4 *)(param_1 + 0x2c4));
  uVar1 = FUN_0889b510(*(undefined4 *)(param_1 + 0x2c4),param_2);
  *(undefined4 *)(param_1 + 0x2c8) = uVar1;
  iVar4 = 0;
  iVar3 = param_1 + 0x2d8;
  iVar2 = 0;
  do {
    FUN_0888cea8(iVar3,*(int *)(*(int *)(param_1 + 0x2c8) + 0xc) + iVar2);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 300;
    iVar2 = iVar2 + 8;
  } while (iVar4 < 4);
  FUN_0888d0bc(param_1);
  FUN_0889c790(*(undefined4 *)(param_1 + 0x2c4),param_1 + 0x2cc,param_2);
  FUN_0888d118(param_1);
  FUN_0888dadc(param_1);
  FUN_0888daf8(param_1);
  *(undefined *)(param_1 + 0x938) = 1;
  *(undefined *)(param_1 + 0x914) = 0;
  *(undefined *)(param_1 + 0x915) = 0;
  local_28 = local_28 & 0xffffff00;
  *(undefined4 *)(param_1 + 0x940) = 0;
  *(undefined4 *)(param_1 + 0x93c) = 0x42700000;
  *(uint *)(param_1 + 0x944) = local_28;
  return;
}

