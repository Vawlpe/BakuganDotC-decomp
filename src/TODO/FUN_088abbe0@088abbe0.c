#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088abbe0(undefined4 param_1,int param_2,int param_3,float *param_4,char *param_5)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  int iVar3;
  undefined (*pauVar4) [12];
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uVar5 = 0;
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)(param_3 + 0x14) + 0x54))
                    (param_3 + *(short *)(*(int *)(param_3 + 0x14) + 0x50));
  if ((iVar3 == 0) &&
     (iVar3 = (**(code **)(*(int *)(param_3 + 0x14) + 100))
                        (param_3 + *(short *)(*(int *)(param_3 + 0x14) + 0x60)), iVar3 == 0)) {
    return 0;
  }
  iVar3 = FUN_089bfa40(100);
  if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x440) == 9 || (*(int *)(iVar3 + 0x440) == 6)))) {
    return 0;
  }
  pauVar4 = (undefined (*) [12])(DAT_08ac5c90 + 0x50);
  local_80 = *(undefined4 *)*pauVar4;
  uStack_78 = *(undefined4 *)(DAT_08ac5c90 + 0x58);
  uStack_74 = *(undefined4 *)(DAT_08ac5c90 + 0x5c);
  local_70 = *(undefined4 *)(param_3 + 0x20);
  uStack_68 = *(undefined4 *)(param_3 + 0x28);
  uStack_84 = *(undefined4 *)(param_3 + 0x2c);
  local_6c = *(float *)(param_3 + 0x24) + *(float *)(*(int *)(param_3 + 0x4bc) + 4) * 0.5;
  auVar1._4_4_ = local_6c;
  auVar1._0_4_ = local_70;
  auVar1._8_4_ = uStack_68;
  auVar1 = vsub_t(auVar1,*pauVar4);
  local_90 = auVar1._0_4_;
  uStack_8c = auVar1._4_4_;
  uStack_88 = auVar1._8_4_;
  uStack_64 = uStack_84;
  if (*(char *)(param_2 + 0x289) == '\0') {
    DAT_08b00414 = *(float *)(DAT_08ac5c90 + 0x54) + 50.0;
    DAT_08b00410 = local_80;
    DAT_08b00418 = uStack_78;
    DAT_08b0041c = uStack_74;
    DAT_08b00420 = local_90;
    DAT_08b00424 = uStack_8c;
    DAT_08b00428 = uStack_88;
    DAT_08b0042c = uStack_84;
    if (*(int *)(param_2 + 0x318) != 0) {
      local_7c = DAT_08b00414;
      iVar3 = FUN_089ea250(*(undefined4 *)(param_2 + 0x318),&DAT_08b00400);
      if (iVar3 == 0) {
        if ((*param_4 < 1.0) && (*param_5 == '\0')) {
          *param_5 = '\x01';
        }
      }
      else {
        fVar6 = *param_4;
        uVar5 = 1;
        *param_4 = fVar6 - 0.1;
        if (fVar6 - 0.1 < 0.5) {
          *param_4 = 0.5;
        }
        if (*param_5 == '\x01') {
          *param_5 = '\0';
        }
      }
    }
  }
  else {
    auVar1 = vsub_t(*pauVar4,auVar1);
    DAT_08b00680 = auVar1._0_4_;
    DAT_08b00684 = auVar1._4_4_;
    DAT_08b00688 = auVar1._8_4_;
    auVar2._4_4_ = local_6c;
    auVar2._0_4_ = local_70;
    auVar2._8_4_ = uStack_68;
    auVar1 = vsub_t(auVar2,auVar1);
    DAT_08b00690 = auVar1._0_4_;
    DAT_08b00694 = auVar1._4_4_;
    DAT_08b00698 = auVar1._8_4_;
    DAT_08b006a0 = *(float *)(*(int *)(param_3 + 0x4bc) + 0xc) * 0.5;
    DAT_08b0068c = DAT_08b006a0 * DAT_08b006a0;
    uVar7 = vdot_t(auVar1,auVar1);
    DAT_08b0069c = vsqrt_s(uVar7);
    local_90 = DAT_08b00690;
    uStack_8c = DAT_08b00694;
    uStack_88 = DAT_08b00698;
    local_80 = DAT_08b00680;
    local_7c = (float)DAT_08b00684;
    uStack_78 = DAT_08b00688;
    local_60 = DAT_08b00690;
    uStack_5c = DAT_08b00694;
    uStack_58 = DAT_08b00698;
    uStack_54 = uStack_84;
    uVar7 = FUN_089e588c(&DAT_08b006b0);
    iVar3 = FUN_089e5be4(*(int *)(param_2 + 0x140) + 0x30,uVar7,&local_90,0xffffffff);
    if (iVar3 == 0) {
      if ((*param_4 < 1.0) && (*param_5 == '\0')) {
        *param_5 = '\x01';
      }
    }
    else {
      fVar6 = *param_4;
      uVar5 = 1;
      *param_4 = fVar6 - 0.1;
      if (fVar6 - 0.1 < 0.5) {
        *param_4 = 0.5;
      }
      if (*param_5 == '\x01') {
        *param_5 = '\0';
      }
    }
  }
  return uVar5;
}

