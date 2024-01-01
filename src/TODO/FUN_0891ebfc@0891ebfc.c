#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ebfc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      DAT_08ac0e70 = 1;
      FUN_089bf754(0x188,*(undefined *)(param_1 + 0x2100));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      goto LAB_0891ed18;
    }
  }
  else if (iVar1 < 2) {
    iVar1 = FUN_089bf93c(0x188,1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    goto LAB_0891ed18;
  }
  switch(*(undefined *)(param_1 + 0x2100)) {
  case 1:
    *(undefined4 *)(param_1 + 0x2c) = 0x20;
    break;
  case 2:
    FUN_0891d5fc(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0xd;
    break;
  case 3:
    FUN_0891d5fc(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0x1a;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2c) = 0x1b;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x2c) = 1;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x2c) = 1;
    break;
  case 7:
    FUN_0891d5fc(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0x1a;
    break;
  case 8:
  default:
    *(undefined4 *)(param_1 + 0x2c) = 1;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 2;
LAB_0891ed18:
  FUN_0892c180(param_1 + 0x2104);
  FUN_0892c2d8(param_1 + 0x2114);
  FUN_0891e7b8(param_1);
  FUN_0891e88c(param_1);
  FUN_0891e964(param_1);
  return;
}

