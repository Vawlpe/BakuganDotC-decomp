#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ea75c(int *param_1,int param_2)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 in_V7D;
  
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  if (*param_1 != 0) {
    iVar2 = *param_1;
    auVar1._4_4_ = (float)param_1[2] * 0.0002441406;
    auVar1._0_4_ = (float)param_1[1] * 0.0002441406;
    auVar1._8_4_ = (float)param_1[3] * 0.0002441406;
    auVar1 = vscl_t(auVar1,0x3dcccccd);
    *(int *)(iVar2 + 0x40) = auVar1._0_4_;
    *(int *)(iVar2 + 0x44) = auVar1._4_4_;
    *(int *)(iVar2 + 0x48) = auVar1._8_4_;
    *(undefined4 *)(iVar2 + 0x4c) = in_V7D;
  }
  return;
}

