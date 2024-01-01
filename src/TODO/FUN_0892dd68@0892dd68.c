#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892dd68(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x57;
    iVar3 = 0x15c;
    iVar2 = param_1 + 0xe10;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089f4a90(0,(float)(uint)*(ushort *)(param_1 + *(char *)(param_1 + 0x74) * 0xc + 0x1bae),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x58);
    iVar4 = 0x59;
    iVar3 = 0x164;
    iVar2 = param_1 + 0xe60;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089f4a90(0,(float)(uint)*(ushort *)(param_1 + *(char *)(param_1 + 0x74) * 0xc + 0x1bae),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x5a);
  }
  else {
    iVar4 = 0x57;
    iVar3 = 0x15c;
    iVar2 = param_1 + 0xe10;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x58);
    iVar4 = 0x59;
    iVar3 = 0x164;
    iVar2 = param_1 + 0xe60;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x5a);
  }
  return;
}

