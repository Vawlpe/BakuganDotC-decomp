#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088c1680(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  local_40 = (float)(int)*param_2;
  local_3c = (float)(int)param_2[1];
  local_38 = (float)(param_2[2] + 200);
  local_34 = 0;
  iVar3 = FUN_089f5484(*(undefined4 *)(param_1 + 0x5f4),*(undefined4 *)(param_2 + 8),&local_40,0);
  local_30 = (float)(int)param_2[3];
  local_2c = (float)(int)param_2[4];
  local_28 = local_30 + (float)(int)param_2[5];
  local_24 = local_2c + (float)(int)param_2[6];
  sVar1 = param_2[5];
  sVar2 = param_2[6];
  FUN_089f4150(iVar3,&local_30);
  FUN_089f4924((float)(int)sVar1,(float)(int)sVar2,iVar3);
  iVar4 = *(int *)(iVar3 + 0xe4);
  if (iVar4 < 2) {
    if (iVar4 < 1) {
      return iVar3;
    }
  }
  else if (iVar4 != 3) {
    return iVar3;
  }
  *(float *)(iVar3 + 0x60) = *(float *)(iVar3 + 0x60) + (float)(int)sVar1 * 0.5;
  *(float *)(iVar3 + 100) = *(float *)(iVar3 + 100) + (float)(int)sVar2 * 0.5;
  return iVar3;
}

