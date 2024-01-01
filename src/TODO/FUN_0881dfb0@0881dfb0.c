#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881dfb0(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined auVar4 [16];
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
    puVar6 = *(undefined4 **)(param_1 + 0x164);
    auVar2._8_8_ = *(undefined8 *)(puVar6 + 4);
    auVar2._4_4_ = puVar6[1];
    auVar2._0_4_ = *puVar6;
    auVar2 = vtfm4_q(auVar2,*(undefined (*) [16])(param_1 + 0x180));
    *(int *)(param_1 + 0x60) = auVar2._0_4_;
    *(int *)(param_1 + 100) = auVar2._4_4_;
    *(int *)(param_1 + 0x68) = auVar2._8_4_;
    *(int *)(param_1 + 0x6c) = auVar2._12_4_;
    if ((*(uint *)(param_1 + 0xd0) & 0x10) == 0) {
      iVar5 = *(int *)(param_1 + 0x160);
      goto LAB_0881e048;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    puVar6 = *(undefined4 **)(param_1 + 0x164);
    auVar4._8_8_ = *(undefined8 *)(puVar6 + 4);
    auVar4._4_4_ = puVar6[1];
    auVar4._0_4_ = *puVar6;
    auVar2 = vtfm4_q(auVar4,*(undefined (*) [16])(param_1 + 0x90));
    *(int *)(param_1 + 0x80) = auVar2._0_4_;
    *(int *)(param_1 + 0x84) = auVar2._4_4_;
    *(int *)(param_1 + 0x88) = auVar2._8_4_;
    *(int *)(param_1 + 0x8c) = auVar2._12_4_;
  }
  iVar5 = *(int *)(param_1 + 0x160);
LAB_0881e048:
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
    uVar3 = *(undefined4 *)(*(undefined (**) [12])(param_1 + 0x160))[1];
    auVar1 = vadd_t(**(undefined (**) [12])(param_1 + 0x160),*(undefined (*) [12])(param_1 + 0x180))
    ;
    *(int *)(param_1 + 0x60) = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  return;
}

