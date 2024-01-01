#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a033e0(void)

{
  undefined4 *puVar1;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined local_f8;
  undefined4 local_f4;
  undefined4 *local_8c;
  undefined local_88;
  undefined **local_84;
  undefined4 **local_80;
  undefined2 local_78;
  
  puVar1 = (undefined4 *)FUN_08a03e00(&PTR_DAT_08af7080,4,0);
  local_8c = &local_fc;
  local_fc = DAT_08af120c;
  local_f8 = 2;
  local_f4 = 0;
  DAT_08af120c = &local_8c;
  local_88 = 1;
  local_84 = &PTR_FUN_08af11c8;
  local_78 = DAT_08af1208;
  DAT_08af1208 = 0xffff;
  local_80 = &local_100;
  FUN_08a030d0(puVar1);
  *puVar1 = &DAT_08af7068;
  DAT_08af1208 = local_78;
  DAT_08af120c = (undefined4 **)local_fc;
  local_100 = puVar1;
  FUN_08a03fbc();
  return;
}

