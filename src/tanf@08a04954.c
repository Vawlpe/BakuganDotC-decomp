#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 tanf(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = param_1;
  if ((param_1 & 0x7fffffff) < 0x3f490fdb) {
    uVar2 = FUN_08a0c3b4(param_1,0,1);
    return uVar2;
  }
  if (0x7f7fffff < (param_1 & 0x7fffffff)) {
    return 0;
  }
  uVar1 = FUN_08a0a250(&local_10);
  uVar2 = FUN_08a0c3b4(local_10,local_c,(uVar1 & 1) * -2 + 1);
  return uVar2;
}

