#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08993044(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = DAT_08ac3bdc;
  uVar2 = DAT_08ac3bd8;
  uVar1 = DAT_08ac3bd4;
  if (param_2 == '\0') {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
    *(undefined4 *)(iVar4 + 0xb0) = DAT_08ac3bd0;
    *(undefined4 *)(iVar4 + 0xb4) = uVar1;
    *(undefined4 *)(iVar4 + 0xb8) = uVar2;
    *(undefined4 *)(iVar4 + 0xbc) = uVar3;
    uVar1 = *(undefined4 *)(iVar4 + 0xb4);
    uVar2 = *(undefined4 *)(iVar4 + 0xb8);
    uVar3 = *(undefined4 *)(iVar4 + 0xbc);
    *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(iVar4 + 0xb0);
    *(undefined4 *)(iVar5 + 0xb4) = uVar1;
    *(undefined4 *)(iVar5 + 0xb8) = uVar2;
    *(undefined4 *)(iVar5 + 0xbc) = uVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0xbc) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0xbc) = 0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    *(undefined4 *)(iVar4 + 0xc4) = 0;
    *(undefined4 *)(iVar4 + 200) = 0;
    *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0xd8) = 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x6c);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x90);
    FUN_089f51b8(iVar4);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    iVar4 = *(int *)(param_1 + 0x94);
    FUN_089f51b8(iVar4);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    iVar5 = 5;
    iVar4 = 0x14;
    do {
      iVar5 = iVar5 + 1;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 10);
    iVar5 = 0x24;
    iVar4 = 0x90;
    do {
      iVar5 = iVar5 + 1;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 0x29);
    iVar5 = 0x1a;
    iVar4 = 0x68;
    do {
      iVar5 = iVar5 + 1;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 0x1b);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return;
}

