#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c814c(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0x16c);
  cVar1 = (&DAT_08a9324c)[*(uint *)(param_1 + 0x170) % 0xd];
  *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) + 1;
  if (iVar2 < 1) {
    if ((-1 < iVar2) && (0.0 < *(float *)(param_1 + 0xbc))) {
      *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) - 0.2;
    }
    return 0;
  }
  if (iVar2 < 2) {
    *(int *)(param_1 + 0x16c) = iVar2 + 1;
    *(undefined4 *)(param_1 + 0x178) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x170) = 1;
    fVar3 = *(float *)(param_1 + 0xbc);
  }
  else {
    if (2 < iVar2) {
      return 0;
    }
    fVar3 = *(float *)(param_1 + 0xbc);
  }
  if (fVar3 < 1.0) {
    *(float *)(param_1 + 0xbc) = fVar3 + 0.2;
  }
  local_20 = *(undefined4 *)(&DAT_08a9323c + ((int)cVar1 & 1U) * 4);
  local_1c = *(undefined4 *)(&DAT_08a93244 + ((int)cVar1 >> 1 & 1U) * 4);
  local_18 = 0x41c00000;
  local_14 = 0x42000000;
  FUN_089f4060(param_1,&local_20);
  return 0;
}

