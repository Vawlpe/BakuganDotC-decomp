#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08960cfc(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x5025);
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    cVar2 = *(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026);
  }
  if (cVar2 == '\0') {
    FUN_089a50c0(0);
    iVar1 = FUN_089a50c0(1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_089a50c0(0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

