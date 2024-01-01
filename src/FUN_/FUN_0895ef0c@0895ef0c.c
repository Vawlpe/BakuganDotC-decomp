#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895ef0c(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2 * 4;
  iVar5 = param_1 + param_2 * 0x28;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
  if (*(char *)(iVar5 + 0x7f) == '\0') {
    pfVar2 = (float *)(iVar1 + 0x90);
    *pfVar2 = *pfVar2 - 0.1;
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    iVar1 = *piVar3;
    if (*(float *)(iVar1 + 0x90) <= 0.1) {
      FUN_089f4c84();
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined *)(iVar5 + 0x7f) = 1;
      piVar3 = (int *)(iVar1 + iVar4);
      iVar1 = *piVar3;
      iVar4 = *piVar3;
    }
    else {
      iVar4 = *piVar3;
    }
    FUN_089a51fc(*(undefined4 *)(iVar4 + 0x90),0x3f800000,0,iVar1);
  }
  else {
    pfVar2 = (float *)(iVar1 + 0x90);
    *pfVar2 = *pfVar2 + 0.1;
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    iVar1 = *piVar3;
    if (1.0 <= *(float *)(iVar1 + 0x90)) {
      *(undefined *)(iVar5 + 0x7f) = 0;
      iVar1 = *piVar3;
      iVar4 = *piVar3;
    }
    else {
      iVar4 = *piVar3;
    }
    FUN_089a51fc(*(undefined4 *)(iVar4 + 0x90),0x3f800000,0,iVar1);
  }
  return;
}

