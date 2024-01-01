#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb9fc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = true;
  iVar2 = zz_sceKernelGetThreadId();
  iVar3 = *(int *)(param_1 + 8);
  while( true ) {
    *(int *)(param_1 + 8) = iVar3 + 1;
    if (iVar3 + 1 == 1) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(int *)(param_1 + 4) = iVar2;
      bVar1 = false;
    }
    else if (*(int *)(param_1 + 4) == iVar2) {
      bVar1 = false;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    else {
      *(int *)(param_1 + 8) = iVar3;
      zz_sceKernelDelayThreadCB(100);
    }
    if (!bVar1) break;
    iVar3 = *(int *)(param_1 + 8);
  }
  return;
}

