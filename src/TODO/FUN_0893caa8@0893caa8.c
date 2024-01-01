#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893caa8(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((*(char *)(param_1 + 0x5ee) != '\x05') &&
     (bVar1 = false, *(char *)(param_1 + 0x5ee) != '\x06')) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x60) =
         *(float *)(iVar2 + 0x60) - *(float *)(iVar2 + 0x90) * *(float *)(param_1 + 0x600);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) =
         *(float *)(iVar2 + 100) - *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x604);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(iVar2 + 0x90) * *(float *)(param_1 + 0x608);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x60c);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(iVar2 + 0x90) * *(float *)(param_1 + 0x610);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x614);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(iVar2 + 0x90) * *(float *)(param_1 + 0x618);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x61c);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60) =
         *(float *)(iVar2 + 0x60) - *(float *)(iVar2 + 0x90) * *(float *)(param_1 + 0x620);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x624);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0x60) =
         *(float *)(iVar2 + 0x60) - *(float *)(iVar2 + 0x90) * *(float *)(param_1 + 0x628);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x62c);
  }
  return;
}

