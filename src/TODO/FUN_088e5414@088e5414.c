#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e5414(int param_1,int param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  undefined4 in_V74;
  
  *(int *)(param_1 + 0x460) = param_2;
  if (param_2 == 2) {
    auVar1._8_4_ = 0x3f800000;
    auVar1._0_8_ = 0x3f8000003f800000;
    auVar1._12_4_ = 0x3f800000;
    auVar1 = vsat0_q(auVar1);
    auVar1 = vscl_q(auVar1,in_V74);
    auVar1 = vf2iz_q(auVar1,0x17);
    uVar3 = vi2uc_q(auVar1);
    *(undefined4 *)(param_1 + 0x10c) = uVar3;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x1c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x18),1);
    iVar2 = *(int *)(param_1 + 0x3a0);
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x14) + 0x1c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x18),0);
    iVar2 = *(int *)(param_1 + 0x3a0);
  }
  if (iVar2 != 6) {
    if (*(int *)(param_1 + 0x460) == 0) {
      *(undefined *)(*(int *)(param_1 + 0x418) + 0x25) = 0;
    }
    else {
      *(undefined *)(*(int *)(param_1 + 0x418) + 0x25) = 1;
    }
  }
  return;
}

