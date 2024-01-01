#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ea594(int *param_1,int *param_2)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 in_V7D;
  
  if (*param_1 != 0) {
    iVar2 = *param_1;
    auVar1._4_4_ = (float)param_2[1] * 0.0002441406;
    auVar1._0_4_ = (float)*param_2 * 0.0002441406;
    auVar1._8_4_ = (float)param_2[2] * 0.0002441406;
    auVar1 = vscl_t(auVar1,0x41a00000);
    *(int *)(iVar2 + 0x20) = auVar1._0_4_;
    *(int *)(iVar2 + 0x24) = auVar1._4_4_;
    *(int *)(iVar2 + 0x28) = auVar1._8_4_;
    *(undefined4 *)(iVar2 + 0x2c) = in_V7D;
  }
  return;
}

