#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893584c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 10;
  iVar3 = 0x28;
  do {
    FUN_089357bc(param_1,uVar4 & 0xffff);
    if ((*(byte *)(param_1 + uVar4 + 0x19f2) & 1) == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while ((int)uVar4 < 0xe);
  uVar4 = 0x32;
  iVar3 = 200;
  do {
    FUN_089357bc(param_1,uVar4 & 0xffff);
    if ((*(byte *)(param_1 + uVar4 + 0x19ca) & 1) == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while ((int)uVar4 < 0x36);
  uVar4 = 0x28;
  iVar3 = 0xa0;
  do {
    FUN_089357bc(param_1,uVar4 & 0xffff);
    cVar1 = *(char *)(param_1 + uVar4 + 0x19dc);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    if (cVar1 == -1) {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    }
    else {
      FUN_0892bdec(iVar2,cVar1);
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while ((int)uVar4 < 0x2a);
  uVar4 = 0x18;
  iVar3 = 0x60;
  do {
    FUN_089357bc(param_1,uVar4 & 0xffff);
    FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),2);
    if ((*(byte *)(param_1 + uVar4 + 0x19e4) & 1) == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while ((int)uVar4 < 0x1c);
  return;
}

