#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0881a608(undefined4 param_1,float param_2,float *param_3,char param_4)

{
  undefined auVar1 [16];
  float fVar2;
  float fVar3;
  undefined auVar4 [16];
  int iVar5;
  undefined4 *puVar6;
  undefined (*pauVar7) [16];
  float *pfVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  if (param_3[7] == 0.0) {
    return 0;
  }
  if (param_4 == '\0') {
    fVar10 = param_3[7];
    iVar5 = FUN_089e565c((int)fVar10 + 0x30,(int)param_2 + 0x30,&local_a0,param_1);
    if (iVar5 == 0) {
      iVar5 = *(int *)((int)fVar10 + 0x114);
      iVar9 = *(int *)(iVar5 + 4);
      puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x44))(iVar5 + *(short *)(iVar9 + 0x40));
      local_80 = *puVar6;
      local_7c = (float)puVar6[1];
      uStack_78 = puVar6[2];
      uStack_74 = puVar6[3];
      iVar5 = *(int *)(*(int *)((int)param_2 + 0x114) + 4);
      pauVar7 = (undefined (*) [16])
                (**(code **)(iVar5 + 0x44))
                          (*(int *)((int)param_2 + 0x114) + (int)*(short *)(iVar5 + 0x40));
      local_70 = *(undefined4 *)*pauVar7;
      uStack_6c = *(undefined4 *)(*pauVar7 + 4);
      uStack_68 = *(undefined4 *)(*pauVar7 + 8);
      uStack_64 = *(undefined4 *)(*pauVar7 + 0xc);
      auVar4._4_4_ = local_7c;
      auVar4._0_4_ = local_80;
      auVar4._8_4_ = uStack_78;
      auVar4._12_4_ = uStack_74;
      auVar1._4_4_ = local_7c;
      auVar1._0_4_ = local_80;
      auVar1._8_4_ = uStack_78;
      auVar1._12_4_ = uStack_74;
      auVar1 = vsub_q(*pauVar7,auVar1);
      auVar1 = vscl_q(auVar1,0x3f666666);
      auVar1 = vadd_q(auVar4,auVar1);
      local_a0 = auVar1._0_4_;
      uStack_8c = auVar1._4_4_;
      fStack_98 = auVar1._8_4_;
      fStack_94 = auVar1._12_4_;
      local_9c = local_7c;
      local_90 = local_a0;
      fStack_88 = fStack_98;
      fStack_84 = fStack_94;
    }
  }
  else {
    if ((*(uint *)((int)param_2 + 0x130) & 0x13) != 0) {
      return 0;
    }
    iVar5 = FUN_089e565c(param_3[5],(int)param_2 + 0x30,&local_a0,param_1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  *param_3 = local_a0;
  param_3[1] = local_9c;
  param_3[2] = fStack_98;
  param_3[3] = fStack_94;
  param_3[4] = param_2;
  DAT_08ab02f4 = (*(uint *)((int)param_2 + 0x130) & 8) != 0;
  DAT_08ab02f8 = param_3[6];
  *(uint *)((int)param_2 + 0x130) = *(uint *)((int)param_2 + 0x130) | 0x10;
  fVar10 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *(float *)((int)param_2 + 0x150) = *param_3;
  *(float *)((int)param_2 + 0x154) = fVar10;
  *(float *)((int)param_2 + 0x158) = fVar2;
  *(float *)((int)param_2 + 0x15c) = fVar3;
  *(float *)((int)param_2 + 0x170) = param_3[0xb];
  *(float *)((int)param_2 + 0x16c) = param_3[10];
  *(float *)((int)param_2 + 0x168) = param_3[9];
  *(float *)((int)param_2 + 0x160) = param_3[6];
  *(float *)((int)param_2 + 0x164) = param_3[8];
  *(undefined4 *)((int)param_2 + 0x174) = DAT_08ab02f0;
  if (((uint)param_3[0xc] & 1) == 0) {
    fVar10 = param_3[7];
  }
  else {
    iVar5 = *(int *)(*(int *)((int)param_3[5] + 0xe4) + 4);
    pfVar8 = (float *)(**(code **)(iVar5 + 0x44))
                                (*(int *)((int)param_3[5] + 0xe4) + (int)*(short *)(iVar5 + 0x40));
    local_60 = *param_3;
    fStack_5c = param_3[1];
    local_58 = param_3[2];
    fStack_54 = param_3[3];
    uVar11 = atan2f(local_58 - pfVar8[2],local_60 - *pfVar8);
    *(undefined4 *)((int)param_2 + 0x168) = uVar11;
    fVar10 = param_3[7];
  }
  if (fVar10 != 0.0) {
    *(undefined4 *)((int)param_3[7] + 0x140) = DAT_08ab02f0;
  }
  return 1;
}

