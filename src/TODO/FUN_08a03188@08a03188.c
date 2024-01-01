#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a03188(undefined4 *param_1)

{
  undefined local_100 [4];
  undefined4 local_fc;
  undefined local_f8;
  undefined4 local_f4;
  undefined4 *local_8c;
  undefined local_88;
  undefined **local_84;
  undefined *local_80;
  undefined2 local_78;
  
  local_80 = local_100;
  local_8c = &local_fc;
  local_fc = DAT_08af120c;
  local_f8 = 2;
  local_f4 = 0;
  DAT_08af120c = &local_8c;
  local_88 = 1;
  local_84 = &PTR_FUN_08af1198;
  local_78 = DAT_08af1208;
  DAT_08af1208 = 0xffff;
  FUN_08a030d0(param_1);
  *param_1 = &DAT_08af5a98;
  DAT_08af1208 = local_78;
  DAT_08af120c = (undefined4 **)local_fc;
  return param_1;
}

