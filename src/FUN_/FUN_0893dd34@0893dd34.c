#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893dd34(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 4;
  do {
    *(uint *)(*(int *)(iVar1 + iVar2) + 0xd0) = *(uint *)(*(int *)(iVar1 + iVar2) + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc) = 0x3f800000;
    FUN_0893dc38(param_1,param_2,uVar3 & 0xff);
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar1 = *(int *)(param_1 + 0x1c);
  } while ((int)uVar3 < 0xb);
  uVar3 = 0x14;
  iVar2 = 0x50;
  do {
    *(uint *)(*(int *)(iVar1 + iVar2) + 0xd0) = *(uint *)(*(int *)(iVar1 + iVar2) + 0xd0) | 1;
    FUN_089f4a90((float)((int)(uVar3 - 0x14) / 5),(float)((int)(uVar3 - 0x14) % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    FUN_0893dc38(param_1,param_2,uVar3 & 0xff);
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar1 = *(int *)(param_1 + 0x1c);
  } while ((int)uVar3 < 0x1e);
  uVar3 = 0xb;
  iVar2 = 0x2c;
  do {
    *(uint *)(*(int *)(iVar1 + iVar2) + 0xd0) = *(uint *)(*(int *)(iVar1 + iVar2) + 0xd0) | 1;
    FUN_0893dc38(param_1,param_2,uVar3 & 0xff);
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar1 = *(int *)(param_1 + 0x1c);
  } while ((int)uVar3 < 0xd);
  uVar3 = 0x20;
  iVar2 = 0x80;
  do {
    *(uint *)(*(int *)(iVar1 + iVar2) + 0xd0) = *(uint *)(*(int *)(iVar1 + iVar2) + 0xd0) | 1;
    FUN_0893dc38(param_1,param_2,uVar3 & 0xff);
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar1 = *(int *)(param_1 + 0x1c);
  } while ((int)uVar3 < 0x22);
  *(uint *)(*(int *)(iVar1 + 0x34) + 0xd0) = *(uint *)(*(int *)(iVar1 + 0x34) + 0xd0) | 1;
  FUN_0893dc38(param_1,param_2,0xd);
  uVar3 = 0x1e;
  iVar1 = 0x78;
  do {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    FUN_0893dc38(param_1,param_2,uVar3 & 0xff);
    uVar3 = uVar3 + 1;
    iVar1 = iVar1 + 4;
  } while ((int)uVar3 < 0x20);
  uVar4 = 0xe;
  uVar3 = 0xe;
  do {
    FUN_0893dc38(param_1,param_2,uVar3);
    uVar4 = uVar4 + 1;
    uVar3 = uVar4 & 0xff;
  } while ((int)uVar4 < 0x14);
  uVar3 = 0x26;
  iVar1 = 0x98;
  do {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    FUN_0893dc38(param_1,param_2,uVar3 & 0xff);
    uVar3 = uVar3 + 1;
    iVar1 = iVar1 + 4;
  } while ((int)uVar3 < 0x27);
  return;
}

