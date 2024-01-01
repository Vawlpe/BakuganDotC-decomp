#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e6a14(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined (*pauVar3) [12];
  uint uVar4;
  
  uVar4 = vrndi_s();
  pauVar3 = (undefined (*) [12])(*(int *)(param_1 + 4) + (((uVar4 >> 0x10) << 3) >> 0x10) * 0x10);
  uVar2 = *(undefined4 *)pauVar3[1];
  auVar1 = vadd_t(*pauVar3,*param_2);
  *(int *)*pauVar3 = auVar1._0_4_;
  *(int *)(*pauVar3 + 4) = auVar1._4_4_;
  *(int *)(*pauVar3 + 8) = auVar1._8_4_;
  *(undefined4 *)pauVar3[1] = uVar2;
  return;
}

