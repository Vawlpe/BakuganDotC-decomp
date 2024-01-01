#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088de50c(int param_1,int param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_V7C;
  
  iVar2 = FUN_088de4fc();
  if (iVar2 == 0) {
    uVar3 = 0x41a00000;
    if (param_2 == 2) {
      uVar3 = 0xc1a00000;
    }
    uVar4 = vmul_s(*(float *)(param_1 + 0x34) + 1.570796,in_V7C);
    auVar1 = vrot_q(uVar4,1,0,2,0);
    vscl_t(auVar1._0_12_,uVar3);
  }
  return;
}

