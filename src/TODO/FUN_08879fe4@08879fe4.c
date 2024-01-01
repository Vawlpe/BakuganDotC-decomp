#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08879fe4(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  
  iVar5 = FUN_088663a0(*(undefined4 *)(param_1 + 0xb4));
  if (iVar5 == 0) {
    uVar6 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x34),in_V7C);
    auVar2 = vrot_q(uVar6,1,0,2,0);
    auVar1 = vscl_t(auVar2._0_12_,0x447a0000);
    *(int *)*param_2 = auVar1._0_4_;
    *(int *)(*param_2 + 4) = auVar1._4_4_;
    *(int *)(*param_2 + 8) = auVar1._8_4_;
    *(int *)param_2[1] = auVar2._12_4_;
    *(undefined4 *)(*param_2 + 4) = 0x43fa0000;
    uVar6 = *(undefined4 *)param_2[1];
    auVar1 = vadd_t(*param_2,*(undefined (*) [12])(*(int *)(param_1 + 0xb0) + 0x20));
    *(int *)*param_2 = auVar1._0_4_;
    *(int *)(*param_2 + 4) = auVar1._4_4_;
    *(int *)(*param_2 + 8) = auVar1._8_4_;
    *(undefined4 *)param_2[1] = uVar6;
  }
  else {
    uVar6 = *(undefined4 *)(iVar5 + 0x24);
    uVar3 = *(undefined4 *)(iVar5 + 0x28);
    uVar4 = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)*param_2 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(*param_2 + 4) = uVar6;
    *(undefined4 *)(*param_2 + 8) = uVar3;
    *(undefined4 *)param_2[1] = uVar4;
    *(float *)(*param_2 + 4) = *(float *)(*param_2 + 4) + 500.0;
  }
  return;
}

