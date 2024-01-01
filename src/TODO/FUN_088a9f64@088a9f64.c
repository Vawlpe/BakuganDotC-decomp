#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a9f64(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  switch(*(int *)(param_1 + 0x1fc)) {
  case 0:
    fVar3 = 316.0;
    *(undefined4 *)(param_1 + 0x300) = 0x439e0000;
    *(int *)(param_1 + 0x1fc) = (*(int *)(param_1 + 0x1fc) * 4 >> 2) + 1;
    break;
  case 1:
    fVar3 = *(float *)(param_1 + 0x300);
    break;
  case 2:
    FUN_088a9d64(param_1);
    FUN_088a9668(param_1);
    *(undefined4 *)(param_1 + 0x228) = 0;
    fVar3 = -0.2;
    *(undefined4 *)(param_1 + 0x1fc) = 10;
    goto LAB_088aa12c;
  default:
    goto switchD_088a9fa0_caseD_3;
  case 10:
    fVar3 = *(float *)(param_1 + 0x228) - 0.2;
LAB_088aa12c:
    *(float *)(param_1 + 0x228) = fVar3;
    if (0.0 < fVar3) {
      return;
    }
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    return;
  case 0xb:
    *(undefined *)(param_1 + 0x282) = 1;
    goto switchD_088a9fa0_caseD_3;
  }
  if (fVar3 < 0.0) {
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    iVar1 = *(int *)(param_1 + 0x140);
  }
  else {
    pfVar2 = (float *)(param_1 + 0x24);
    if (210.6667 < fVar3) {
      *(float *)(param_1 + 0x300) = fVar3 - 14.0304;
      *pfVar2 = *pfVar2 - 14.0304;
      iVar1 = *(int *)(param_1 + 0x140);
    }
    else {
      fVar3 = *(float *)(param_1 + 0x2b4);
      iVar1 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
      fVar4 = *(float *)(param_1 + 0x2b8);
      *(float *)(param_1 + 0x20) = fVar3 + (float)(iVar1 / 2);
      iVar1 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
      *(char *)(param_1 + 0x2b1) = *(char *)(param_1 + 0x2b1) + '\x01';
      *(float *)(param_1 + 0x28) = fVar4 + (float)(iVar1 / 2);
      *pfVar2 = *pfVar2 - 7.0152;
      *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) - 7.0152;
      iVar1 = *(int *)(param_1 + 0x140);
    }
  }
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x10c) = 1;
  }
switchD_088a9fa0_caseD_3:
  return;
}

