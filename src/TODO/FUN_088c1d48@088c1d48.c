#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c1d48(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  *(uint *)(*(int *)(param_1 + 0x6b8) + 0xd0) =
       *(uint *)(*(int *)(param_1 + 0x6b8) + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(param_1 + 0x6e4);
  if (0xf < iVar1) {
    fVar3 = (float)(iVar1 + -0xf) * 0.02 + 1.0;
    FUN_089f4954(fVar3,fVar3,0,*(undefined4 *)(param_1 + 0x6b8),0);
    pfVar2 = (float *)(*(int *)(param_1 + 0x6b8) + 0xbc);
    *pfVar2 = *pfVar2 - 0.06666667;
    *(uint *)(*(int *)(param_1 + 0x6b8) + 0xd0) = *(uint *)(*(int *)(param_1 + 0x6b8) + 0xd0) | 1;
    iVar1 = *(int *)(param_1 + 0x6e4);
  }
  *(int *)(param_1 + 0x6e4) = iVar1 + 1;
  if (0x1d < iVar1 + 1) {
    FUN_088c1cd8(param_1);
  }
  return;
}

