#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08910e38(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float local_50 [4];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  memcpy_jak(local_50,&DAT_08a9b948,0x40);
  local_50[0] = 126.0;
  local_50[2] = 126.0;
  local_40 = 0x42cc0000;
  local_38 = 0x42ac0000;
  local_30 = 0x429c0000;
  local_28 = 0x428c0000;
  local_20 = 0x42840000;
  iVar1 = 0;
  local_18 = 0x42580000;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      fVar4 = (float)iVar1;
      iVar1 = iVar1 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x14) + 100) =
           local_50[param_2 * 2] + local_50[param_2 * 2 + 1] * fVar4;
      iVar3 = *(int *)(param_1 + 0x1c) + iVar2;
      iVar2 = iVar2 + 4;
      *(float *)(*(int *)(iVar3 + 0x34) + 100) =
           local_50[param_2 * 2] + local_50[param_2 * 2 + 1] * fVar4;
    } while (iVar1 < param_2);
  }
  return;
}

