#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897673c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined uVar9;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x503) == '\0') {
      iVar8 = 3;
      iVar7 = 0xc;
      iVar5 = param_1 + 0xc;
      iVar4 = param_1 + 0xec;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        if (((uint)*(byte *)(param_1 + 0x50c) & 1 << (iVar8 - 3U & 0x1f)) == 0) {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        else {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        *(undefined4 *)(iVar1 + 0xc0) = 0;
        *(undefined4 *)(iVar1 + 0xc4) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
             *(undefined4 *)(iVar5 + 0x4e0);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
             *(undefined4 *)(iVar5 + 0x484);
        FUN_089a54cc(0x3f800000,0xc3000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),
                     iVar4,7);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 0x28;
      } while (iVar8 < 6);
      iVar8 = 0xd;
      iVar7 = 0x34;
      iVar5 = param_1 + 0x34;
      iVar4 = param_1 + 0x27c;
      do {
        FUN_08974b08(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),0);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        *(undefined4 *)(iVar1 + 0xc0) = 0;
        *(undefined4 *)(iVar1 + 0xc4) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
             *(undefined4 *)(iVar5 + 0x4b8);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
             *(undefined4 *)(iVar5 + 0x484);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        if ((*(char *)(param_1 + 0x760) != '\0') && (iVar8 == 0x11)) {
          *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        FUN_089a54cc(0x3f800000,0xc3000000,0,0,iVar1,iVar4,7);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 0x28;
      } while (iVar8 < 0x12);
      iVar8 = 10;
      iVar7 = 0x28;
      iVar5 = param_1 + 0x28;
      iVar4 = param_1 + 0x204;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        if ((*(char *)(param_1 + 0x760) != '\0') && (iVar8 == 0xb)) {
          *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        if (((uint)*(byte *)(param_1 + 0x50c) & 1 << (iVar8 - 7U & 0x1f)) == 0) {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        else {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        *(undefined4 *)(iVar1 + 0xc0) = 0;
        *(undefined4 *)(iVar1 + 0xc4) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
             *(undefined4 *)(iVar5 + 0x4c4);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
             *(undefined4 *)(iVar5 + 0x484);
        FUN_089a54cc(0x3f800000,0xc3000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),
                     iVar4,7);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 0x28;
      } while (iVar8 < 0xc);
      iVar5 = 1;
      iVar4 = 4;
      do {
        iVar5 = iVar5 + 1;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
        iVar4 = iVar4 + 4;
      } while (iVar5 < 2);
      iVar5 = 6;
      iVar4 = 0x18;
      do {
        iVar5 = iVar5 + 1;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
        iVar4 = iVar4 + 4;
      } while (iVar5 < 10);
    }
    else {
      uVar9 = *(undefined *)(param_1 + 0x500);
      iVar8 = 1;
      iVar7 = 4;
      iVar5 = param_1 + 4;
      iVar4 = param_1 + 0x9c;
      do {
        FUN_08975aa4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),uVar9);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        *(undefined4 *)(iVar1 + 0xc0) = 0;
        *(undefined4 *)(iVar1 + 0xc4) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
             *(undefined4 *)(iVar5 + 0x4e8);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
             *(undefined4 *)(iVar5 + 0x484);
        FUN_089a54cc(0x3f800000,0xc3000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),
                     iVar4,7);
        uVar9 = *(undefined *)(param_1 + 0x500);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 0x28;
      } while (iVar8 < 2);
      iVar4 = FUN_08975788(param_1,uVar9,*(undefined *)(param_1 + 0x501));
      iVar8 = 6;
      iVar5 = 0x18;
      iVar7 = param_1 + 0x18;
      iVar1 = param_1 + 0x164;
      do {
        uVar6 = iVar8 - 6;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        if ((int)uVar6 < iVar4) {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
          FUN_08976218(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),
                       *(undefined *)(param_1 + 0x500),uVar6 & 0xff);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
        else {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
        *(undefined4 *)(iVar2 + 0xc0) = 0;
        *(undefined4 *)(iVar2 + 0xc4) = 0;
        *(undefined4 *)(iVar2 + 200) = 0;
        *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60) =
             *(undefined4 *)(iVar7 + 0x4d4);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) =
             *(undefined4 *)(iVar7 + 0x484);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        if (((uint)*(byte *)(param_1 + *(char *)(param_1 + 0x500) + 0x511) & 1 << (uVar6 & 0x1f)) ==
            0) {
          *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xbc) = 0;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
        else {
          *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0xbc) = 0;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
        FUN_089a54cc(0x3f800000,0xc3000000,0,0,uVar3,iVar1,7);
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + 4;
        iVar7 = iVar7 + 4;
        iVar1 = iVar1 + 0x28;
      } while (iVar8 < 10);
      iVar1 = 0xd;
      iVar8 = 0x34;
      iVar5 = param_1 + 0x34;
      iVar7 = param_1 + 0x27c;
      do {
        FUN_08974b08(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),0);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        if (iVar1 + -0xd < iVar4) {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        }
        else {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        }
        *(undefined4 *)(iVar2 + 0xc0) = 0;
        *(undefined4 *)(iVar2 + 0xc4) = 0;
        *(undefined4 *)(iVar2 + 200) = 0;
        *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
             *(undefined4 *)(iVar5 + 0x4b8);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             *(undefined4 *)(iVar5 + 0x484);
        FUN_089a54cc(0x3f800000,0xc3000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     iVar7,7);
        iVar1 = iVar1 + 1;
        iVar8 = iVar8 + 4;
        iVar5 = iVar5 + 4;
        iVar7 = iVar7 + 0x28;
      } while (iVar1 < 0x11);
      iVar5 = 3;
      iVar4 = 0xc;
      do {
        iVar5 = iVar5 + 1;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
        iVar4 = iVar4 + 4;
      } while (iVar5 < 6);
      iVar5 = 10;
      iVar4 = 0x28;
      do {
        iVar5 = iVar5 + 1;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
        iVar4 = iVar4 + 4;
      } while (iVar5 < 0xc);
      iVar5 = 0x11;
      iVar4 = 0x44;
      do {
        iVar5 = iVar5 + 1;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
        iVar4 = iVar4 + 4;
      } while (iVar5 < 0x12);
    }
  }
  else if (*(char *)(param_1 + 0x503) == '\0') {
    iVar7 = 3;
    iVar5 = 0xc;
    iVar4 = param_1 + 0xec;
    do {
      FUN_089a54cc(0x3f800000,0,0xc3000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5)
                   ,iVar4,7);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 6);
    iVar7 = 0xd;
    iVar5 = 0x34;
    iVar4 = param_1 + 0x27c;
    do {
      FUN_089a54cc(0x3f800000,0,0xc3000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5)
                   ,iVar4,7);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x12);
    iVar7 = 10;
    iVar5 = 0x28;
    iVar4 = param_1 + 0x204;
    do {
      FUN_089a54cc(0x3f800000,0,0xc3000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5)
                   ,iVar4,7);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0xc);
  }
  else {
    iVar7 = 1;
    iVar5 = 4;
    iVar4 = param_1 + 0x9c;
    do {
      FUN_089a54cc(0x3f800000,0,0xc3000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5)
                   ,iVar4,7);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 2);
    iVar7 = 6;
    iVar5 = 0x18;
    iVar4 = param_1 + 0x164;
    do {
      FUN_089a54cc(0x3f800000,0,0xc3000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5)
                   ,iVar4,7);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 10);
    iVar4 = 0xd;
    iVar5 = 0x34;
    iVar7 = param_1 + 0x27c;
    do {
      FUN_089a54cc(0x3f800000,0,0xc3000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5)
                   ,iVar7,7);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar4 < 0x11);
  }
  return;
}

