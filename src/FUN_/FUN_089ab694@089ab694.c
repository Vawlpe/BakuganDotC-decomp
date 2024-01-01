#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char FUN_089ab694(undefined4 param_1,char param_2,byte param_3)

{
  char cVar1;
  
  if (param_2 == '\0') {
    cVar1 = '\0';
    if (1 < param_3) {
      cVar1 = param_3 - 1;
    }
    return cVar1;
  }
  cVar1 = '\0';
  if (param_3 != 0) {
    cVar1 = param_3 + 1;
  }
  return cVar1;
}

