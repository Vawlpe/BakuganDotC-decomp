#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088c7690(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_089f3aa8();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2d34;
  *(int *)(param_1 + 0x160) = param_4;
  *(undefined4 *)(param_1 + 0x168) = param_3;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x20;
  uVar3 = DAT_08b0019c;
  uVar2 = DAT_08b00198;
  uVar1 = DAT_08b00194;
  *(undefined4 *)(param_1 + 0xb0) = DAT_08b00190;
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x60) = in_V72;
  *(undefined4 *)(param_1 + 100) = in_V76;
  *(undefined4 *)(param_1 + 0x68) = in_V7A;
  *(undefined4 *)(param_1 + 0x6c) = in_V7E;
  FUN_089f5194(*(undefined4 *)(param_4 + 0x10),param_1);
  iVar4 = *(int *)(param_1 + 0x168);
  if (iVar4 < 3) {
    if (0 < iVar4) {
      if (iVar4 < 2) {
        *(undefined4 *)(param_1 + 0x178) = 0x3f800000;
        FUN_089f3eb8(param_1,3);
        iVar4 = *(int *)(param_1 + 0x160);
        uVar1 = *(undefined4 *)(iVar4 + 0x1a4);
        uVar2 = *(undefined4 *)(iVar4 + 0x1a8);
        uVar3 = *(undefined4 *)(iVar4 + 0x1ac);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar4 + 0x1a0);
        *(undefined4 *)(param_1 + 0x74) = uVar1;
        *(undefined4 *)(param_1 + 0x78) = uVar2;
        *(undefined4 *)(param_1 + 0x7c) = uVar3;
        FUN_089f4924(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),param_1);
        FUN_089f4330(param_1);
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) & 0xfffffffe;
        *(undefined4 *)(param_1 + 0x9c) = 0;
      }
      else {
        FUN_089f3eb8(param_1,3);
        FUN_089f4534(0x41c00000,0x42000000,param_1);
        local_40 = 0;
        local_3c = 0;
        local_38 = 0x41c00000;
        local_34 = 0x42000000;
        FUN_089f4060(param_1,&local_40);
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) & 0xfffffffe;
      }
    }
  }
  else if (iVar4 < 4) {
    FUN_089f3eb8(param_1,3);
    FUN_089f4534(0x42000000,0x42000000,param_1);
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x42000000;
    local_34 = 0x42000000;
    FUN_089f4060(param_1,&local_40);
    *(float *)(param_1 + 0x60) = *(float *)(param_4 + 0x20) + 6.0;
    *(float *)(param_1 + 100) =
         *(float *)(param_4 + 0x138) + *(float *)(param_4 + 0x54) * (float)*(int *)(param_4 + 0x13c)
    ;
  }
  else if (iVar4 < 5) {
    FUN_089f3eb8(param_1,3);
    FUN_089f4534(0x42000000,0x42000000,param_1);
    FUN_089f4330(param_1);
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0x41e00000;
    *(float *)(param_1 + 0x94) =
         *(float *)(param_4 + 0x138) + *(float *)(param_4 + 0x54) * (float)*(int *)(param_4 + 0x13c)
    ;
  }
  return param_1;
}

