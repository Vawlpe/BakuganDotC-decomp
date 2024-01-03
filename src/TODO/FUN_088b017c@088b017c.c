#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b017c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 in_V7D;
  undefined4 local_a0;
  float local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *local_38;
  undefined4 *local_34;
  
  if (((*(char *)(param_1 + 0x335) != '\0') && (*(float *)(param_1 + 0x6c) <= 0.0)) &&
     (iVar4 = *(int *)(DAT_08abd5b0 + 0x1c), iVar4 != 0)) {
    iVar5 = *(int *)(iVar4 + 0x16c);
    while( true ) {
      iVar6 = *(int *)(iVar4 + 4);
      if ((iVar5 == 4) && (*(int *)(iVar4 + 0x1fc) == param_1)) {
        FUN_089f5124(*(undefined4 *)(iVar4 + 0x214),iVar4);
      }
      if (iVar6 == 0) break;
      iVar5 = *(int *)(iVar6 + 0x16c);
      iVar4 = iVar6;
    }
  }
  switch(*(undefined4 *)(param_1 + 800)) {
  case 0:
    local_a0 = *(undefined4 *)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x24);
    uStack_98 = *(undefined4 *)(param_1 + 0x28);
    uStack_94 = *(undefined4 *)(param_1 + 0x2c);
    local_9c = fVar7;
    iVar4 = FUN_088a9614(param_1);
    local_9c = fVar7 + *(float *)(iVar4 + 4);
    FUN_08824594(DAT_08abd5b0,4,&local_a0,param_1);
    *(undefined2 *)(param_1 + 0x32c) = 0;
    *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
    goto LAB_088b0330;
  case 1:
LAB_088b0330:
    local_34 = &DAT_08b00680;
    local_38 = &DAT_08b00690;
    if (*(short *)(param_1 + 0x32c) == 0x28) {
      iVar4 = DONE_NotZero_DAT_08AC5258();
      if (iVar4 == 0) {
        sVar3 = *(short *)(param_1 + 0x32c);
      }
      else {
        uVar8 = DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar8,0x2000e7,*(int *)(param_1 + 0x130) + 0xb0,0,1);
        sVar3 = *(short *)(param_1 + 0x32c);
      }
    }
    else {
      sVar3 = *(short *)(param_1 + 0x32c);
    }
    *(short *)(param_1 + 0x32c) = sVar3 + 1;
    FUN_089df8a4(param_1);
    FUN_089dedf8(param_1,&local_90,"break_head");
    local_70 = local_90;
    uStack_6c = uStack_8c;
    uStack_68 = uStack_88;
    uStack_64 = uStack_84;
    if ((*(char *)(param_1 + 0xb0) != '\0') ||
       (iVar4 = FUN_089df684(0x3f4ccccd,param_1), iVar4 != 0)) {
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
    }
    *local_34 = local_70;
    local_34[1] = uStack_6c;
    local_34[2] = uStack_68;
    local_34[3] = uStack_64;
    local_78 = 0x41200000;
    local_7c = 0x41200000;
    local_80 = 0x41200000;
    local_74 = 0;
    auVar2._8_4_ = 0x41200000;
    auVar2._0_8_ = 0x4120000041200000;
    auVar1._8_4_ = DAT_08b008e8;
    auVar1._4_4_ = DAT_08b008e4;
    auVar1._0_4_ = DAT_08b008e0;
    auVar1 = vmul_t(auVar1,auVar2);
    local_90 = auVar1._0_4_;
    uStack_8c = auVar1._4_4_;
    uStack_88 = auVar1._8_4_;
    *local_38 = local_90;
    local_38[1] = uStack_8c;
    local_38[2] = uStack_88;
    local_38[3] = in_V7D;
    DAT_08b006a0 = 0x41200000;
    DAT_08b0068c = 0x42c80000;
    iVar4 = FUN_0881a83c(0x31bf337e,&DAT_08b006b0,2);
    if (iVar4 != 0) {
      FUN_08824594(DAT_08abd5b0,9,&local_70,param_1);
      iVar4 = DONE_NotZero_DAT_08AC5258();
      if (iVar4 != 0) {
        uVar8 = DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar8,0x20000d,&local_70,0,1);
      }
      local_60 = local_70;
      local_5c = uStack_6c;
      uStack_58 = uStack_68;
      uStack_54 = uStack_64;
      local_5c = FUN_0889d6e4();
      FUN_08824594(DAT_08abd5b0,10,&local_60,param_1);
    }
    break;
  case 2:
    *(undefined2 *)(param_1 + 0x32c) = 0x5a;
    if (*(int *)(*(int *)(param_1 + 0x130) + 0x14) == 0) {
      iVar4 = *(int *)(param_1 + 800);
    }
    else {
      FUN_08a1473c(*(undefined4 *)(*(int *)(param_1 + 0x130) + 0x14),
                   *(undefined2 *)(*(int *)(param_1 + 0x130) + 0x20));
      iVar4 = *(int *)(param_1 + 800);
    }
    *(int *)(param_1 + 800) = iVar4 + 1;
  case 3:
    if (*(short *)(param_1 + 0x32c) == 0) {
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
    }
    else {
      *(short *)(param_1 + 0x32c) = *(short *)(param_1 + 0x32c) + -1;
    }
    break;
  case 4:
    if (*(short *)(param_1 + 0x32c) == 0x20) {
      *(undefined4 *)(param_1 + 0x338) = 0x3f800000;
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
    }
    else {
      if ((*(ushort *)(param_1 + 0x32c) & 2) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x338) = uVar8;
      *(short *)(param_1 + 0x32c) = *(short *)(param_1 + 0x32c) + 1;
    }
    break;
  case 5:
    fVar7 = *(float *)(param_1 + 0x338) - 0.05;
    *(float *)(param_1 + 0x338) = fVar7;
    if (fVar7 <= 0.0) {
      *(undefined4 *)(param_1 + 0x338) = 0;
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
    }
    break;
  case 6:
    FUN_089de940(param_1,0);
    *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
  }
  return;
}

