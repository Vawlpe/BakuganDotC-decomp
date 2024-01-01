#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08886c94(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  FUN_08886820();
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    iVar3 = *(int *)(*param_1 + 0x150);
    iVar1 = FUN_0880cc48();
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
    FUN_08886c58(fVar4,param_1);
  }
  return;
}

