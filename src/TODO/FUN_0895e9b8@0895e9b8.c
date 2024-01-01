#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0895e9b8(int param_1)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  
  uVar3 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
  cVar1 = *(char *)(param_1 + 0x4cdb);
  cVar2 = *(char *)(param_1 + 0x4cdc);
  *(undefined *)(param_1 + cVar1 + 0x4cdd) = uVar3;
  *(char *)(param_1 + 0x4cdc) = cVar2 + '\x01';
  if ((int)cVar1 == *(char *)(param_1 + 0x4cda) + -1) {
    return 1;
  }
  *(char *)(param_1 + 0x4cdb) = cVar1 + '\x01';
  return 0;
}

