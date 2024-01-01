#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb598(int param_1)

{
  int iVar1;
  
  iVar1 = zz_scePowerGetCpuClockFrequencyInt();
  if (iVar1 != param_1) {
    zz_scePowerSetClockFrequency350(param_1,param_1,param_1 / 2);
  }
  return;
}

