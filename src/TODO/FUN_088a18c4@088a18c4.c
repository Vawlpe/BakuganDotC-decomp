#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a18c4(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0x3bb60b61;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  FUN_089e02cc(param_1,"f6_landmark01",&LAB_088a9138,param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3bb60b61;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  FUN_089e02cc(param_1,"f6_landmark01_kara_",&LAB_088a910c,param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  FUN_089e02cc(param_1,"f6_landmark01_tama",&LAB_088a9138,param_1 + 0x2e0);
  FUN_089e0a70(param_1,&LAB_088a18ac,0);
  iVar1 = FUN_089df7ec(param_1,"f6_landmark01_tama");
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0x1f | 0x80;
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfc | 2;
  }
  return;
}

