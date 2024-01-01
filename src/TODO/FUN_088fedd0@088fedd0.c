#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fedd0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  if (*(int *)(param_2 + 0x208) != 0) {
    *(uint *)(*(int *)(param_2 + 0x208) + 0x130) =
         *(uint *)(*(int *)(param_2 + 0x208) + 0x130) & 0xffffffb9;
  }
  FUN_0886003c(param_3[3],param_2);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_2 + 0x340) = *param_3;
  *(undefined4 *)(param_2 + 0x344) = uVar1;
  *(undefined4 *)(param_2 + 0x348) = uVar2;
  *(undefined4 *)(param_2 + 0x34c) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_2 + 0x20) = *param_3;
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  *(undefined4 *)(param_2 + 0x80) = in_V72;
  *(undefined4 *)(param_2 + 0x84) = in_V76;
  *(undefined4 *)(param_2 + 0x88) = in_V7A;
  *(undefined4 *)(param_2 + 0x8c) = in_V7E;
  iVar4 = *(int *)(param_2 + 0x130);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(iVar4 + 0xb0) = *param_3;
  *(undefined4 *)(iVar4 + 0xb4) = uVar1;
  *(undefined4 *)(iVar4 + 0xb8) = uVar2;
  *(undefined4 *)(iVar4 + 0xbc) = uVar3;
  FUN_089df400(0,param_2,0,1);
  FUN_089df400(0,param_2,0,1);
  FUN_089df400(0,param_2,0,1);
  FUN_088706f0(param_2,0,0);
  *(undefined4 *)(param_2 + 0x1c4) = 0;
  (**(code **)(*(int *)(param_2 + 0x14) + 0x3c))
            (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x38));
  return;
}

