#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03110(undefined4 *param_1,uint param_2)

{
  undefined4 local_80;
  undefined local_7c;
  undefined4 local_78;
  
  local_80 = DAT_08af120c;
  local_7c = 2;
  local_78 = 0;
  if (param_1 != (undefined4 *)0x0) {
    DAT_08af120c = &local_80;
    *param_1 = &DAT_08af5a80;
    if ((param_2 & 1) != 0) {
      FUN_08a03084();
    }
  }
  DAT_08af120c = (undefined4 *)local_80;
  return;
}

