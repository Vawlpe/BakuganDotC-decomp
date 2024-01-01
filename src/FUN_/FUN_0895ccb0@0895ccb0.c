#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0895ccb0(int param_1)

{
  char cVar1;
  
  param_1 = param_1 + (uint)*(ushort *)(param_1 + 0x5176) * 0x28;
  cVar1 = *(char *)(param_1 + 0x83);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x83) = cVar1 + -1;
    return 0;
  }
  return 1;
}

