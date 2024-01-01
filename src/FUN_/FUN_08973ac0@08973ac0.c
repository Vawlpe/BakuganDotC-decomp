#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08973ac0(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  undefined4 in_V74;
  uint *local_30 [4];
  float local_20;
  float local_1c;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar2 = FUN_089f2178(0x42200000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar2);
    uVar2 = FUN_089f2178(0x42340000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar2);
  }
  uVar2 = FUN_089f2178(0x41a00000);
  local_30[0] = (uint *)FUN_089f1308(uVar2);
  if (*(int *)(param_1 + 0x51c) != 0) {
    local_30[0] = (uint *)FUN_089f1490(local_30[0],*(undefined4 *)(param_1 + 0x518),1);
    fVar4 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0001) {
      local_20 = 10000.0;
      uVar5 = 0xcf000000;
      local_1c = local_20;
    }
    else {
      local_1c = (1.0 - fVar4) * 800.0 + 1.0;
      local_20 = local_1c + 20000.0;
      if (0.0 < local_1c) {
        local_1c = 1.0 / local_1c;
      }
      else if (local_1c < 0.0) {
        local_1c = 1.0 / local_1c;
      }
      else {
        local_1c = 0.0;
      }
      auVar1._12_4_ = DAT_08b0019c;
      auVar1._8_4_ = DAT_08b00198;
      auVar1._4_4_ = DAT_08b00194;
      auVar1._0_4_ = DAT_08b00190;
      auVar1 = vsat0_q(auVar1);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar5 = vi2uc_q(auVar1);
      uVar5 = uVar5 & 0xffffff | 0xcf000000;
    }
    *local_30[0] = uVar5;
    local_30[0][1] = (uint)local_20 >> 8 | 0xcd000000;
    local_30[0][2] = (uint)local_1c >> 8 | 0xce000000;
    local_30[0] = local_30[0] + 3;
    iVar3 = *(int *)(*(int *)(param_1 + 0x51c) + 0x14);
    (**(code **)(iVar3 + 0x44))(*(int *)(param_1 + 0x51c) + (int)*(short *)(iVar3 + 0x40),local_30);
  }
  FUN_089f13c8(uVar2,local_30[0]);
  return;
}

