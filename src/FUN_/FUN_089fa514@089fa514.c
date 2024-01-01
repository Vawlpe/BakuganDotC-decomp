#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fa514(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  iVar1 = zz_sceIoIoctl(param_1[5],0x1020006,0,0,&local_10,4);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    param_1[0x3f] = local_10;
    *param_1 = 2;
  }
  return;
}

