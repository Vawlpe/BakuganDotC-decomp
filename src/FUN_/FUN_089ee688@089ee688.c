#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089ee688(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4), iVar2 != 0)) {
    local_40 = (float)param_6;
    local_3c = (float)param_7;
    local_38 = (float)(param_6 + param_8);
    local_34 = (float)(param_9 + param_7);
    FUN_089f4150(iVar2,&local_40);
    FUN_089f4924((float)param_8,(float)param_9,iVar2);
    iVar3 = *(int *)(iVar2 + 0xe4);
    *(float *)(iVar2 + 0x60) = (float)param_3;
    *(float *)(iVar2 + 100) = (float)param_4;
    *(float *)(iVar2 + 0x68) = (float)(param_5 + 200);
    if (iVar3 < 2) {
      if (iVar3 < 1) {
        return 1;
      }
    }
    else if (iVar3 != 3) {
      return 1;
    }
    *(float *)(iVar2 + 0x60) = *(float *)(iVar2 + 0x60) + (float)param_8 * 0.5;
    *(float *)(iVar2 + 100) = *(float *)(iVar2 + 100) + (float)param_9 * 0.5;
    uVar1 = 1;
  }
  return uVar1;
}

