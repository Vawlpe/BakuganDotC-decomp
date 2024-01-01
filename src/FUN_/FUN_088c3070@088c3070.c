#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c3070(int param_1)

{
  undefined auVar1 [12];
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  uint *local_60 [4];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  uint local_30;
  uint local_2c;
  
  uVar3 = FUN_089f2178(0);
  local_60[0] = (uint *)FUN_089f1308(uVar3);
  puVar2 = DAT_08ac5c74;
  *local_60[0] = *DAT_08ac5c74 & 0xffffff | 0xcf000000;
  local_30 = puVar2[1];
  local_60[0][1] = local_30 >> 8 | 0xcd000000;
  local_2c = puVar2[2];
  local_60[0][2] = local_2c >> 8 | 0xce000000;
  local_60[0] = local_60[0] + 3;
  puVar4 = (undefined4 *)FUN_089f1490(local_60[0],DAT_08ac5c90,1);
  *puVar4 = 0x19000001;
  local_60[0] = puVar4 + 1;
  local_60[0] = (uint *)FUN_088bf0bc(param_1,local_60[0],param_1 + 0x640);
  local_60[0] = (uint *)FUN_088be010(local_60[0],DAT_08abd5bc,0);
  FUN_089f13c8(uVar3,local_60[0]);
  DAT_08ac601e = 1;
  uStack_44 = *(undefined4 *)(DAT_08ac5c90 + 0x6c);
  auVar1 = vsub_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x60),
                  *(undefined (*) [12])(DAT_08ac5c90 + 0x50));
  local_50 = auVar1._0_4_;
  uStack_4c = auVar1._4_4_;
  uStack_48 = auVar1._8_4_;
  uVar7 = vdot_t(auVar1,auVar1);
  fVar8 = (float)vsqrt_s(uVar7);
  fVar8 = 4000.0 / fVar8;
  if (100.0 < fVar8) {
    fVar8 = 100.0;
  }
  if (fVar8 < 10.0) {
    fVar8 = 10.0;
  }
  *(float *)(DAT_08ac5c90 + 0x154) = fVar8;
  FUN_08826304(uVar3);
  FUN_089f50a0(*(undefined4 *)(param_1 + 0x600),uVar3,DAT_08ac5c90,0);
  *(undefined4 *)(DAT_08ac5c90 + 0x154) = 0;
  DAT_08ac601e = 0;
  local_60[0] = (uint *)FUN_089f1308(uVar3);
  puVar4 = (undefined4 *)FUN_089f1490(local_60[0],DAT_08ac5c90,1);
  *puVar4 = 0x19000001;
  local_60[0] = puVar4 + 1;
  local_60[0] = (uint *)FUN_088bee94(param_1,local_60[0],param_1 + 0x628);
  local_60[0] = (uint *)FUN_088be010(local_60[0],param_1 + 0x64c,0);
  local_60[0] = (uint *)FUN_088be010(local_60[0],param_1 + 0x634,0);
  local_60[0] = (uint *)FUN_088be010(local_60[0],param_1 + 0x658,0);
  local_60[0] = (uint *)FUN_088be010(local_60[0],param_1 + 0x670,0);
  FUN_089e2574(local_60,*(undefined4 *)(param_1 + 0x640),1);
  uVar7 = 0;
  if (DAT_08abd5bc != (undefined4 *)0x0) {
    uVar7 = *DAT_08abd5bc;
  }
  FUN_089e2574(local_60,uVar7,1);
  FUN_089e2574(local_60,*(undefined4 *)(param_1 + 0x628),1);
  FUN_089e2574(local_60,*(undefined4 *)(param_1 + 0x64c),1);
  FUN_089e2574(local_60,*(undefined4 *)(param_1 + 0x634),1);
  FUN_089e2574(local_60,*(undefined4 *)(param_1 + 0x658),1);
  FUN_089e2574(local_60,*(undefined4 *)(param_1 + 0x670),1);
  *(undefined4 *)(DAT_08ac5c90 + 0x154) = 0x42480000;
  local_60[0] = (uint *)FUN_089e3014(DAT_08ac5c90,local_60[0],4);
  FUN_089f13c8(uVar3,local_60[0]);
  FUN_089f0a74(uVar3);
  *(undefined4 *)(DAT_08ac5c90 + 0x154) = 0;
  FUN_088bf128(param_1,uVar3,*(undefined4 *)(param_1 + 0x5f8));
  DAT_08ac601d = 0;
  FUN_088bf128(param_1,uVar3,*(undefined4 *)(param_1 + 0x5fc));
  DAT_08ac601d = 1;
  FUN_08824ab8(*(undefined4 *)(param_1 + 0x604),uVar3,DAT_08ac5c90);
  FUN_089f50a0(*(undefined4 *)(param_1 + 0x604),uVar3,DAT_08ac5c90,0);
  if (*(int *)(param_1 + 0x608) != 0) {
    FUN_08824ab8(*(undefined4 *)(param_1 + 0x608),uVar3,DAT_08ac5c90);
    FUN_089f50a0(*(undefined4 *)(param_1 + 0x608),uVar3,DAT_08ac5c90,0);
  }
  FUN_088262bc(uVar3);
  uVar3 = FUN_089f2178(0x3ff33333);
  FUN_089f1458(uVar3);
  FUN_089f303c(uVar3,&DAT_08a92d00,&DAT_08a92d08,1,2);
  FUN_089f303c(uVar3,&DAT_08a92d04,&DAT_08a92d10,1,3);
  uVar3 = FUN_089f2178(0x40000000);
  if ((*(float *)(param_1 + 0x680) == 0.0) && (*(float *)(param_1 + 0x67c) == 0.0))
  goto LAB_088c3598;
  fVar8 = (*(float *)(param_1 + 0x67c) - *(float *)(param_1 + 0x680)) * 0.2;
  if (0.1 < fVar8) {
    fVar5 = 0.1;
LAB_088c34f0:
    fVar6 = *(float *)(param_1 + 0x680);
  }
  else {
    fVar5 = -0.1;
    if (fVar8 < -0.1) goto LAB_088c34f0;
    fVar6 = *(float *)(param_1 + 0x680);
    fVar5 = fVar8;
  }
  if (*(float *)(param_1 + 0x67c) < fVar6) {
    fVar5 = *(float *)(param_1 + 0x684) - 0.002;
    *(float *)(param_1 + 0x684) = fVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x684) = 0;
  }
  fVar5 = *(float *)(param_1 + 0x680) + fVar5;
  *(float *)(param_1 + 0x680) = fVar5;
  if (fVar5 < 0.0) {
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0x680)) {
    local_34 = *(float *)(param_1 + 0x680) * 0.8;
    local_40 = 0x3f800000;
    local_3c = 0x3f800000;
    local_38 = 0x3f800000;
    FUN_089f1be8(uVar3,&local_40,1,0);
  }
LAB_088c3598:
  FUN_089f17b0(uVar3,0);
  FUN_08826328(uVar3);
  FUN_088c73ec(*(undefined4 *)(param_1 + 0x610),uVar3);
  uVar3 = FUN_089f2178(0x40400000);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x5f4),uVar3);
  return;
}

