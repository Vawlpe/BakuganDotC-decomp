#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cc858(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  undefined4 in_V7C;
  
  uVar4 = 0;
  if (*(float *)(DAT_08ac5928 + 0x34) < -0.8) {
    uVar4 = 0x3d00adfd;
  }
  else if (0.8 < *(float *)(DAT_08ac5928 + 0x34)) {
    uVar4 = 0xbd00adfd;
  }
  iVar3 = FUN_088e1948();
  if (*(char *)(iVar3 + 0x4a8) != '\0') {
    uVar4 = 0;
  }
  uVar4 = vmul_s(uVar4,in_V7C);
  auVar1 = vrot_q(uVar4,1,2,0,0);
  auVar2 = vrot_q(uVar4,3,1,0,0);
  vidt_q();
  vidt_q();
  auVar2._8_8_ = auVar2._0_8_;
  auVar2._4_4_ = auVar1._4_4_;
  auVar2._0_4_ = auVar1._0_4_;
  auVar1 = vtfm4_q(auVar2,*(undefined (*) [16])(param_1 + 0x30));
  if (0.62 < ABS(auVar1._0_4_)) {
    *(float *)*(undefined (*) [16])(param_1 + 0x30) = auVar1._0_4_;
    *(int *)(param_1 + 0x34) = auVar1._4_4_;
    *(int *)(param_1 + 0x38) = auVar1._8_4_;
    *(int *)(param_1 + 0x3c) = auVar1._12_4_;
  }
  return;
}

