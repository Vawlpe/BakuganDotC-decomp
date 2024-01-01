#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e2a08(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x314) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x314) + 0x2ac) != 6) {
      uVar3 = *(uint *)(param_1 + 0x168);
      goto LAB_088e2a58;
    }
    if (*(int *)(*(int *)(param_1 + 0x314) + 0x5c4) == 0) {
      return;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x168);
LAB_088e2a58:
  if ((uVar3 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x168) & 0x400000) == 0) {
      iVar2 = FUN_088e1f38(param_1);
      if (iVar2 != 0) {
        FUN_088e2788(param_1,0xb,0);
      }
    }
    else {
      FUN_088e2788(param_1,7,0);
    }
  }
  else {
    FUN_088e2788(param_1,1,0);
  }
  auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),0x3f333333);
  *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar1._0_4_;
  *(int *)(param_1 + 0x88) = auVar1._8_4_;
  return;
}

