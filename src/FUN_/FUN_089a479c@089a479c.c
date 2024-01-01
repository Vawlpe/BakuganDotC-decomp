#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a479c(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  undefined4 in_V74;
  uint *local_70 [4];
  float local_60;
  float local_5c;
  float local_4c;
  float local_48;
  
  fVar6 = 10000.0;
  iVar7 = param_1 + 0x6b0;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar3 = FUN_089f2178(0x42480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar3);
    uVar3 = FUN_089f2178(0x43480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar3);
  }
  uVar3 = FUN_089f2178(0x41a00000);
  local_70[0] = (uint *)FUN_089f1308(uVar3);
  if (*(int *)(param_1 + 0x6a0) != 0) {
    local_70[0] = (uint *)FUN_089f1490(local_70[0],iVar7,1);
    fVar8 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar8 = 1.0;
    }
    if (fVar8 <= 0.0001) {
      uVar9 = 0xcf000000;
      local_5c = fVar6;
      local_60 = fVar6;
    }
    else {
      fVar8 = (1.0 - fVar8) * 800.0 + 1.0;
      if (0.0 < fVar8) {
        local_5c = 1.0 / fVar8;
      }
      else if (fVar8 < 0.0) {
        local_5c = 1.0 / fVar8;
      }
      else {
        local_5c = 0.0;
      }
      auVar1._12_4_ = DAT_08b0019c;
      auVar1._8_4_ = DAT_08b00198;
      auVar1._4_4_ = DAT_08b00194;
      auVar1._0_4_ = DAT_08b00190;
      auVar1 = vsat0_q(auVar1);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar9 = vi2uc_q(auVar1);
      uVar9 = uVar9 & 0xffffff | 0xcf000000;
      local_60 = fVar8 + 20000.0;
    }
    *local_70[0] = uVar9;
    local_70[0][1] = (uint)local_60 >> 8 | 0xcd000000;
    local_70[0][2] = (uint)local_5c >> 8 | 0xce000000;
    local_70[0] = local_70[0] + 3;
    iVar4 = *(int *)(*(int *)(param_1 + 0x6a0) + 0x14);
    (**(code **)(iVar4 + 0x44))(*(int *)(param_1 + 0x6a0) + (int)*(short *)(iVar4 + 0x40),local_70);
  }
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x68c) != 0) {
      local_70[0] = (uint *)FUN_089f1490(local_70[0],iVar7,1);
      fVar8 = DAT_08b0019c;
      if (1.0 < DAT_08b0019c) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.0001) {
        uVar9 = 0xcf000000;
        local_48 = fVar6;
        local_4c = fVar6;
      }
      else {
        fVar8 = (1.0 - fVar8) * 800.0 + 1.0;
        if (0.0 < fVar8) {
          local_48 = 1.0 / fVar8;
        }
        else if (fVar8 < 0.0) {
          local_48 = 1.0 / fVar8;
        }
        else {
          local_48 = 0.0;
        }
        auVar2._12_4_ = DAT_08b0019c;
        auVar2._8_4_ = DAT_08b00198;
        auVar2._4_4_ = DAT_08b00194;
        auVar2._0_4_ = DAT_08b00190;
        auVar1 = vsat0_q(auVar2);
        auVar1 = vscl_q(auVar1,in_V74);
        auVar1 = vf2iz_q(auVar1,0x17);
        uVar9 = vi2uc_q(auVar1);
        uVar9 = uVar9 & 0xffffff | 0xcf000000;
        local_4c = fVar8 + 20000.0;
      }
      *local_70[0] = uVar9;
      local_70[0][1] = (uint)local_4c >> 8 | 0xcd000000;
      local_70[0][2] = (uint)local_48 >> 8 | 0xce000000;
      local_70[0] = local_70[0] + 3;
      iVar5 = *(int *)(*(int *)(param_1 + 0x68c) + 0x14);
      (**(code **)(iVar5 + 0x44))
                (*(int *)(param_1 + 0x68c) + (int)*(short *)(iVar5 + 0x40),local_70);
    }
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 4;
  } while (iVar4 < 5);
  FUN_089f13c8(uVar3,local_70[0]);
  FUN_089a46cc();
  return;
}

