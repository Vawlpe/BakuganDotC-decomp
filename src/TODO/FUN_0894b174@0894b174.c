#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0894b174(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  if (param_2 == 0) {
    iVar2 = 6;
    iVar1 = 0x18;
    do {
      pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
      *pfVar3 = *pfVar3 + 0.1666667;
    } while (iVar2 < 0x51);
    iVar1 = *(int *)(param_1 + 0x70);
  }
  else {
    if (param_2 == 1) {
      iVar2 = 6;
      iVar1 = 0x18;
      do {
        pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
        *pfVar3 = *pfVar3 - 0.1666667;
      } while (iVar2 < 0x66);
    }
    iVar1 = *(int *)(param_1 + 0x70);
  }
  if (6 < iVar1) {
    return 1;
  }
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  return 0;
}

