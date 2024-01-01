#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089e6b3c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = *param_1;
  iVar2 = 1;
  iVar3 = 0;
  fVar6 = *(float *)(iVar5 + 4);
  iVar1 = iVar5;
  do {
    fVar7 = *(float *)(iVar1 + 0x14);
    iVar4 = iVar2;
    if (fVar6 <= fVar7) {
      iVar4 = iVar3;
      fVar7 = fVar6;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar4;
    fVar6 = fVar7;
    iVar1 = iVar1 + 0x10;
  } while (iVar2 < 8);
  return iVar5 + iVar4 * 0x10;
}

