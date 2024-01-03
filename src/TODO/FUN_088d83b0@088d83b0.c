#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088d83b0(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar5 = 0;
  iVar2 = FUN_088e1948();
  iVar3 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar3 != 0) {
    uVar4 = DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880d0ac(uVar4,0x2f);
    if (0 < iVar3) {
      iVar2 = 0;
    }
  }
  if (((iVar2 != 0) && (iVar3 = FUN_088e1400(iVar2), iVar3 == 0)) &&
     (*(int *)(param_1 + 0x250) != 0)) {
    auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 0x250) + 0x60),
                    *(undefined (*) [12])(iVar2 + 0x20));
    uVar4 = vdot_t(auVar1,auVar1);
    fVar6 = (float)vsqrt_s(uVar4);
    if (fVar6 <= 15.0) {
      uVar5 = 1;
    }
  }
  return uVar5;
}

