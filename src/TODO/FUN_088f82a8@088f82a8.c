#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088f82a8(int param_1)

{
  undefined auVar1 [12];
  undefined (*pauVar2) [12];
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 4);
  pauVar2 = (undefined (*) [12])
            (**(code **)(iVar3 + 0x14))(*(int *)(param_1 + 8) + (int)*(short *)(iVar3 + 0x10));
  auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0xa0),*pauVar2);
  fVar4 = (float)vdot_t(auVar1,auVar1);
  if (fVar4 < 1.192093e-07) {
    return 0;
  }
  return 1;
}

