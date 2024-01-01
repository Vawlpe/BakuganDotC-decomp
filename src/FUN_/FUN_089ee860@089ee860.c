#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ee860(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4), iVar2 != 0)) {
    local_20 = (float)param_3;
    local_1c = (float)param_4;
    local_18 = (float)param_5;
    local_14 = (float)param_6;
    FUN_089f4150(iVar2,&local_20);
    FUN_089f4924((float)param_5,(float)param_6,iVar2);
    uVar1 = 1;
  }
  return uVar1;
}

