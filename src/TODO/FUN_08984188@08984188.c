#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08984188(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_2 == '\0') {
    iVar6 = 0xd;
    iVar5 = 0x34;
    iVar2 = param_1 + 0x68;
    iVar3 = param_1 + 0x34;
    iVar4 = param_1 + 0x27c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (*(char *)(iVar6 + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xbcb) == -1) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        uVar7 = *(undefined4 *)(iVar2 + 0xc1c);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        FUN_08984124(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),
                     *(undefined *)(iVar6 + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xbcb));
        uVar7 = *(undefined4 *)(iVar2 + 0xc1c);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      }
      *(undefined4 *)(iVar1 + 0x60) = uVar7;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) =
           *(undefined4 *)(iVar2 + 0xc20);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) =
           *(undefined4 *)(iVar3 + 0xac4);
      FUN_089a5408(0x3ee66667,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,3);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x11);
  }
  else {
    iVar2 = 0xd;
    iVar3 = 0x34;
    iVar4 = param_1 + 0x27c;
    do {
      FUN_089a5408(0x3ee66667,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar4,3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 0x11);
  }
  return;
}

