#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f1be8(undefined4 param_1,float *param_2,int param_3,int param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 in_V74;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  
  if (0.015 <= param_2[3]) {
    puVar3 = (undefined4 *)FUN_089f1308(param_1);
    *puVar3 = 0x1e000001;
    puVar3[1] = 0x22000000;
    puVar3[2] = 0x23000000;
    puVar3[3] = 0x24000000;
    puVar3[4] = 0x21000001;
    puVar3[5] = 0x483f8000;
    puVar3[6] = 0x493f8000;
    puVar3[7] = 0x4a000000;
    puVar3[8] = 0x4b000000;
    local_50 = *param_2;
    local_4c = param_2[1];
    local_48 = param_2[2];
    fStack_44 = param_2[3];
    if (((1.0 < local_50) || (1.0 < local_4c)) || (1.0 < local_48)) {
      puVar3[9] = 0xdf0000a2;
      puVar3[10] = 0xe0000000;
      puVar3[0xb] = 0xe1ffffff;
      auVar1._4_4_ = local_4c - 1.0;
      auVar1._0_4_ = local_50 - 1.0;
      auVar1._8_4_ = local_48 - 1.0;
      auVar1._12_4_ = fStack_44;
      auVar1 = vsat0_q(auVar1);
      local_50 = auVar1._0_4_;
      local_4c = auVar1._4_4_;
      local_48 = auVar1._8_4_;
      fStack_44 = auVar1._12_4_;
    }
    else {
      puVar3[9] = 0xdf000032;
      puVar3[10] = 0xe0000000;
      puVar3[0xb] = 0xe1000000;
    }
    auVar2._4_4_ = local_4c;
    auVar2._0_4_ = local_50;
    auVar2._8_4_ = local_48;
    auVar2._12_4_ = fStack_44;
    auVar1 = vsat0_q(auVar2);
    auVar1 = vscl_q(auVar1,in_V74);
    auVar1 = vf2iz_q(auVar1,0x17);
    uVar7 = vi2uc_q(auVar1);
    puVar3[0xc] = uVar7 & 0xffffff | 0x55000000;
    puVar3[0xd] = uVar7 >> 0x18 | 0x58000000;
    if (param_4 == 0) {
      uVar4 = FUN_089f74a8();
      puVar3 = (undefined4 *)FUN_089f7110(uVar4,puVar3 + 0xe,0);
    }
    else {
      puVar3 = (undefined4 *)FUN_089f7110(param_4,puVar3 + 0xe,0);
    }
    if (param_3 == 1) {
      *puVar3 = 0x12800102;
      puVar3[1] = 0x10080000;
      puVar3[2] = 0x1ac5ef8;
      puVar3[3] = 0x4060010;
      puVar6 = puVar3 + 4;
    }
    else {
      uVar5 = 0x100;
      if (param_3 == 0) {
        uVar5 = 0xfa;
      }
      uVar7 = param_3 * 0x14 + 0x8ac5ea8;
      *(undefined2 *)(&DAT_08ac5eb4 + param_3 * 0x14) = uVar5;
      *puVar3 = 0x12800102;
      puVar6 = puVar3 + 1;
      if (uVar7 != 0) {
        *puVar6 = (uVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
        puVar3[2] = uVar7 & 0xffffff | 0x1000000;
        puVar6 = puVar3 + 3;
      }
      *puVar6 = 0x4060002;
      puVar6 = puVar6 + 1;
    }
    FUN_089f13c8(param_1,puVar6);
  }
  return;
}

