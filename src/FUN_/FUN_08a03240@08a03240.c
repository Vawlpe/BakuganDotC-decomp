#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03240(undefined4 *param_1,uint param_2)

{
  undefined4 *local_100;
  undefined4 local_fc;
  undefined local_f8;
  undefined4 local_f4;
  undefined4 *local_8c;
  undefined local_88;
  undefined **local_84;
  undefined4 **local_80;
  undefined2 local_78;
  
  local_80 = &local_100;
  local_8c = &local_fc;
  local_fc = DAT_08af120c;
  local_f8 = 2;
  local_f4 = 0;
  DAT_08af120c = &local_8c;
  local_88 = 1;
  local_84 = &PTR_FUN_08af11a8;
  local_78 = DAT_08af1208;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_08af5a98;
    DAT_08af1208 = 0xffff;
    local_100 = param_1;
    FUN_08a03110(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08a03084(param_1);
    }
  }
  DAT_08af1208 = local_78;
  DAT_08af120c = (undefined4 **)local_fc;
  return;
}

