#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08886d68(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float extraout_f0;
  
  fVar4 = *(float *)(param_1[0x22] + param_1[0x2b] * 4 + 0x80);
  if (*param_1 != 0) {
    if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
      iVar3 = *(int *)(*param_1 + 0x150);
      iVar1 = _DONE_Get_DAT_08AAC9E0();
      iVar2 = 0;
      fVar4 = *(float *)(param_1[0x22] + 0x90);
      if (*(int *)(iVar1 + 4) != 0) {
        iVar2 = *(int *)(*(int *)(iVar1 + 4) + iVar3 * 4 + 0x118);
      }
      if (iVar2 == 0x32) {
        fVar4 = fVar4 * 0.5;
      }
      else if (iVar2 == 0x96) {
        fVar4 = fVar4 * 1.5;
      }
    }
    else {
      FUN_08886d3c(param_1,5,0x3f800000);
      iVar1 = FUN_08886d3c(param_1,6);
      fVar4 = extraout_f0;
      if (iVar1 != 0) {
        fVar4 = extraout_f0 + 0.35;
      }
      fVar4 = *(float *)(param_1[0x22] + param_1[0x2b] * 4 + 0x80) * fVar4;
    }
  }
  return fVar4;
}

