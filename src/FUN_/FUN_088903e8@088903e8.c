#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088903e8(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 4);
  if (*(char *)(param_2 + 0xd) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1a4) + -1;
    fVar2 = (float)iVar1;
    if (iVar1 < 0) {
      fVar2 = fVar2 + 4.294967e+09;
    }
    return fVar3 + (*(float *)(param_2 + 8) - fVar3) * fVar2 * 0.1111111;
  }
  fVar2 = (float)FUN_089bedc4();
  return fVar2 + fVar3;
}

