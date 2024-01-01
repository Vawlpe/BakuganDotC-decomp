#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e9ea4(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = FUN_089e9d88();
  if (cVar3 != '\0') {
    auVar1._4_4_ = DAT_08ac5d68;
    auVar1._0_4_ = DAT_08ac5d68;
    auVar1._8_4_ = DAT_08ac5d68;
    auVar1 = vmul_t(*(undefined (*) [12])(param_2 + 0x20),auVar1);
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    auVar1 = vadd_t(*(undefined (*) [12])(param_2 + 0x10),auVar1);
    *param_3 = auVar1._0_4_;
    param_3[1] = auVar1._4_4_;
    param_3[2] = auVar1._8_4_;
    param_3[3] = uVar2;
  }
  return;
}

