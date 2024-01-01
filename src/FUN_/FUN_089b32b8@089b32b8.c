#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b32b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(undefined4 *)(&DAT_08abcfac + param_2 * 4);
  iVar5 = 0x25;
  iVar4 = 0;
  do {
    iVar1 = FUN_089b2e1c(uVar3,iVar4,0,0);
    iVar5 = iVar5 * 4;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    if (iVar1 != 2) {
      FUN_089f4bf4(*(undefined4 *)(&DAT_08a9fadc + *(int *)(param_1 + iVar1 * 4 + 0x90) * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) = 0xc0a00000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    iVar5 = FUN_089b2e1c(uVar3,iVar4,0,1);
    iVar2 = (iVar4 + 0x29) * 4;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    if (iVar5 != 2) {
      FUN_089f4bf4(*(undefined4 *)(&DAT_08a9fadc + *(int *)(param_1 + iVar5 * 4 + 0x90) * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) = 0xc0a00000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    iVar5 = FUN_089b2e1c(uVar3,iVar4,1,0);
    iVar2 = (iVar4 + 0x2d) * 4;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    if (iVar5 != 2) {
      FUN_089f4bf4(*(undefined4 *)(&DAT_08a9fadc + *(int *)(param_1 + iVar5 * 4 + 0x90) * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) = 0xc0a00000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    iVar5 = FUN_089b2e1c(uVar3,iVar4,1,1);
    iVar2 = (iVar4 + 0x31) * 4;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    if (iVar5 != 2) {
      FUN_089f4bf4(*(undefined4 *)(&DAT_08a9fadc + *(int *)(param_1 + iVar5 * 4 + 0x90) * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) = 0xc0a00000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    iVar5 = FUN_089b2e1c(uVar3,iVar4,2,0);
    iVar2 = (iVar4 + 0x35) * 4;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    if (iVar5 != 2) {
      FUN_089f4bf4(*(undefined4 *)(&DAT_08a9fadc + *(int *)(param_1 + iVar5 * 4 + 0x90) * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) = 0xc0a00000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    iVar5 = FUN_089b2e1c(uVar3,iVar4,3,0);
    iVar2 = (iVar4 + 0x39) * 4;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    if (iVar5 != 2) {
      FUN_089f4bf4(*(undefined4 *)(&DAT_08a9fadc + *(int *)(param_1 + iVar5 * 4 + 0x90) * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) = 0xc0a00000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    iVar1 = iVar4 + 1;
    iVar5 = iVar4 + 0x26;
    iVar4 = iVar1;
  } while (iVar1 < 4);
  return;
}

