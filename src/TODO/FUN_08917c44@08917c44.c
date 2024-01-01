#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08917c44(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  undefined4 in_V74;
  uint *local_40 [4];
  float local_30;
  float local_2c;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar3 = FUN_089f2178(0x43480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar3);
  }
  if (*(int *)(param_1 + 0x918) != 0) {
    uVar3 = FUN_089f2178(0x42700000);
    local_40[0] = (uint *)FUN_089f1308(uVar3);
    local_40[0] = (uint *)FUN_089f1490(local_40[0],*(undefined4 *)(param_1 + 0x910),1);
    local_2c = 0.0;
    fVar5 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar5 = 1.0;
    }
    if (fVar5 <= 0.0001) {
      local_2c = 10000.0;
      uVar6 = 0xcf000000;
      local_30 = local_2c;
    }
    else {
      fVar5 = (1.0 - fVar5) * 800.0 + 1.0;
      if (0.0 < fVar5) {
        local_2c = 1.0 / fVar5;
      }
      else if (fVar5 < 0.0) {
        local_2c = 1.0 / fVar5;
      }
      auVar1._12_4_ = DAT_08b0019c;
      auVar1._8_4_ = DAT_08b00198;
      auVar1._4_4_ = DAT_08b00194;
      auVar1._0_4_ = DAT_08b00190;
      auVar1 = vsat0_q(auVar1);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar6 = vi2uc_q(auVar1);
      uVar6 = uVar6 & 0xffffff | 0xcf000000;
      local_30 = fVar5 + 20000.0;
    }
    *local_40[0] = uVar6;
    local_40[0][1] = (uint)local_30 >> 8 | 0xcd000000;
    local_40[0][2] = (uint)local_2c >> 8 | 0xce000000;
    local_40[0] = local_40[0] + 3;
    iVar4 = *(int *)(*(int *)(param_1 + 0x918) + 0x14);
    (**(code **)(iVar4 + 0x44))(*(int *)(param_1 + 0x918) + (int)*(short *)(iVar4 + 0x40),local_40);
    FUN_089f13c8(uVar3,local_40[0]);
  }
  if (*(int *)(param_1 + 0x914) != 0) {
    uVar3 = FUN_089f2178(0x42a00000);
    local_40[0] = (uint *)FUN_089f1308(uVar3);
    local_40[0] = (uint *)FUN_089f1490(local_40[0],*(undefined4 *)(param_1 + 0x910),1);
    local_18 = 0.0;
    fVar5 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar5 = 1.0;
    }
    if (fVar5 <= 0.0001) {
      local_18 = 10000.0;
      uVar6 = 0xcf000000;
      local_1c = local_18;
    }
    else {
      fVar5 = (1.0 - fVar5) * 800.0 + 1.0;
      if (0.0 < fVar5) {
        local_18 = 1.0 / fVar5;
      }
      else if (fVar5 < 0.0) {
        local_18 = 1.0 / fVar5;
      }
      auVar2._12_4_ = DAT_08b0019c;
      auVar2._8_4_ = DAT_08b00198;
      auVar2._4_4_ = DAT_08b00194;
      auVar2._0_4_ = DAT_08b00190;
      auVar1 = vsat0_q(auVar2);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar6 = vi2uc_q(auVar1);
      uVar6 = uVar6 & 0xffffff | 0xcf000000;
      local_1c = fVar5 + 20000.0;
    }
    *local_40[0] = uVar6;
    local_40[0][1] = (uint)local_1c >> 8 | 0xcd000000;
    local_40[0][2] = (uint)local_18 >> 8 | 0xce000000;
    local_40[0] = local_40[0] + 3;
    iVar4 = *(int *)(*(int *)(param_1 + 0x914) + 0x14);
    (**(code **)(iVar4 + 0x44))(*(int *)(param_1 + 0x914) + (int)*(short *)(iVar4 + 0x40),local_40);
    FUN_089f13c8(uVar3,local_40[0]);
  }
  return;
}

