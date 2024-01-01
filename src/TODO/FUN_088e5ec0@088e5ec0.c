#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088e5ec0(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = 0.0;
  iVar5 = *(int *)(param_1 + 0x3e0);
  if ((*(int *)(param_1 + 8) < 0x51) || (0x53 < *(int *)(param_1 + 8))) {
    if (iVar5 == 0) {
      fVar6 = *(float *)(param_1 + 0x34);
      goto LAB_088e5f78;
    }
    auVar3._8_8_ = *(undefined8 *)(iVar5 + 0x90);
    auVar3._4_4_ = *(undefined4 *)(iVar5 + 0x84);
    auVar3._0_4_ = *(undefined4 *)(iVar5 + 0x80);
    auVar2._12_4_ = DAT_08b0093c;
    auVar2._8_4_ = DAT_08b00938;
    auVar2._4_4_ = DAT_08b00934;
    auVar2._0_4_ = DAT_08b00930;
    auVar1 = vtfm4_q(auVar3,auVar2);
    fVar7 = (float)atan2f(auVar1._8_4_,auVar1._0_4_);
  }
  else if (iVar5 != 0) {
    auVar4._8_8_ = *(undefined8 *)(iVar5 + 0x90);
    auVar4._4_4_ = *(undefined4 *)(iVar5 + 0x84);
    auVar4._0_4_ = *(undefined4 *)(iVar5 + 0x80);
    auVar1._12_4_ = DAT_08b0093c;
    auVar1._8_4_ = DAT_08b00938;
    auVar1._4_4_ = DAT_08b00934;
    auVar1._0_4_ = DAT_08b00930;
    auVar1 = vtfm4_q(auVar4,auVar1);
    fVar7 = (float)atan2f(auVar1._8_4_,auVar1._0_4_);
  }
  fVar6 = *(float *)(param_1 + 0x34);
LAB_088e5f78:
  return fVar6 + fVar7;
}

