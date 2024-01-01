#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894068c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_40;
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_088e1948();
  FUN_088d462c(&local_40,1);
  local_30 = local_40;
  uStack_2c = uStack_3c;
  fStack_28 = local_38;
  uStack_24 = uStack_34;
  uVar2 = atan2f(local_38 - *(float *)(iVar1 + 0x28),local_40 - *(float *)(iVar1 + 0x20));
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  return;
}

