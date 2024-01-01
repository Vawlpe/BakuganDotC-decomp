#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08892f18(undefined4 param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar7 = *(int *)(param_2 + 0x1a0);
  uVar3 = *(undefined4 *)(iVar7 + 0x20);
  uVar4 = *(undefined4 *)(iVar7 + 0x24);
  uVar5 = *(undefined4 *)(iVar7 + 0x28);
  uVar6 = *(undefined4 *)(iVar7 + 0x2c);
  iVar8 = 0;
  iVar7 = *(int *)(param_2 + 0x1a0);
  while( true ) {
    fVar9 = *(float *)(iVar7 + 0x34);
    if (iVar8 == 0) {
      fVar9 = fVar9 + 0.7853982;
    }
    else if (iVar8 == 1) {
      fVar9 = fVar9 - 0.7853982;
    }
    uVar10 = vmul_s(fVar9,in_V7C);
    auVar2 = vrot_q(uVar10,1,0,2,0);
    uStack_44 = auVar2._12_4_;
    auVar1 = vscl_t(auVar2._0_12_,param_1);
    local_50 = auVar1._0_4_;
    uStack_4c = auVar1._4_4_;
    uStack_48 = auVar1._8_4_;
    local_60 = uVar3;
    uStack_5c = uVar4;
    uStack_58 = uVar5;
    uStack_54 = uVar6;
    iVar7 = FUN_0888ec9c(param_2,&local_60,&local_50,0);
    iVar8 = iVar8 + 1;
    if (iVar7 != 0) break;
    if (2 < iVar8) {
      return 0;
    }
    iVar7 = *(int *)(param_2 + 0x1a0);
  }
  return 1;
}

