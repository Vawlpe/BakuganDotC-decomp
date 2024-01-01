#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08884480(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    iVar5 = FUN_088663a0(*(undefined4 *)(param_1 + 0xb4));
    if (iVar5 == 0) {
      uVar6 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x34),in_V7C);
      auVar2 = vrot_q(uVar6,1,0,2,0);
      uStack_74 = auVar2._12_4_;
      auVar1 = vscl_t(auVar2._0_12_,0x43fa0000);
      auVar1 = vadd_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0xb0) + 0x20));
      local_80 = auVar1._0_4_;
      uStack_7c = auVar1._4_4_;
      uStack_78 = auVar1._8_4_;
    }
    else {
      local_80 = *(undefined4 *)(iVar5 + 0x20);
      uStack_7c = *(undefined4 *)(iVar5 + 0x24);
      uStack_78 = *(undefined4 *)(iVar5 + 0x28);
      uStack_74 = *(undefined4 *)(iVar5 + 0x2c);
    }
    *(undefined4 *)(param_1 + 0x60) = local_80;
    *(undefined4 *)(param_1 + 100) = uStack_7c;
    *(undefined4 *)(param_1 + 0x68) = uStack_78;
    *(undefined4 *)(param_1 + 0x6c) = uStack_74;
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar6 = *(undefined4 *)(param_1 + 100);
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    uVar4 = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(iVar5 + 100) = uVar6;
    *(undefined4 *)(iVar5 + 0x68) = uVar3;
    *(undefined4 *)(iVar5 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  else {
    if (0x31 < *(int *)(param_1 + 0xf4)) {
      FUN_08876ee0(param_1);
      return;
    }
    if ((0x20 < *(int *)(param_1 + 0xf4)) && (*(int *)(param_1 + 0xf4) < 0x2d)) {
      local_50 = *(undefined4 *)(param_1 + 0x60);
      uStack_48 = *(undefined4 *)(param_1 + 0x68);
      uStack_44 = *(undefined4 *)(param_1 + 0x6c);
      local_4c = *(float *)(param_1 + 100) + 300.0;
      local_60 = 0;
      local_5c = 0xc3960000;
      local_58 = 0;
      local_54 = 0;
      FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,&local_50,&local_60,0x75,3,0,0x31bf337e);
    }
  }
  return;
}

