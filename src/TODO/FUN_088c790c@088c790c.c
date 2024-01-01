#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088c790c(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined (*pauVar5) [12];
  int iVar6;
  uint uVar7;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_089f3aa8();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2d34;
  *(int *)(param_1 + 0x160) = param_4;
  *(uint *)(param_1 + 0x164) = param_2;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x20;
  FUN_089f5194(*(undefined4 *)(param_4 + 0x10),param_1);
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined *)(param_1 + 0x180) = 0;
  if ((int)param_2 < 0) {
    uVar7 = -(-param_2 & 0x3ff);
  }
  else {
    uVar7 = param_2 & 0x3ff;
  }
  if ((int)uVar7 < 0) {
    iVar6 = (-uVar7 & 0x1f) * -0x10;
  }
  else {
    iVar6 = (uVar7 & 0x1f) << 4;
  }
  *(undefined4 *)(param_1 + 0xd4) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_4 + 0x10) + 0x80) +
        ((int)(param_2 + ((uint)((int)param_2 >> 10) >> 0x16)) >> 10) * 4);
  FUN_089f3eb8(param_1,3);
  FUN_089f4534(0x41800000,0x41800000,param_1);
  local_48 = 0x41800000;
  local_44 = 0x41800000;
  local_50 = (float)iVar6;
  local_4c = (float)(((int)(uVar7 + ((uint)((int)uVar7 >> 5) >> 0x1b)) >> 5) << 4);
  FUN_089f4060(param_1,&local_50);
  *(uint *)(param_1 + 0xd8) = (uint)(0x205 < (int)param_2);
  pauVar5 = (undefined (*) [12])(param_1 + 0x60);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)*pauVar5 = *param_3;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  auVar1 = vf2in_t(*pauVar5,0);
  auVar1 = vi2f_t(auVar1,0);
  *(int *)*pauVar5 = auVar1._0_4_;
  *(int *)(param_1 + 100) = auVar1._4_4_;
  *(int *)(param_1 + 0x68) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  iVar6 = *(int *)(param_4 + 0x10);
  uVar2 = *(undefined4 *)(iVar6 + 0xc4);
  uVar3 = *(undefined4 *)(iVar6 + 200);
  uVar4 = *(undefined4 *)(iVar6 + 0xcc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar6 + 0xc0);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)*pauVar5;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  return param_1;
}

