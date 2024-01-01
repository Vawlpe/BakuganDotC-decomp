#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a12e5c(undefined *param_1,undefined *param_2,undefined2 param_3,undefined param_4)

{
  bool bVar1;
  
  bVar1 = param_2 != (undefined *)0x0;
  PTR_FUN_08af1340 = param_1;
  if (param_1 == (undefined *)0x0) {
    PTR_FUN_08af1340 = &LAB_08a12cf4;
  }
  if (param_2 == (undefined *)0x0) {
    param_2 = &LAB_08a12cfc;
  }
  PTR_FUN_08af1344 = param_2;
  DAT_08af134b = param_1 != (undefined *)0x0 && bVar1;
  DAT_08af1348 = param_3;
  DAT_08af134a = param_4;
  if (DAT_08af136f == '\0') {
    PTR_FUN_08af1364 = PTR_FUN_08af1340;
    PTR_FUN_08af1368 = param_2;
    DAT_08af136c = param_3;
    DAT_08af136e = param_4;
  }
  return;
}

