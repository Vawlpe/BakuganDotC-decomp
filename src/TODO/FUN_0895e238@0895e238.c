#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895e238(int param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = -1 < *(char *)(param_1 + 0x4cdb);
  if (param_2 == '\0') {
    uVar6 = 0;
    iVar4 = param_1;
    if (bVar2) {
      do {
        if (*(char *)(iVar4 + 0x4cdd) < '\x01') {
          uVar3 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
          FUN_0895e1bc(param_1,uVar6 & 0xff,uVar3);
          cVar1 = *(char *)(param_1 + 0x4cdb);
        }
        else {
          FUN_0895e1bc(param_1,uVar6 & 0xff,*(char *)(iVar4 + 0x4cdd));
          cVar1 = *(char *)(param_1 + 0x4cdb);
        }
        uVar6 = uVar6 + 1;
        iVar4 = param_1 + uVar6;
      } while ((int)uVar6 <= (int)cVar1);
    }
  }
  else {
    uVar6 = 0;
    if (bVar2) {
      uVar5 = 0;
      do {
        FUN_0895e1bc(param_1,uVar5,0);
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xff;
      } while ((int)uVar6 <= (int)*(char *)(param_1 + 0x4cdb));
    }
  }
  return;
}

