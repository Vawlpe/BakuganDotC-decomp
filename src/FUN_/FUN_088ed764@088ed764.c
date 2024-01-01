#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ed764(int param_1,uint param_2,short param_3)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_088ec6f4(param_1,0,(int)param_3,&local_20,param_2 & 0xff);
  iVar1 = *(int *)(param_1 + 0x30) + (param_2 & 0xff) * 100;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + local_20;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + local_1c;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + local_18;
  return;
}

