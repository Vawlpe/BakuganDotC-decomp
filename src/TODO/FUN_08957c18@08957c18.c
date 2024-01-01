#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08957c18(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  undefined4 in_V74;
  uint *local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_60;
  float local_5c;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  bVar3 = false;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar4 = FUN_089f2178(0x42c80000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x43c80000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x41f00000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),4);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x42700000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),8);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x43fa0000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),0x10);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
  }
  if (('\x02' < *(char *)(param_1 + 0x4cda)) && (DAT_08ac3410 != '\0')) {
    bVar3 = true;
  }
  if (!bVar3) {
    uVar4 = FUN_089f2178(0x42200000);
    local_90 = (uint *)FUN_089f1308(uVar4);
    uVar8 = 0;
    iVar9 = 0;
    iVar7 = param_1;
    local_44 = uVar4;
    do {
      if (*(int *)(iVar7 + 0x4d18) != 0) {
        local_90 = (uint *)FUN_089f1490(local_90,*(int *)(param_1 + 0x4d28) + iVar9,1);
        fVar10 = DAT_08b0019c;
        if (1.0 < DAT_08b0019c) {
          fVar10 = 1.0;
        }
        if (fVar10 <= 0.0001) {
          uVar11 = 0xcf000000;
          local_5c = 10000.0;
          local_60 = 10000.0;
        }
        else {
          fVar10 = (1.0 - fVar10) * 800.0 + 1.0;
          if (0.0 < fVar10) {
            local_5c = 1.0 / fVar10;
          }
          else if (fVar10 < 0.0) {
            local_5c = 1.0 / fVar10;
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
          uVar11 = vi2uc_q(auVar1);
          uVar11 = uVar11 & 0xffffff | 0xcf000000;
          local_60 = fVar10 + 20000.0;
        }
        *local_90 = uVar11;
        local_90[1] = (uint)local_60 >> 8 | 0xcd000000;
        local_90[2] = (uint)local_5c >> 8 | 0xce000000;
        local_90 = local_90 + 3;
        FUN_089579c8(&local_8c,param_1,uVar8 & 0xff);
        uVar11 = ((int)local_80 + (int)local_88 + -1) * 0x400;
        uVar6 = ((int)local_84 + (int)local_8c) - 1;
        *local_90 = (int)local_88 << 10 | 0xd4000000U | (int)local_8c;
        local_90[1] = uVar11 | 0xd5000000 | uVar6;
        local_90[2] = 0x15000000;
        local_90[3] = uVar11 | 0x16000000 | uVar6;
        local_90 = local_90 + 4;
        iVar5 = *(int *)(*(int *)(iVar7 + 0x4d18) + 0x14);
        (**(code **)(iVar5 + 0x44))
                  (*(int *)(iVar7 + 0x4d18) + (int)*(short *)(iVar5 + 0x40),&local_90);
        *local_90 = 0xd4000000;
        local_90[1] = 0xd5043ddf;
        local_90[2] = 0x15000000;
        local_90[3] = 0x16043ddf;
        local_90 = local_90 + 4;
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar9 = iVar9 + 0x2a0;
    } while ((int)uVar8 < 4);
    FUN_089f13c8(local_44,local_90);
  }
  if (DAT_08ac3410 != '\x02') {
    uVar4 = FUN_089f2178(0x42480000);
    local_90 = (uint *)FUN_089f1308(uVar4);
    uVar8 = 0;
    iVar9 = 0;
    iVar7 = param_1;
    local_44 = uVar4;
    do {
      if (*(int *)(iVar7 + 0x4d08) != 0) {
        local_90 = (uint *)FUN_089f1490(local_90,*(int *)(param_1 + 0x4d28) + iVar9,1);
        fVar10 = DAT_08b0019c;
        if (1.0 < DAT_08b0019c) {
          fVar10 = 1.0;
        }
        if (fVar10 <= 0.0001) {
          uVar11 = 0xcf000000;
          local_48 = 10000.0;
          local_4c = 10000.0;
        }
        else {
          fVar10 = (1.0 - fVar10) * 800.0 + 1.0;
          if (0.0 < fVar10) {
            local_48 = 1.0 / fVar10;
          }
          else if (fVar10 < 0.0) {
            local_48 = 1.0 / fVar10;
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
          uVar11 = vi2uc_q(auVar1);
          uVar11 = uVar11 & 0xffffff | 0xcf000000;
          local_4c = fVar10 + 20000.0;
        }
        *local_90 = uVar11;
        local_90[1] = (uint)local_4c >> 8 | 0xcd000000;
        local_90[2] = (uint)local_48 >> 8 | 0xce000000;
        local_90 = local_90 + 3;
        FUN_089579c8(&local_7c,param_1,uVar8 & 0xff);
        uVar11 = ((int)local_70 + (int)local_78 + -1) * 0x400;
        uVar6 = ((int)local_74 + (int)local_7c) - 1;
        *local_90 = (int)local_78 << 10 | 0xd4000000U | (int)local_7c;
        local_90[1] = uVar11 | 0xd5000000 | uVar6;
        local_90[2] = 0x15000000;
        local_90[3] = uVar11 | 0x16000000 | uVar6;
        local_90 = local_90 + 4;
        iVar5 = *(int *)(*(int *)(iVar7 + 0x4d08) + 0x14);
        (**(code **)(iVar5 + 0x44))
                  (*(int *)(iVar7 + 0x4d08) + (int)*(short *)(iVar5 + 0x40),&local_90);
        *local_90 = 0xd4000000;
        local_90[1] = 0xd5043ddf;
        local_90[2] = 0x15000000;
        local_90[3] = 0x16043ddf;
        local_90 = local_90 + 4;
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar9 = iVar9 + 0x2a0;
    } while ((int)uVar8 < 4);
    FUN_089f13c8(local_44,local_90);
  }
  FUN_08957a90(param_1);
  FUN_08957b54(param_1);
  return;
}

