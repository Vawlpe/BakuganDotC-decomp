#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fc5b8(undefined4 param_1,undefined4 param_2,undefined (*param_3) [12],
                 undefined (*param_4) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  auVar1 = vscl_t(*param_4,param_1);
  uVar2 = *(undefined4 *)param_3[1];
  auVar1 = vadd_t(*param_3,auVar1);
  *(int *)*param_3 = auVar1._0_4_;
  *(int *)(*param_3 + 4) = auVar1._4_4_;
  *(int *)(*param_3 + 8) = auVar1._8_4_;
  *(undefined4 *)param_3[1] = uVar2;
  uVar4 = DAT_08abfd3c;
  uVar3 = DAT_08abfd38;
  uVar2 = DAT_08abfd34;
  *(undefined4 *)*param_4 = DAT_08abfd30;
  *(undefined4 *)(*param_4 + 4) = uVar2;
  *(undefined4 *)(*param_4 + 8) = uVar3;
  *(undefined4 *)param_4[1] = uVar4;
  return;
}

