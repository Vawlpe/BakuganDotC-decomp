#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089de9a8(int param_1,undefined (*param_2) [16])

{
  undefined auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  undefined4 in_V74;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  *(undefined *)(param_1 + 0xb9) = 1;
  *(undefined4 *)(param_1 + 0x110) = 0;
  uVar3 = vmin_s(*(undefined4 *)(*param_2 + 0xc),in_V7F);
  fVar2 = (float)vmax_s(uVar3,in_V7D);
  *(float *)(param_1 + 0x114) = fVar2 * 0.005 + -0.005;
  auVar1 = vsat0_q(*param_2);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar3 = vi2uc_q(auVar1);
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  return;
}

