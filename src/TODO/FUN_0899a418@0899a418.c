#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899a418(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_2 & 0xff) * 4;
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
  iVar2 = *piVar1;
  FUN_089a51fc(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),0,piVar1[0x10]);
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
  *(undefined4 *)(piVar1[0x10] + 0x60) = *(undefined4 *)(*piVar1 + 0x60);
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
  iVar2 = *piVar1;
  *(float *)(piVar1[0x10] + 100) =
       *(float *)(iVar2 + 100) - *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x10e8);
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
  iVar2 = *piVar1;
  FUN_089a51fc(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),0,piVar1[0x2a]);
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
  iVar2 = *piVar1;
  *(float *)(piVar1[0x2a] + 0x60) =
       *(float *)(iVar2 + 0x60) - *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x10ec);
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
  iVar2 = *piVar1;
  *(float *)(piVar1[0x2a] + 100) =
       *(float *)(iVar2 + 100) - *(float *)(iVar2 + 0x94) * *(float *)(param_1 + 0x10f0);
  return;
}

