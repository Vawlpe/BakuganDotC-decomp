#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089ea118(undefined (*param_1) [12],int param_2,undefined (*param_3) [12])

{
  undefined auVar1 [12];
  uint uVar2;
  undefined (*pauVar3) [12];
  undefined4 uVar4;
  undefined4 in_V7D;
  undefined4 uVar5;
  undefined local_80 [12];
  undefined auStack_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar2 = FUN_089e98b0();
  if ((uVar2 & 0xff) != 0) {
    uStack_44 = *(undefined4 *)param_1[1];
    auVar1 = vadd_t(*param_1,*(undefined (*) [12])(param_1[1] + 4));
    local_50 = auVar1._0_4_;
    uStack_4c = auVar1._4_4_;
    uStack_48 = auVar1._8_4_;
    auVar1 = vscl_t(auVar1,0x3f000000);
    DAT_08b00180 = auVar1._0_4_;
    DAT_08b00184 = auVar1._4_4_;
    DAT_08b00188 = auVar1._8_4_;
    DAT_08b0018c = in_V7D;
    local_60 = DAT_08b00180;
    uStack_5c = DAT_08b00184;
    uStack_58 = DAT_08b00188;
    FUN_089e8894(param_2 + 0x10,&DAT_08b00180,auStack_70,local_80);
    pauVar3 = (undefined (*) [12])FUN_08a32460(param_1);
    uVar4 = *(undefined4 *)pauVar3[1];
    auVar1 = vsub_t(*pauVar3,local_80);
    *(int *)*param_3 = auVar1._0_4_;
    *(int *)(*param_3 + 4) = auVar1._4_4_;
    *(int *)(*param_3 + 8) = auVar1._8_4_;
    *(undefined4 *)param_3[1] = uVar4;
    uVar4 = vdot_t(*param_3,*param_3);
    uVar5 = vcmp_s(8,uVar4,*(undefined4 *)*param_3);
    vrsq_s(uVar4);
    uVar4 = vcmovt_s(in_V7D,(byte)uVar5 & 1);
    uVar4 = vmul_s(uVar4,*(undefined4 *)(param_2 + 0x40));
    auVar1 = vscl_t(*param_3,uVar4);
    *(int *)*param_3 = auVar1._0_4_;
    *(int *)(*param_3 + 4) = auVar1._4_4_;
    *(int *)(*param_3 + 8) = auVar1._8_4_;
    *(undefined4 *)param_3[1] = in_V7D;
    uVar4 = *(undefined4 *)param_3[1];
    auVar1 = vadd_t(*param_3,local_80);
    *(int *)*param_3 = auVar1._0_4_;
    *(int *)(*param_3 + 4) = auVar1._4_4_;
    *(int *)(*param_3 + 8) = auVar1._8_4_;
    *(undefined4 *)param_3[1] = uVar4;
  }
  return uVar2;
}

