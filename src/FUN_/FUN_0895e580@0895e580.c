#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895e580(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined *)(param_1 + 0x4cdb);
  uVar2 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
  FUN_0895b6ec(param_1,1,uVar1,uVar2);
  if (*(char *)(param_1 + 0x75) != '\0') {
    FUN_0895e1bc(param_1,*(undefined *)(param_1 + 0x4cdb),0);
    return;
  }
  piVar3 = (int *)FUN_0880cc48();
  uVar4 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
  uVar1 = *(undefined *)(param_1 + 0x4cdb);
  if ((int)uVar4 < 0) {
    uVar5 = -(-uVar4 & 7) & 0x1f;
  }
  else {
    uVar5 = uVar4 & 7;
  }
  if (((uint)*(byte *)(*piVar3 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3) + 0x5be) &
      1 << uVar5) == 0) {
    FUN_0895e1bc(param_1,uVar1,0);
  }
  else {
    uVar2 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
    FUN_0895b6ec(param_1,0,uVar1,uVar2);
    uVar1 = *(undefined *)(param_1 + 0x4cdb);
    uVar2 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
    FUN_0895b894(param_1,uVar1,uVar2);
    *(undefined4 *)(*(int *)(param_1 + *(char *)(param_1 + 0x4cdb) * 4 + 0x4d08) + 0x6c) =
         0x3f800000;
    uVar1 = *(undefined *)(param_1 + 0x4cdb);
    uVar2 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
    FUN_0895e1bc(param_1,uVar1,uVar2);
  }
  return;
}

