#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08977548(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined uVar8;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x503) == '\0') {
      iVar7 = 3;
      iVar6 = 0xc;
      iVar4 = param_1 + 0xc;
      iVar3 = param_1 + 0xec;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (((uint)*(byte *)(param_1 + 0x50c) & 1 << (iVar7 - 3U & 0x1f)) == 0) {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        }
        *(undefined4 *)(iVar1 + 0xc0) = 0;
        *(undefined4 *)(iVar1 + 0xc4) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) =
             *(undefined4 *)(iVar4 + 0x4e0);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
             *(undefined4 *)(iVar4 + 0x484);
        FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar3,3);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 0x28;
      } while (iVar7 < 6);
      iVar7 = 0xd;
      iVar6 = 0x34;
      iVar4 = param_1 + 0x34;
      iVar3 = param_1 + 0x27c;
      do {
        FUN_08974b08(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),0);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(undefined4 *)(iVar1 + 0xc0) = 0;
        *(undefined4 *)(iVar1 + 0xc4) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) =
             *(undefined4 *)(iVar4 + 0x4b8);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
             *(undefined4 *)(iVar4 + 0x484);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if ((*(char *)(param_1 + 0x760) != '\0') && (iVar7 == 0x11)) {
          *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        }
        FUN_089a5408(0x3f800000,0,iVar1,iVar3,3);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 0x28;
      } while (iVar7 < 0x12);
      iVar7 = 10;
      iVar6 = 0x28;
      iVar4 = param_1 + 0x28;
      iVar3 = param_1 + 0x204;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if ((*(char *)(param_1 + 0x760) != '\0') && (iVar7 == 0xb)) {
          *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        }
        if (((uint)*(byte *)(param_1 + 0x50c) & 1 << (iVar7 - 7U & 0x1f)) == 0) {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          *(undefined4 *)(iVar1 + 0xc0) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0xc0) = 0;
        }
        *(undefined4 *)(iVar1 + 0xc4) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) =
             *(undefined4 *)(iVar4 + 0x4c4);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
             *(undefined4 *)(iVar4 + 0x484);
        FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar3,3);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 0x28;
      } while (iVar7 < 0xc);
      iVar4 = 1;
      iVar3 = 4;
      do {
        iVar4 = iVar4 + 1;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 2);
      iVar4 = 6;
      iVar3 = 0x18;
      do {
        iVar4 = iVar4 + 1;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 10);
    }
    else {
      uVar8 = *(undefined *)(param_1 + 0x500);
      iVar7 = 1;
      iVar6 = 4;
      iVar4 = param_1 + 4;
      iVar3 = param_1 + 0x9c;
      do {
        FUN_08975aa4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),uVar8);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(undefined4 *)(iVar1 + 0xc0) = 0;
        *(undefined4 *)(iVar1 + 0xc4) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) =
             *(undefined4 *)(iVar4 + 0x4e8);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
             *(undefined4 *)(iVar4 + 0x484);
        FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar3,3);
        uVar8 = *(undefined *)(param_1 + 0x500);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 0x28;
      } while (iVar7 < 2);
      iVar3 = FUN_08975788(param_1,uVar8,*(undefined *)(param_1 + 0x501));
      iVar7 = 6;
      iVar4 = 0x18;
      iVar6 = param_1 + 0x18;
      iVar1 = param_1 + 0x164;
      do {
        uVar5 = iVar7 - 6;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        if ((int)uVar5 < iVar3) {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
          FUN_08976218(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),
                       *(undefined *)(param_1 + 0x500),uVar5 & 0xff);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
        else {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
        *(undefined4 *)(iVar2 + 0xc0) = 0;
        *(undefined4 *)(iVar2 + 0xc4) = 0;
        *(undefined4 *)(iVar2 + 200) = 0;
        *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x60) =
             *(undefined4 *)(iVar6 + 0x4d4);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
             *(undefined4 *)(iVar6 + 0x484);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        if (((uint)*(byte *)(param_1 + *(char *)(param_1 + 0x500) + 0x511) & 1 << (uVar5 & 0x1f)) ==
            0) {
          *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xbc) = 0;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
        FUN_089a5408(0x3f800000,0,iVar2,iVar1,3);
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + 4;
        iVar1 = iVar1 + 0x28;
      } while (iVar7 < 10);
      iVar1 = 0xd;
      iVar7 = 0x34;
      iVar4 = param_1 + 0x34;
      iVar6 = param_1 + 0x27c;
      do {
        FUN_08974b08(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),0);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        if (iVar1 + -0xd < iVar3) {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        else {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        *(undefined4 *)(iVar2 + 0xc0) = 0;
        *(undefined4 *)(iVar2 + 0xc4) = 0;
        *(undefined4 *)(iVar2 + 200) = 0;
        *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
             *(undefined4 *)(iVar4 + 0x4b8);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
             *(undefined4 *)(iVar4 + 0x484);
        FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar6,3);
        iVar1 = iVar1 + 1;
        iVar7 = iVar7 + 4;
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + 0x28;
      } while (iVar1 < 0x11);
      iVar4 = 3;
      iVar3 = 0xc;
      do {
        iVar4 = iVar4 + 1;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 6);
      iVar4 = 10;
      iVar3 = 0x28;
      do {
        iVar4 = iVar4 + 1;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 0xc);
      iVar4 = 0x11;
      iVar3 = 0x44;
      do {
        iVar4 = iVar4 + 1;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 0x12);
    }
  }
  else if (*(char *)(param_1 + 0x503) == '\0') {
    iVar6 = 3;
    iVar4 = 0xc;
    iVar3 = param_1 + 0xec;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar6 < 6);
    iVar6 = 0xd;
    iVar4 = 0x34;
    iVar3 = param_1 + 0x27c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar6 < 0x12);
    iVar6 = 10;
    iVar4 = 0x28;
    iVar3 = param_1 + 0x204;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar6 < 0xc);
  }
  else {
    iVar6 = 1;
    iVar4 = 4;
    iVar3 = param_1 + 0x9c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar6 < 2);
    iVar6 = 6;
    iVar4 = 0x18;
    iVar3 = param_1 + 0x164;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar6 < 10);
    iVar3 = 0xd;
    iVar4 = 0x34;
    iVar6 = param_1 + 0x27c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar6,3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar3 < 0x11);
  }
  return;
}

