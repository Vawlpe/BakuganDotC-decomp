#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d4304(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  param_1 = param_1 * 0x1c;
  local_50 = *(undefined4 *)*(undefined (*) [12])(&DAT_08a96488 + param_1);
  local_4c = *(float *)(&DAT_08a9648c + param_1);
  local_48 = *(undefined4 *)(&DAT_08a96490 + param_1);
  local_44 = 0;
  local_40 = *(undefined4 *)*(undefined (*) [12])(&DAT_08a96494 + param_1);
  local_3c = *(float *)(&DAT_08a96498 + param_1);
  local_38 = *(undefined4 *)(&DAT_08a9649c + param_1);
  local_34 = 0;
  if (*(int *)(&DAT_08a964a0 + param_1) == 0) {
    FUN_088d3dc8(0x44fa0000,"ffx_moon",&local_50,1);
    FUN_088d3dc8(0x447a0000,"ffx_moon",&local_40,1);
  }
  else {
    auVar1 = vscl_t(*(undefined (*) [12])(&DAT_08a96488 + param_1),0x3f333333);
    local_50 = auVar1._0_4_;
    local_48 = auVar1._8_4_;
    auVar2 = vscl_t(*(undefined (*) [12])(&DAT_08a96494 + param_1),0x3f333333);
    local_40 = auVar2._0_4_;
    local_38 = auVar2._8_4_;
    local_4c = auVar1._4_4_ * 0.6;
    local_3c = auVar2._4_4_ * 0.6;
    FUN_088d3dc8(0x44fa0000,"ffx_sun",&local_50,2);
    FUN_088d3dc8(0x447a0000,"ffx_sun",&local_40,2);
  }
  return;
}

