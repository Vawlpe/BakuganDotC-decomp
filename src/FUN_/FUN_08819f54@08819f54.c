#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08819f54(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x43480000;
    local_24 = 0;
    iVar2 = FUN_089f54d8(param_1,param_2,&local_30,0);
    local_40 = (float)param_3;
    local_3c = (float)param_4;
    local_38 = (float)(param_3 + param_5);
    local_34 = (float)(param_6 + param_4);
    FUN_089f4150(iVar2,&local_40);
    FUN_089f4924((float)param_5,(float)param_6,iVar2);
    iVar1 = *(int *)(iVar2 + 0xe4);
    if (iVar1 < 2) {
      if (iVar1 < 1) {
        return iVar2;
      }
    }
    else if (iVar1 != 3) {
      return iVar2;
    }
    *(float *)(iVar2 + 0x60) = *(float *)(iVar2 + 0x60) + (float)param_5 * 0.5;
    *(float *)(iVar2 + 100) = *(float *)(iVar2 + 100) + (float)param_6 * 0.5;
  }
  return iVar2;
}

