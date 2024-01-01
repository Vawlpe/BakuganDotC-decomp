#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08960b18(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026) != '\0') {
    return 1;
  }
  cVar1 = *(char *)(param_1 + 0x4cdb);
  cVar2 = *(char *)(param_1 + 0x5024);
  iVar3 = param_1 + cVar1 * 4 + (int)cVar2;
  if (*(char *)(iVar3 + 0x4fb8) == -1) {
    return 2;
  }
  if ((*(byte *)(iVar3 + 0x4fc8) & 1) == 0) {
    FUN_08960790(param_1,1,cVar1,cVar2);
    return 1;
  }
  FUN_08960790(param_1,0,cVar1,cVar2);
  return 1;
}

