#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887d79c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 in_V7C;
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    iVar5 = FUN_088663a0(*(undefined4 *)(param_1 + 0xb4));
    puVar6 = (undefined4 *)(param_1 + 0x60);
    if (iVar5 == 0) {
      uVar7 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x34),in_V7C);
      auVar2 = vrot_q(uVar7,1,0,2,0);
      uStack_74 = auVar2._12_4_;
      auVar1 = vscl_t(auVar2._0_12_,0x43fa0000);
      auVar1 = vadd_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0xb0) + 0x20));
      local_80 = auVar1._0_4_;
      local_7c = auVar1._4_4_;
      uStack_78 = auVar1._8_4_;
      iVar5 = *(int *)(param_1 + 0xb0);
      local_70 = *(undefined4 *)(iVar5 + 0x20);
      uStack_6c = *(undefined4 *)(iVar5 + 0x24);
      uStack_68 = *(undefined4 *)(iVar5 + 0x28);
      uStack_64 = *(undefined4 *)(iVar5 + 0x2c);
    }
    else {
      local_80 = *(undefined4 *)(iVar5 + 0x20);
      local_7c = *(float *)(iVar5 + 0x24);
      uStack_78 = *(undefined4 *)(iVar5 + 0x28);
      uStack_74 = *(undefined4 *)(iVar5 + 0x2c);
      local_70 = *(undefined4 *)(iVar5 + 0x20);
      uStack_6c = *(undefined4 *)(iVar5 + 0x24);
      uStack_68 = *(undefined4 *)(iVar5 + 0x28);
      uStack_64 = *(undefined4 *)(iVar5 + 0x2c);
    }
    local_7c = local_7c + 1000.0;
    iVar5 = FUN_0889d57c(&local_80,&local_60);
    if (iVar5 == 0) {
      *puVar6 = local_70;
      *(undefined4 *)(param_1 + 100) = uStack_6c;
      *(undefined4 *)(param_1 + 0x68) = uStack_68;
      *(undefined4 *)(param_1 + 0x6c) = uStack_64;
      iVar5 = *(int *)(param_1 + 0xbc);
    }
    else {
      *puVar6 = local_60;
      *(undefined4 *)(param_1 + 100) = uStack_5c;
      *(undefined4 *)(param_1 + 0x68) = uStack_58;
      *(undefined4 *)(param_1 + 0x6c) = uStack_54;
      iVar5 = *(int *)(param_1 + 0xbc);
    }
    uVar7 = *(undefined4 *)(param_1 + 100);
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    uVar4 = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(iVar5 + 0x60) = *puVar6;
    *(undefined4 *)(iVar5 + 100) = uVar7;
    *(undefined4 *)(iVar5 + 0x68) = uVar3;
    *(undefined4 *)(iVar5 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  else {
    if (0x40 < *(int *)(param_1 + 0xf4)) {
      FUN_08876ee0(param_1);
      return;
    }
    if (0x19 < *(int *)(param_1 + 0xf4)) {
      local_50 = 0;
      local_48 = 0;
      local_4c = 0x44960000;
      local_44 = 0;
      FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,param_1 + 0x60,&local_50,0x3f,3,0,
                   0x31bf337e);
    }
  }
  return;
}

