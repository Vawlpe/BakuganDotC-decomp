#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03334(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_90;
  undefined local_8c;
  undefined **local_88;
  
  local_90 = DAT_08af120c;
  local_8c = 2;
  local_88 = &PTR_PTR_DAT_08af11b8;
  if (param_1 == 0) {
    param_1 = 1;
  }
  DAT_08af120c = &local_90;
  while (iVar1 = FUN_089b4ea0(param_1), iVar1 == 0) {
    pcVar2 = DAT_08af1200;
    if (DAT_08af1200 == (code *)0x0) {
      pcVar2 = FUN_08a033e0;
    }
    (*pcVar2)();
  }
  DAT_08af120c = (undefined4 *)local_90;
  return;
}

