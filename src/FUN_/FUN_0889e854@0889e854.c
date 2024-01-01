#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0889e854(undefined (*param_1) [12])

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 in_V7D;
  
  iVar2 = FUN_0889da6c();
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = DAT_08abd488 * 0x1c;
  *(undefined4 *)*param_1 = *(undefined4 *)(&DAT_08a833ac + iVar2);
  *(undefined4 *)(*param_1 + 4) = *(undefined4 *)(&DAT_08a833b0 + iVar2);
  *(undefined4 *)(*param_1 + 8) = *(undefined4 *)(&DAT_08a833b4 + iVar2);
  if (DAT_08abd488 == 8) {
    auVar1 = vscl_t(*param_1,0x3f666666);
    *(int *)*param_1 = auVar1._0_4_;
    *(int *)(*param_1 + 4) = auVar1._4_4_;
    *(int *)(*param_1 + 8) = auVar1._8_4_;
    *(undefined4 *)param_1[1] = in_V7D;
    *(float *)(*param_1 + 4) = *(float *)(*param_1 + 4) * 0.6;
  }
  return 1;
}

