#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fef04(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar3 = FUN_089f7720(param_2);
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 300) = uVar2;
  iVar5 = 0;
  uVar3 = *(undefined4 *)(param_1 + 0xa4);
  while( true ) {
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_54 = 0;
    iVar4 = FUN_089f54d8(param_1,uVar3,&local_60,0);
    uVar3 = *(undefined4 *)(param_1 + 0x114);
    uVar1 = *(undefined4 *)(param_1 + 0x118);
    uVar2 = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(iVar4 + 0xb4) = uVar3;
    *(undefined4 *)(iVar4 + 0xb8) = uVar1;
    *(undefined4 *)(iVar4 + 0xbc) = uVar2;
    FUN_089f46dc(iVar4);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 0x20;
    *(undefined4 *)(iVar4 + 0xd8) = *(undefined4 *)(param_2 + 0x20);
    iVar5 = iVar5 + 1;
    if (7 < iVar5) break;
    uVar3 = *(undefined4 *)(param_1 + 0xa4);
  }
  FUN_089feda8(param_1);
  uVar3 = FUN_089f7720(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  uVar2 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_64 = 0;
  iVar5 = FUN_089f54d8(param_1,*(undefined4 *)(param_1 + 0xa8),&local_70,0);
  *(int *)(param_1 + 0xac) = iVar5;
  uVar3 = *(undefined4 *)(param_1 + 0x124);
  uVar1 = *(undefined4 *)(param_1 + 0x128);
  uVar2 = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(iVar5 + 0xb4) = uVar3;
  *(undefined4 *)(iVar5 + 0xb8) = uVar1;
  *(undefined4 *)(iVar5 + 0xbc) = uVar2;
  *(uint *)(*(int *)(param_1 + 0xac) + 0xd0) = *(uint *)(*(int *)(param_1 + 0xac) + 0xd0) | 0x20;
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0xd8) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar1 = *(undefined4 *)(param_2 + 0x98);
  uVar2 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined *)(param_1 + 4) = 1;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 1;
  return;
}

