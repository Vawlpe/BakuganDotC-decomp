#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08907780(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined local_50 [12];
  undefined4 uStack_44;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (iVar5 = FUN_088deefc(*(undefined4 *)(param_1 + 0x1c),0x2f), iVar5 != 0)) {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar6 = *(int *)(iVar5 + 0x130);
    FUN_088ff3f4(local_50);
    auVar1 = vscl_t(*(undefined (*) [12])(*(int *)(param_1 + 0x24) + 0x50),0x3dcccccd);
    auVar1 = vadd_t(local_50,auVar1);
    *(undefined4 *)(iVar6 + 0xb0) = auVar1._0_4_;
    *(int *)(iVar6 + 0xb4) = auVar1._4_4_;
    *(int *)(iVar6 + 0xb8) = auVar1._8_4_;
    *(undefined4 *)(iVar6 + 0xbc) = uStack_44;
    uVar2 = *(undefined4 *)(iVar6 + 0xb4);
    uVar3 = *(undefined4 *)(iVar6 + 0xb8);
    uVar4 = *(undefined4 *)(iVar6 + 0xbc);
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar6 + 0xb0);
    *(undefined4 *)(iVar5 + 0x24) = uVar2;
    *(undefined4 *)(iVar5 + 0x28) = uVar3;
    *(undefined4 *)(iVar5 + 0x2c) = uVar4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x130) + 0xbc) = 0x3f800000;
  }
  return;
}

