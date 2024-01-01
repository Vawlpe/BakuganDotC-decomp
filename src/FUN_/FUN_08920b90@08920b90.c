#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08920b90(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      if (*(char *)(param_1 + 0x77) < '\x02') {
        FUN_089a50c0(1);
      }
      iVar2 = FUN_089a50c0(0);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  else if (cVar1 < '\x02') {
    iVar2 = FUN_089a50c0(0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else if (cVar1 < '\x03') {
    FUN_089a50c0(1);
    iVar2 = FUN_089a50c0(0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

