#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f2904(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = 0;
  if (DAT_08b02c60 != 0) {
    iVar2 = iVar1;
    iVar1 = DAT_08b02c60;
    fVar4 = -INFINITY;
    fVar5 = *(float *)(DAT_08b02c60 + 0x24);
    while( true ) {
      if (fVar4 < fVar5) {
        iVar3 = *(int *)(iVar1 + 4);
      }
      else {
        iVar3 = *(int *)(iVar1 + 4);
        iVar1 = iVar2;
        fVar5 = fVar4;
      }
      if (iVar3 == 0) break;
      iVar2 = iVar1;
      iVar1 = iVar3;
      fVar4 = fVar5;
      fVar5 = *(float *)(iVar3 + 0x24);
    }
  }
  return iVar1;
}

