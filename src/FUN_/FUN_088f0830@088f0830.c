#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f0830(int param_1,uint param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  param_2 = param_2 & 0xff;
  if (param_2 == 100) {
    param_2 = (uint)*(byte *)(param_1 + 0x2d4);
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_088ec6f4(param_1,1,(int)param_3,&local_20,*(undefined *)(param_1 + param_2 + 0x292));
  iVar1 = *(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + param_2 + 0x292) * 0x4c;
  iVar2 = *(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + param_2 + 0x292) * 0x4c;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar1 + 0xc) + local_20;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar1 + 0x10) + local_1c;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar1 + 0x14) + local_18;
  return;
}

