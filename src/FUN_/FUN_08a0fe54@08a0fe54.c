#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a0fe54(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((param_3 != 0) && (piVar1 = (int *)FUN_08a0fd1c(), piVar1 != (int *)0x0)) {
    return *piVar1 + (uint)*(byte *)((int)piVar1 + 0xd);
  }
  return 0;
}

