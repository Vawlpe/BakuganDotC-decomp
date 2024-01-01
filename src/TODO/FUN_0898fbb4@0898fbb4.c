#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898fbb4(int param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (param_2 == '\0') {
    uVar10 = 0;
    iVar9 = 0;
    iVar7 = param_1 + 0x74;
    iVar8 = param_1;
    do {
      iVar2 = FUN_0898c888(param_1,*(undefined *)(param_1 + 0xe7d),uVar10 & 0xff,
                           *(undefined *)(param_1 + 0xe79));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      if (iVar2 == 1) {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      else {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      FUN_0898c794(param_1,uVar4,0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x68) =
           *(undefined4 *)(iVar8 + 0xb3c);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar7,3);
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 4;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar10 < 6);
    iVar9 = 0x19;
    iVar7 = 100;
    iVar8 = param_1 + 0x45c;
    do {
      iVar2 = FUN_0898c888(param_1,*(undefined *)(param_1 + 0xe7d),iVar9 - 0x19U & 0xff,
                           *(undefined *)(param_1 + 0xe79));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      if (iVar2 == 1) {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7);
        uVar1 = *(undefined *)(iVar9 + *(char *)(param_1 + 0xe79) * 6 + param_1 + 0x11a7);
      }
      else {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7);
        uVar1 = *(undefined *)(iVar9 + *(char *)(param_1 + 0xe79) * 6 + param_1 + 0x11a7);
      }
      FUN_0898c7f0(param_1,uVar4,uVar1);
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar8,3);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar9 < 0x1f);
    iVar2 = 7;
    iVar9 = 0x1c;
    iVar7 = param_1 + 0x1c;
    iVar8 = param_1 + 0x18c;
    do {
      iVar6 = (int)*(char *)(param_1 + 0xe79);
      iVar3 = FUN_0898c888(param_1,*(undefined *)(param_1 + 0xe7d),iVar2 - 7U & 0xff,
                           *(char *)(param_1 + 0xe79));
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      if (iVar3 == 1) {
        if (*(char *)(iVar2 + iVar6 * 6 + param_1 + 0x11b9) == '\0') {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
          uVar4 = *(undefined4 *)(iVar7 + 0xb3c);
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
        else {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
          uVar4 = *(undefined4 *)(iVar7 + 0xb3c);
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
      }
      else {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        uVar4 = *(undefined4 *)(iVar7 + 0xb3c);
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      *(undefined4 *)(iVar3 + 0x68) = uVar4;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      *(undefined4 *)(iVar3 + 0xc0) = 0;
      *(undefined4 *)(iVar3 + 0xc4) = 0;
      *(undefined4 *)(iVar3 + 200) = 0;
      *(undefined4 *)(iVar3 + 0xcc) = 0;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar8,3);
      iVar2 = iVar2 + 1;
      iVar9 = iVar9 + 4;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar2 < 0xd);
    iVar2 = 0xd;
    iVar9 = 0x34;
    iVar8 = param_1 + 0x34;
    iVar7 = param_1 + 0x27c;
    do {
      iVar6 = (int)*(char *)(param_1 + 0xe79);
      iVar3 = FUN_0898c888(param_1,*(undefined *)(param_1 + 0xe7d),iVar2 - 0xdU & 0xff,
                           *(char *)(param_1 + 0xe79));
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      if (iVar3 == 1) {
        if (*(char *)(iVar2 + iVar6 * 6 + param_1 + 0x11cb) == '\0') {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
          uVar4 = *(undefined4 *)(iVar8 + 0xb3c);
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
        else {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
          uVar4 = *(undefined4 *)(iVar8 + 0xb3c);
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
      }
      else {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        uVar4 = *(undefined4 *)(iVar8 + 0xb3c);
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      *(undefined4 *)(iVar3 + 0x68) = uVar4;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      *(undefined4 *)(iVar3 + 0xc0) = 0;
      *(undefined4 *)(iVar3 + 0xc4) = 0;
      *(undefined4 *)(iVar3 + 200) = 0;
      *(undefined4 *)(iVar3 + 0xcc) = 0;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar7,3);
      iVar2 = iVar2 + 1;
      iVar9 = iVar9 + 4;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar2 < 0x13);
  }
  else {
    iVar9 = 0;
    iVar7 = 0;
    iVar8 = param_1 + 0x74;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar8,3);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar9 < 6);
    iVar9 = 0x19;
    iVar7 = 100;
    iVar8 = param_1 + 0x45c;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar8,3);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar9 < 0x1f);
    iVar9 = 7;
    iVar7 = 0x1c;
    iVar8 = param_1 + 0x18c;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar8,3);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar9 < 0xd);
    iVar8 = 0xd;
    iVar7 = 0x34;
    iVar9 = param_1 + 0x27c;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar9,3);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar9 = iVar9 + 0x28;
    } while (iVar8 < 0x13);
  }
  return;
}

