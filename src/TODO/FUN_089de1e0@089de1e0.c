#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089de1e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  iVar2 = *(int *)(param_2 + 0x14);
  iVar1 = 0;
  if (*(short *)(param_2 + 0x20) != 0) {
    do {
      fVar3 = *(float *)(iVar2 + 0x20);
      if (0.0 < fVar3) {
        fVar4 = fVar4 + fVar3;
        FUN_089e1430(param_1,fVar3 / fVar4,param_2,iVar2,param_3);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 0x20));
  }
  return;
}

