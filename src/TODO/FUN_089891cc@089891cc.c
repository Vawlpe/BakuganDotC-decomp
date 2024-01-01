#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089891cc(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (param_2 == '\0') {
    iVar6 = 0xd;
    iVar4 = 0x34;
    iVar5 = param_1 + 0x68;
    iVar8 = param_1 + 0x34;
    iVar7 = param_1 + 0x27c;
    do {
      iVar3 = (int)*(char *)(param_1 + 0x8e1);
      iVar1 = FUN_0898919c(param_1,iVar6 - 0xdU & 0xff,*(char *)(param_1 + 0x8e1));
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (iVar1 == 1) {
        if (*(char *)(iVar6 + iVar3 * 6 + param_1 + 0x8df) == -1) {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
          uVar9 = *(undefined4 *)(iVar5 + 0x8bc);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
        else {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
          FUN_08989100(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),
                       *(undefined *)(iVar6 + *(char *)(param_1 + 0x8e1) * 6 + param_1 + 0x8df));
          uVar9 = *(undefined4 *)(iVar5 + 0x8bc);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        uVar9 = *(undefined4 *)(iVar5 + 0x8bc);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(undefined4 *)(iVar1 + 0x60) = uVar9;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 100) =
           *(undefined4 *)(iVar5 + 0x8c0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
           *(undefined4 *)(iVar8 + 0x81c);
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar7,3);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 8;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar6 < 0x13);
  }
  else {
    iVar4 = 0xd;
    iVar5 = 0x34;
    iVar6 = param_1 + 0x27c;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x13);
  }
  return;
}

