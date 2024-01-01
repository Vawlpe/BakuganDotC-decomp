#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089de084(float param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x24);
  if (0.0 <= fVar4) {
    if (param_1 < 0.0) {
      param_1 = -param_1;
    }
    param_1 = fVar4 - param_1;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    *(float *)(param_2 + 0x24) = param_1;
    if (fVar4 == 0.0) {
      param_1 = 0.0;
    }
    else {
      param_1 = param_1 / fVar4;
    }
    iVar3 = 0;
    if (*(short *)(param_2 + 0x20) != 0) {
      iVar2 = 0;
      do {
        iVar1 = *(int *)(param_2 + 0x14) + iVar2;
        if (iVar1 == param_3) {
          fVar4 = 1.0;
        }
        else {
          fVar4 = 0.0;
        }
        *(float *)(iVar1 + 0x20) = (*(float *)(iVar1 + 0x20) - fVar4) * param_1 + fVar4;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x30;
      } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 0x20));
    }
  }
  return;
}

