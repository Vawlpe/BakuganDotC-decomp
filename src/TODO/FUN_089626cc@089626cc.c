#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089626cc(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *param_3;
  uVar6 = param_3[1];
  uVar5 = param_3[2];
  uVar4 = param_3[3];
  uVar1 = param_3[5];
  if ((-1 < param_2) && (param_2 < 4)) {
    iVar3 = param_1 + param_2 * 0x28;
    *(undefined4 *)(iVar3 + 0x5210) = param_3[4];
    *(undefined4 *)(iVar3 + 0x5214) = uVar1;
    FUN_0896254c(param_1,param_2,uVar2);
    FUN_089625d8(param_1,param_2,uVar4);
    FUN_0896263c(param_1,param_2,uVar6,uVar5);
  }
  return;
}

