#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a57b0(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  undefined4 in_V70;
  undefined4 in_V7C;
  undefined4 in_V7F;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  uVar4 = vrndf1_s();
  uVar4 = vsub_s(uVar4,in_V7F);
  local_20 = vmul_s(uVar4,in_V70);
  uVar4 = vmul_s(local_20,in_V7C);
  auVar2 = vrot_q(uVar4,1,0,2,0);
  uStack_24 = auVar2._12_4_;
  auVar1 = vscl_t(auVar2._0_12_,0x42f00000);
  auVar1 = vadd_t(auVar1,*(undefined (*) [12])(param_1 + 0x20));
  local_30 = auVar1._0_4_;
  uStack_2c = auVar1._4_4_;
  uStack_28 = auVar1._8_4_;
  iVar3 = FUN_0886f934(0x15,4,&local_30);
  FUN_08862ba4(iVar3);
  *(undefined4 *)(iVar3 + 0x150) = 4;
  FUN_088625e8(iVar3,5);
  FUN_0889acb4(iVar3,3);
  FUN_0889ab54(iVar3,1);
  *(undefined4 *)(*(int *)(iVar3 + 0x168) + 0x14) = 0xffffbff3;
  FUN_08888a64(iVar3 + 0x434,0);
  *(undefined4 *)(iVar3 + 0x6b8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined *)(iVar3 + 0x6f5) = 0;
  FUN_08886c58(0x42700000,iVar3 + 0x434);
  (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))(iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x38));
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}

