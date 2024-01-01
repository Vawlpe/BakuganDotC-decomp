#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e1a38(int param_1,undefined4 *param_2)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x4a9) == '\0') {
    FUN_089dedf8(param_1,&local_30,"Bip01_L_Hand");
    *param_2 = local_30;
    param_2[1] = uStack_2c;
    param_2[2] = uStack_28;
    param_2[3] = uStack_24;
  }
  else {
    FUN_089dedf8(param_1,&local_40,"Bip01_R_Hand");
    *param_2 = local_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
  }
  return;
}

