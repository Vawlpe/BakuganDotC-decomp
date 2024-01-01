#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03084(int param_1)

{
  undefined4 local_80;
  undefined local_7c;
  undefined4 local_78;
  
  local_80 = DAT_08af120c;
  local_7c = 2;
  local_78 = 0;
  if (param_1 != 0) {
    DAT_08af120c = &local_80;
    FUN_089b4ec4();
  }
  DAT_08af120c = (undefined4 *)local_80;
  return;
}

