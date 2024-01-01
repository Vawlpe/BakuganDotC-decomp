#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889ddac(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  int iVar3;
  undefined4 in_V7D;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar3 = param_1 * 0x1c;
  local_50 = *(undefined4 *)*(undefined (*) [12])(&DAT_08a833ac + iVar3);
  local_4c = *(float *)(&DAT_08a833b0 + iVar3);
  local_48 = *(undefined4 *)(&DAT_08a833b4 + iVar3);
  local_44 = 0;
  local_40 = *(undefined4 *)*(undefined (*) [12])(&DAT_08a833b8 + iVar3);
  local_3c = *(float *)(&DAT_08a833bc + iVar3);
  local_38 = *(undefined4 *)(&DAT_08a833c0 + iVar3);
  local_34 = 0;
  if (*(int *)(&DAT_08a833c4 + iVar3) == 0) {
    DAT_08abd4d4 = FUN_0889d05c(0x44fa0000,"ffx_moon",&local_50,1);
    DAT_08abd4d8 = FUN_0889d05c(0x447a0000,"ffx_moon",&local_40,1);
  }
  else {
    if (param_1 == 8) {
      auVar1 = vscl_t(*(undefined (*) [12])(&DAT_08a833ac + iVar3),0x3f666666);
      local_50 = auVar1._0_4_;
      local_48 = auVar1._8_4_;
      auVar2 = vscl_t(*(undefined (*) [12])(&DAT_08a833b8 + iVar3),0x3f666666);
      local_40 = auVar2._0_4_;
      local_38 = auVar2._8_4_;
      local_4c = auVar1._4_4_ * 0.6;
      local_3c = auVar2._4_4_ * 0.6;
      local_34 = in_V7D;
    }
    local_44 = local_34;
    DAT_08abd4d4 = FUN_0889d05c(0x44fa0000,"ffx_sun",&local_50,2);
    DAT_08abd4d8 = FUN_0889d05c(0x447a0000,"ffx_sun",&local_40,2);
  }
  return;
}

