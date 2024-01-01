#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089832cc(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 == '\0') {
    iVar5 = 0;
    iVar4 = 0;
    iVar2 = param_1 + 0x74;
    iVar3 = param_1;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089831d4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
           *(undefined4 *)(iVar3 + 0xac4);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar1 + 0xc0) = 0;
      *(undefined4 *)(iVar1 + 0xc4) = 0;
      *(undefined4 *)(iVar1 + 200) = 0;
      *(undefined4 *)(iVar1 + 0xcc) = 0;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar2,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar5 < 4);
    iVar5 = 0x17;
    iVar4 = 0x5c;
    iVar2 = param_1 + 0x5c;
    iVar3 = param_1 + 0x40c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_08983230(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),
                   *(undefined *)(iVar5 + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xbc1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
           *(undefined4 *)(iVar2 + 0xac4);
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x1b);
    iVar5 = 5;
    iVar4 = 0x14;
    iVar2 = param_1 + 0x14;
    iVar3 = param_1 + 0x13c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (*(char *)(iVar5 + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xbd3) == -1) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        uVar6 = *(undefined4 *)(iVar2 + 0xac4);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        uVar6 = *(undefined4 *)(iVar2 + 0xac4);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(undefined4 *)(iVar1 + 0x68) = uVar6;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 9);
    iVar5 = 9;
    iVar4 = 0x24;
    iVar2 = param_1 + 0x24;
    iVar3 = param_1 + 0x1dc;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (*(char *)(iVar5 + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xc1f) == '\0') {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        uVar6 = *(undefined4 *)(iVar2 + 0xac4);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        uVar6 = *(undefined4 *)(iVar2 + 0xac4);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(undefined4 *)(iVar1 + 0x68) = uVar6;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0xd);
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    iVar3 = param_1 + 0x74;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),iVar3,3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar4 < 4);
    iVar4 = 0x17;
    iVar2 = 0x5c;
    iVar3 = param_1 + 0x40c;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),iVar3,3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar4 < 0x1b);
    iVar4 = 5;
    iVar2 = 0x14;
    iVar3 = param_1 + 0x13c;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),iVar3,3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar4 < 9);
    iVar4 = 9;
    iVar2 = 0x24;
    iVar3 = param_1 + 0x1dc;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),iVar3,3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar4 < 0xd);
  }
  return;
}

