#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08929ae0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x4d0) + 0.125;
  iVar2 = *(int *)(param_1 + 0x4e0);
  *(float *)(param_1 + 0x4d0) = fVar4;
  iVar1 = 0;
  if (0.0 < *(float *)(param_1 + 0x4cc)) {
    do {
      if (param_2 == '\0') {
        *(float *)(iVar2 + 0xbc) =
             *(float *)(param_1 + 0x4c4) + (1.0 - (fVar4 - 1.0) * (fVar4 - 1.0));
        fVar4 = *(float *)(param_1 + 0x4d0);
        fVar3 = *(float *)(param_1 + 0x4cc);
        iVar2 = *(int *)(iVar2 + 4);
      }
      else {
        *(float *)(iVar2 + 0xbc) = *(float *)(param_1 + 0x4c4) - fVar4 * fVar4;
        fVar4 = *(float *)(param_1 + 0x4d0);
        fVar3 = *(float *)(param_1 + 0x4cc);
        iVar2 = *(int *)(iVar2 + 4);
      }
      iVar1 = iVar1 + 1;
    } while ((float)iVar1 < fVar3);
  }
  return 1.0 <= fVar4;
}

