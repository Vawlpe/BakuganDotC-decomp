#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b1770(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x578) == '\0') {
    cVar1 = *(char *)(param_1 + 0x74);
    if (cVar1 < '\x01') {
      if (-1 < cVar1) {
        FUN_0890a598(param_1,1);
        uVar2 = FUN_0880cc48();
        FUN_0880cd9c(uVar2,7,0);
        return;
      }
    }
    else if (cVar1 < '\x02') {
      FUN_0890a598(param_1,2);
      return;
    }
  }
  else {
    FUN_0890a598(param_1,0);
  }
  return;
}

