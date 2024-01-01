#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fdffc(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 700);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x2b0) = *param_2;
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  *(undefined4 *)(param_1 + 700) = uVar3;
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x2dc);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x2d0) = *param_3;
  *(undefined4 *)(param_1 + 0x2d4) = uVar1;
  *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x354);
  *(undefined4 *)(param_1 + 0x354) = param_4;
  return;
}

