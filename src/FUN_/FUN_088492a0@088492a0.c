#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088492a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af18bc;
  iVar1 = param_1 + 0x10;
  FUN_089e2910(iVar1);
  *(undefined4 *)(param_1 + 0x2b0) = param_2;
  *(undefined4 *)(param_1 + 0x2b4) = param_3;
  *(undefined4 *)(param_1 + 0x2b8) = param_4;
  FUN_089e29e4(iVar1);
  *(undefined4 *)(param_1 + 0x50) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x54) = 0x4708b800;
  *(undefined4 *)(param_1 + 0x168) = 0x42480000;
  FUN_089e2b14(iVar1,0xffffffff);
  *(undefined *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  return param_1;
}

