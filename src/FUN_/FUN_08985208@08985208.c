#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985208(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x27;
    iVar3 = 0x9c;
    iVar2 = param_1 + 0x68c;
    do {
      FUN_08983230(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),
                   *(undefined *)
                    ((int)*(char *)(param_1 + 0xbcc) + *(char *)(param_1 + 0xbcd) * 4 + param_1 +
                    0xbd8));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 4;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x28);
    iVar4 = 0x32;
    iVar3 = 200;
    iVar2 = param_1 + 0x844;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 4;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x33);
  }
  else {
    iVar4 = 0x27;
    iVar3 = 0x9c;
    iVar2 = param_1 + 0x68c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x28);
    iVar4 = 0x32;
    iVar3 = 200;
    iVar2 = param_1 + 0x844;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x33);
  }
  return;
}

