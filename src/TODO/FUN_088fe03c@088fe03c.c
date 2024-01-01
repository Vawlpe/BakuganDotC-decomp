#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fe03c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_1 + 0x370);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_1 + 0x374);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x37c);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x370) = *param_2;
  *(undefined4 *)(param_1 + 0x374) = uVar1;
  *(undefined4 *)(param_1 + 0x378) = uVar2;
  *(undefined4 *)(param_1 + 0x37c) = uVar3;
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x394);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x398);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x39c);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x390) = *param_3;
  *(undefined4 *)(param_1 + 0x394) = uVar1;
  *(undefined4 *)(param_1 + 0x398) = uVar2;
  *(undefined4 *)(param_1 + 0x39c) = uVar3;
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3b4) = param_4;
  return;
}

