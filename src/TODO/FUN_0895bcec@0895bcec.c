#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895bcec(int param_1,char param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == '\0') {
    FUN_089572b4(param_1);
    uVar5 = 0;
    iVar3 = param_1;
    if (-1 < *(char *)(param_1 + 0x4cdb)) {
      do {
        cVar1 = *(char *)(param_1 + uVar5 + 0x4cdd);
        uVar4 = uVar5 & 0xff;
        if (cVar1 < '\x01') {
          uVar2 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
          FUN_0895b6ec(param_1,0,uVar4,uVar2);
          uVar2 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
          FUN_0895b894(param_1,uVar4,uVar2);
          *(undefined4 *)(*(int *)(iVar3 + 0x4d08) + 0x6c) = 0x3f800000;
          cVar1 = *(char *)(param_1 + 0x4cdb);
        }
        else {
          FUN_0895b6ec(param_1,0,uVar4,cVar1);
          FUN_0895b894(param_1,uVar4,*(undefined *)(param_1 + uVar5 + 0x4cdd));
          *(undefined4 *)(*(int *)(iVar3 + 0x4d08) + 0x6c) = 0x3f800000;
          cVar1 = *(char *)(param_1 + 0x4cdb);
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 4;
      } while ((int)uVar5 <= (int)cVar1);
    }
    *(byte *)(param_1 + 0x4ce1) = *(byte *)(param_1 + 0x4ce1) | 2;
  }
  else {
    uVar5 = 0;
    if ('\0' < *(char *)(param_1 + 0x4cda)) {
      uVar4 = 0;
      do {
        FUN_0895b6ec(param_1,param_2,uVar4,0);
        FUN_0895bc58(param_1,uVar4);
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 & 0xff;
      } while ((int)uVar5 < (int)*(char *)(param_1 + 0x4cda));
    }
    FUN_0895bc98(param_1);
  }
  return;
}

