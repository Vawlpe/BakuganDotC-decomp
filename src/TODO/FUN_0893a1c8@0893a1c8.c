#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0893a1c8(int param_1,undefined param_2)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*(char *)(param_1 + 0x5ee) != '\x05') && (*(char *)(param_1 + 0x5ee) != '\x06')) {
    bVar2 = true;
  }
  if (!bVar2) {
    cVar1 = FUN_0893a038(param_1,param_2);
    return cVar1 == '\x01';
  }
  cVar1 = FUN_08939d9c(param_1,param_2,0xc);
  return cVar1 == '\x01';
}

