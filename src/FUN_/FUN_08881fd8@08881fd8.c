#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08881fd8(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  int iVar4;
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [12];
  undefined4 in_V00;
  undefined4 uVar7;
  undefined4 in_V7D;
  undefined4 uVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (0x78 < *(int *)(param_1 + 0xf4)) {
    FUN_08824658(DAT_08b00920,0x278,param_1 + 0x60);
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    iVar4 = *(int *)(param_1 + 0xf4);
  }
  else {
    iVar4 = *(int *)(param_1 + 0xf4);
  }
  if (iVar4 != 0) {
    FUN_08877af0(0x42700000,0x42f00000,param_1,1,0);
    FUN_088787a0(param_1);
    pauVar6 = (undefined (*) [12])(param_1 + 0x60);
    if ((1 < *(int *)(param_1 + 0xf4)) &&
       (iVar4 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar6,
                             (undefined (*) [12])(param_1 + 0x70),0x91,3,0,0x31bf337e), iVar4 != 0))
    {
      FUN_08823f5c(DAT_08b00920,0xc5,pauVar6);
      FUN_08824658(DAT_08b00920,0x278,pauVar6);
      FUN_08877060(param_1,0x200099,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    pauVar5 = (undefined (*) [12])(param_1 + 0x80);
    uVar7 = vdot_t(*pauVar5,*pauVar5);
    uVar8 = vcmp_s(8,uVar7,in_V00);
    vrsq_s(uVar7);
    uVar7 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar5,uVar7);
    local_40 = auVar1._0_4_;
    uStack_3c = auVar1._4_4_;
    uStack_38 = auVar1._8_4_;
    auVar2._8_4_ = DAT_08b001a8;
    auVar2._4_4_ = DAT_08b001a4;
    auVar2._0_4_ = DAT_08b001a0;
    auVar2 = vcrsp_t(auVar2,auVar1);
    uVar7 = vdot_t(auVar2,auVar2);
    uVar8 = vcmp_s(8,uVar7,auVar2._0_4_);
    vrsq_s(uVar7);
    uVar7 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar2,uVar7);
    local_60 = auVar2._0_4_;
    uStack_5c = auVar2._4_4_;
    uStack_58 = auVar2._8_4_;
    auVar1 = vcrsp_t(auVar1,auVar2);
    local_50 = auVar1._0_4_;
    uStack_4c = auVar1._4_4_;
    uStack_48 = auVar1._8_4_;
    auVar3 = vidt_q();
    uStack_54 = auVar3._0_4_;
    uStack_44 = auVar3._4_4_;
    uStack_34 = auVar3._8_4_;
    auVar3 = vidt_q();
    local_30 = auVar3._0_4_;
    uStack_2c = auVar3._4_4_;
    uStack_28 = auVar3._8_4_;
    uStack_24 = auVar3._12_4_;
    FUN_08824a4c(DAT_08b00920,0x278,&local_60,pauVar6);
    FUN_088249f8(DAT_08b00920,0x278,pauVar5,pauVar6);
    uVar7 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar6,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
  }
  return;
}

