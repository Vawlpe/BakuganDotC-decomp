#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cf114(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  
  iVar1 = FUN_089f2904();
  if (iVar1 != 0) {
    FUN_089f1458(iVar1);
    iVar2 = FUN_089ceba4(param_1);
    local_3c = 0;
    local_40 = 0x3f800000;
    local_38 = 0x40c00000;
    local_34 = (float)(param_2 * iVar2) * 0.0166667;
    FUN_089f2c2c(iVar1,&local_40,&DAT_08b00f20);
    iVar2 = FUN_089ceba4(param_1);
    local_30 = 0x40e00000;
    local_2c = 0;
    local_28 = 0x40c00000;
    local_24 = (float)(param_3 * iVar2) * 0.0166667;
    FUN_089f2c2c(iVar1,&local_30,&DAT_08b00880);
  }
  return;
}

