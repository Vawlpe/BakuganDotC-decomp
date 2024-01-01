#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a12d04(undefined *param_1,undefined *param_2,undefined2 param_3,undefined param_4)

{
  bool bVar1;
  
  bVar1 = param_2 != (undefined *)0x0;
  PTR_FUN_08af1364 = param_1;
  if (param_1 == (undefined *)0x0) {
    PTR_FUN_08af1364 = &LAB_08a12cf4;
  }
  if (param_2 == (undefined *)0x0) {
    param_2 = &LAB_08a12cfc;
  }
  DAT_08af136f = param_1 != (undefined *)0x0 && bVar1;
  PTR_FUN_08af1368 = param_2;
  DAT_08af136c = param_3;
  DAT_08af136e = param_4;
  if (param_1 == (undefined *)0x0 || !bVar1) {
    PTR_FUN_08af1364 = PTR_FUN_08af1340;
    DAT_08af136e = DAT_08af134a;
    PTR_FUN_08af1368 = PTR_FUN_08af1344;
    DAT_08af136c = DAT_08af1348;
  }
  return;
}

