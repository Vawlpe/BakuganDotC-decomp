#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e7504(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_088e7364(param_1,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3a8);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        *(undefined4 *)(param_1 + 0x3b0) = 0x2d;
        *(int *)(param_1 + 0x3a8) = iVar1 + 1;
      }
    }
    else if (iVar1 < 2) {
      iVar1 = *(int *)(param_1 + 0x3b0) + -1;
      if (*(int *)(param_1 + 0x3b0) < 1) {
        FUN_088e5bec(param_1,0x2a,0,1);
        *(undefined4 *)(param_1 + 0x3a8) = 2;
      }
      else {
        *(int *)(param_1 + 0x3b0) = iVar1;
        if (iVar1 == 0x1e) {
          FUN_088e5bec(param_1,0x2a,1,1);
        }
      }
    }
    else if (iVar1 < 3) {
      fVar2 = (float)FUN_088defe8(*(undefined4 *)(param_1 + 0x3b4),0x3f800000,
                                  *(undefined4 *)(param_1 + 0x424),param_1);
      if ((*(int *)(param_1 + 8) < 0x51) || (0x53 < *(int *)(param_1 + 8))) {
        if (fVar2 < 0.0) {
          FUN_088def24(0x3e4ccccd,param_1,10,1,0);
        }
        else {
          FUN_088def24(0x3e4ccccd,param_1,9,1,0);
        }
      }
      if (fVar2 * fVar2 < 0.01) {
        *(undefined4 *)(param_1 + 0x3a0) = 0;
        *(undefined4 *)(param_1 + 0x3a8) = 0;
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 1;
        FUN_088e5bec(param_1,0x2a,0,1);
      }
    }
  }
  return;
}

