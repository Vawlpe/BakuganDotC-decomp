#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08962004(int param_1)

{
  int iVar1;
  char cVar2;
  
  if (((int)*(char *)(*(int *)(param_1 + 0x20) + 5) & 0x80U) == 0) {
    return 0;
  }
  cVar2 = *(char *)(param_1 + 0x5025);
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    cVar2 = *(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026);
  }
  if ((cVar2 == '\0') &&
     (*(char *)(param_1 + *(char *)(param_1 + 0x4cdb) * 4 + (int)*(char *)(param_1 + 0x5024) +
               0x4fb8) != -1)) {
    return 1;
  }
  return 2;
}

