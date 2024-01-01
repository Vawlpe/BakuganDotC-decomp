#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08940804(float param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float local_30;
  undefined4 uStack_2c;
  float local_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_088e1948();
  local_30 = *(float *)(iVar1 + 0x20);
  uStack_2c = *(undefined4 *)(iVar1 + 0x24);
  local_28 = *(float *)(iVar1 + 0x28);
  uStack_24 = *(undefined4 *)(iVar1 + 0x2c);
  if (-2.35 <= *(float *)(param_2 + 0x88)) {
    if (*(float *)(param_2 + 0x88) <= -0.78) {
      local_28 = local_28 - param_1;
      goto LAB_0894090c;
    }
    fVar3 = *(float *)(param_2 + 0x88);
  }
  else {
    fVar3 = *(float *)(param_2 + 0x88);
  }
  if (-0.78 <= fVar3) {
    if (*(float *)(param_2 + 0x88) <= 0.78) {
      local_30 = local_30 + param_1;
      goto LAB_0894090c;
    }
    fVar3 = *(float *)(param_2 + 0x88);
  }
  else {
    fVar3 = *(float *)(param_2 + 0x88);
  }
  if ((fVar3 < 0.78) || (2.35 < *(float *)(param_2 + 0x88))) {
    local_30 = local_30 - param_1;
  }
  else {
    local_28 = local_28 + param_1;
  }
LAB_0894090c:
  uVar2 = FUN_08823f5c(DAT_08ac5c70,param_3,&local_30);
  *(undefined4 *)(param_2 + 0x8c) = uVar2;
  return;
}

