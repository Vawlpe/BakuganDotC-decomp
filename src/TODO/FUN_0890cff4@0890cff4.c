#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890cff4(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = 0;
  if (*(int *)(DAT_08ac0e80 + 0xc) != 0) {
    iVar1 = FUN_089eb248(*(int *)(DAT_08ac0e80 + 0xc));
    iVar1 = *(int *)(iVar1 + 0x84);
  }
  if ((*(int *)(&DAT_08a9b090 + *(int *)(param_1 + 0x18) * 8) < 1) ||
     (2 < *(int *)(&DAT_08a9b090 + *(int *)(param_1 + 0x18) * 8))) {
    if (iVar1 != 0) {
      for (iVar2 = *(int *)(iVar1 + 4); *(undefined4 *)(iVar1 + 0xbc) = 0, iVar2 != 0;
          iVar2 = *(int *)(iVar2 + 4)) {
        iVar1 = iVar2;
      }
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x1c0);
    if ((*(float *)(param_1 + 0x1c8) != fVar3) && (*(float *)(param_1 + 0x1c8) = fVar3, iVar1 != 0))
    {
      for (iVar2 = *(int *)(iVar1 + 4); *(float *)(iVar1 + 0xbc) = fVar3, iVar2 != 0;
          iVar2 = *(int *)(iVar2 + 4)) {
        iVar1 = iVar2;
      }
    }
  }
  return;
}

