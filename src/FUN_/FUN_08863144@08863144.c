#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08863144(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_2 + 0x1f0) = *param_3;
  *(undefined4 *)(param_2 + 500) = uVar1;
  *(undefined4 *)(param_2 + 0x1f8) = uVar2;
  *(undefined4 *)(param_2 + 0x1fc) = uVar3;
  *(undefined4 *)(param_2 + 0x1fc) = param_1;
  return;
}

