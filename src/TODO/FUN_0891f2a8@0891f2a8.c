#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891f2a8(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  iVar2 = 0xf;
  iVar1 = 0x3c;
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
  do {
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x14);
  if (param_2 < 2) {
    if (param_2 == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0x128) = 8;
      FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38),2);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0x128) = 8;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x128) = 8;
      FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),2);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0x128) = 8;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x128) = 8;
      FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c),1);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0x128) = 8;
    }
  }
  else if (param_2 < 3) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x128) = 8;
    FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0x128) = 8;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0xbc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x128) = 8;
    FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c),0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0xbc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0x128) = 8;
  }
  *(byte *)(param_1 + 0x2176) = param_2;
  return;
}

