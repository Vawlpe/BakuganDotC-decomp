#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895ea2c(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  
  FUN_0895e550();
  uVar2 = *(undefined *)(param_1 + 0x4cdb);
  uVar1 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
  FUN_0895b6ec(param_1,1,uVar2,uVar1);
  FUN_0895e1bc(param_1,*(undefined *)(param_1 + 0x4cdb),0);
  *(char *)(param_1 + 0x4cdb) = *(char *)(param_1 + 0x4cdb) + -1;
  *(char *)(param_1 + 0x4cdc) = *(char *)(param_1 + 0x4cdc) + -1;
  uVar2 = FUN_0895647c(param_1,1,*(undefined *)(param_1 + *(char *)(param_1 + 0x4cdb) + 0x4cdd));
  *(undefined *)(param_1 + 0x74) = uVar2;
  *(undefined *)(param_1 + 0x75) = 0;
  return;
}

