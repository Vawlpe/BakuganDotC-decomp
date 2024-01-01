#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dcbec(uint **param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)param_1[4][0x11];
  if ((param_1[7][10] & 0x80000) == 0) {
    fVar6 = fVar5 * 16.0;
    fVar5 = fVar6;
  }
  else {
    pfVar1 = (float *)param_1[7][2];
    fVar6 = fVar5 * pfVar1[1];
    fVar5 = fVar5 * *pfVar1;
  }
  uVar3 = (uint)fVar5;
  iVar2 = (int)fVar6;
  if ((int)uVar3 < 1) {
    uVar3 = 1;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (0x40 < (int)uVar3) {
    uVar3 = 0x40;
  }
  if (0x40 < iVar2) {
    iVar2 = 0x40;
  }
  puVar4 = *param_1;
  *param_1 = puVar4 + 1;
  *puVar4 = iVar2 << 8 | 0x36000000U | uVar3;
  return;
}

