#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fe07c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_3 + 0x300) = *(undefined4 *)(param_3 + 0x2f0);
  *(undefined4 *)(param_3 + 0x304) = *(undefined4 *)(param_3 + 0x2f4);
  *(undefined4 *)(param_3 + 0x308) = *(undefined4 *)(param_3 + 0x2f8);
  *(undefined4 *)(param_3 + 0x30c) = *(undefined4 *)(param_3 + 0x2fc);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_3 + 0x2f0) = *param_4;
  *(undefined4 *)(param_3 + 0x2f4) = uVar1;
  *(undefined4 *)(param_3 + 0x2f8) = uVar2;
  *(undefined4 *)(param_3 + 0x2fc) = uVar3;
  *(undefined4 *)(param_3 + 0x314) = *(undefined4 *)(param_3 + 0x310);
  *(undefined4 *)(param_3 + 0x310) = param_1;
  *(undefined4 *)(param_3 + 0x31c) = *(undefined4 *)(param_3 + 0x318);
  *(undefined4 *)(param_3 + 0x318) = param_2;
  *(undefined4 *)(param_3 + 0x360) = *(undefined4 *)(param_3 + 0x35c);
  *(undefined4 *)(param_3 + 0x35c) = param_5;
  return;
}

