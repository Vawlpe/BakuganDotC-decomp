#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089ea060(undefined4 param_1,int param_2,undefined (*param_3) [12])

{
  undefined auVar1 [12];
  uint uVar2;
  undefined (*pauVar3) [12];
  undefined4 uVar4;
  undefined4 in_V7D;
  undefined4 uVar5;
  
  uVar2 = FUN_089e9858();
  if ((uVar2 & 0xff) != 0) {
    pauVar3 = (undefined (*) [12])FUN_08a32460(param_1);
    uVar4 = *(undefined4 *)pauVar3[1];
    auVar1 = vsub_t(*pauVar3,*(undefined (*) [12])(param_2 + 0x10));
    *(int *)*param_3 = auVar1._0_4_;
    *(int *)(*param_3 + 4) = auVar1._4_4_;
    *(int *)(*param_3 + 8) = auVar1._8_4_;
    *(undefined4 *)param_3[1] = uVar4;
    uVar4 = vdot_t(*param_3,*param_3);
    uVar5 = vcmp_s(8,uVar4,*(undefined4 *)*param_3);
    vrsq_s(uVar4);
    uVar4 = vcmovt_s(in_V7D,(byte)uVar5 & 1);
    uVar4 = vmul_s(uVar4,*(undefined4 *)(param_2 + 0x20));
    auVar1 = vscl_t(*param_3,uVar4);
    *(int *)*param_3 = auVar1._0_4_;
    *(int *)(*param_3 + 4) = auVar1._4_4_;
    *(int *)(*param_3 + 8) = auVar1._8_4_;
    *(undefined4 *)param_3[1] = in_V7D;
    uVar4 = *(undefined4 *)param_3[1];
    auVar1 = vadd_t(*param_3,*(undefined (*) [12])(param_2 + 0x10));
    *(int *)*param_3 = auVar1._0_4_;
    *(int *)(*param_3 + 4) = auVar1._4_4_;
    *(int *)(*param_3 + 8) = auVar1._8_4_;
    *(undefined4 *)param_3[1] = uVar4;
  }
  return uVar2;
}

