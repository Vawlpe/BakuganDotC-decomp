#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089b49c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    param_1 = zz_sceKernelStdout();
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      param_1 = zz_sceKernelStdin();
    }
  }
  else if (param_1 == 2) {
    param_1 = zz_sceKernelStderr();
  }
  uVar1 = 0xfffffff7;
  if (-1 < param_1) {
    uVar1 = zz_sceIoWrite(param_1,param_2,param_3);
  }
  return uVar1;
}

