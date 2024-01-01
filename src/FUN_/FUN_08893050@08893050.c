#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08893050(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  undefined4 in_V7C;
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
  
  uVar4 = vmul_s(param_1,in_V7C);
  auVar2 = vrot_q(uVar4,1,0,2,0);
  uStack_44 = auVar2._12_4_;
  auVar1 = vscl_t(auVar2._0_12_,param_2);
  local_50 = auVar1._0_4_;
  uStack_4c = auVar1._4_4_;
  uStack_48 = auVar1._8_4_;
  iVar3 = *(int *)(param_3 + 0x1a0);
  local_60 = *(undefined4 *)(iVar3 + 0x20);
  uStack_5c = *(undefined4 *)(iVar3 + 0x24);
  uStack_58 = *(undefined4 *)(iVar3 + 0x28);
  uStack_54 = *(undefined4 *)(iVar3 + 0x2c);
  local_40 = local_50;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  local_30 = local_60;
  uStack_2c = uStack_5c;
  uStack_28 = uStack_58;
  uStack_24 = uStack_54;
  FUN_0888ec9c(param_3,&local_60,&local_50,0);
  return;
}

