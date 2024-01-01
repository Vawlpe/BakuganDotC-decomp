#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08871318(int param_1,char param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  int iVar4;
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [12];
  undefined4 uVar7;
  undefined4 in_V7D;
  undefined4 uVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FUN_08864660(param_1,*(undefined4 *)(param_1 + 0x3a8),param_2);
  pauVar6 = (undefined (*) [12])(param_1 + 0x80);
  uVar7 = vdot_t(*pauVar6,*pauVar6);
  uVar8 = vcmp_s(8,uVar7,*(undefined4 *)*pauVar6);
  vrsq_s(uVar7);
  uVar7 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
  uVar7 = vmul_s(uVar7,0xbf800000);
  auVar1 = vscl_t(*pauVar6,uVar7);
  local_60 = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  local_58 = auVar1._8_4_;
  pauVar5 = (undefined (*) [12])(param_1 + 0x300);
  iVar4 = FUN_088244ac(DAT_08ac5c70,0x3a,pauVar5,&local_60);
  *(int *)(iVar4 + 0x1fc) = param_1;
  if (param_1 != 0) {
    *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(param_1 + 0xc);
  }
  FUN_088706f0(param_1,0x13,0);
  uStack_54 = *(undefined4 *)(*(int *)(param_1 + 0x3a8) + 0x2c);
  auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 0x3a8) + 0x20),
                  *(undefined (*) [12])(param_1 + 0x20));
  local_60 = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  local_58 = auVar1._8_4_;
  *(undefined4 *)*pauVar6 = local_60;
  *(undefined4 *)(param_1 + 0x84) = uStack_5c;
  *(undefined4 *)(param_1 + 0x88) = local_58;
  *(undefined4 *)(param_1 + 0x8c) = uStack_54;
  uVar7 = atan2f(local_58,local_60);
  FUN_0886003c(uVar7,param_1);
  auVar3._4_4_ = uStack_5c;
  auVar3._0_4_ = local_60;
  auVar3._8_4_ = local_58;
  auVar2._4_4_ = uStack_5c;
  auVar2._0_4_ = local_60;
  auVar2._8_4_ = local_58;
  auVar1._4_4_ = uStack_5c;
  auVar1._0_4_ = local_60;
  auVar1._8_4_ = local_58;
  uVar7 = vdot_t(auVar1,auVar2);
  uVar8 = vcmp_s(8,uVar7,local_60);
  vrsq_s(uVar7);
  uVar7 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
  uVar7 = vmul_s(uVar7,0x42c80000);
  auVar1 = vscl_t(auVar3,uVar7);
  auVar1 = vadd_t(auVar1,*pauVar5);
  local_60 = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  local_58 = auVar1._8_4_;
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x140) = 0;
    FUN_08862b64(param_1,0x20008b,0,0);
    FUN_0885ff24(param_1,10,0);
    uVar7 = vdot_t(*pauVar6,*pauVar6);
    uVar8 = vcmp_s(8,uVar7,*(undefined4 *)*pauVar6);
    vrsq_s(uVar7);
    uVar7 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
    uVar7 = vmul_s(uVar7,0xc2a00000);
    auVar1 = vscl_t(*pauVar6,uVar7);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
  }
  else {
    *(undefined4 *)(param_1 + 0x3dc) = 0x3e99999a;
    iVar4 = FUN_088244ac(DAT_08ac5c70,0x3d,pauVar5,&local_60);
    *(int *)(iVar4 + 0x1fc) = param_1;
    if (param_1 != 0) {
      *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(param_1 + 0xc);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x140) = 0;
    FUN_08862b64(param_1,0x20008c,0,0);
    uVar7 = vdot_t(*pauVar6,*pauVar6);
    uVar8 = vcmp_s(8,uVar7,*(undefined4 *)*pauVar6);
    vrsq_s(uVar7);
    uVar7 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
    uVar7 = vmul_s(uVar7,0xc0a00000);
    auVar1 = vscl_t(*pauVar6,uVar7);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
  }
  uVar7 = DAT_08ac5c70;
  uVar8 = FUN_089bf0fc(0xc1f00000,&local_60);
  FUN_08823f5c(uVar7,0x3b,uVar8);
  FUN_088243d8(DAT_08ac5c70,0x3c,(undefined (*) [12])(param_1 + 0x20));
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x40;
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0xb,1);
  }
  FUN_08871308(param_1);
  return;
}

