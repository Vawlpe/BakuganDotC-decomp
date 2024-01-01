#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899c880(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 == '\0') {
    uVar9 = 0;
    iVar8 = 0;
    iVar7 = param_1 + 0x74;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      if (((uint)*(byte *)(param_1 + 0x10b8) & 1 << (uVar9 & 0x1f)) == 0) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      }
      FUN_089a5408(0x3f800000,0,uVar3,iVar7,1);
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar9 < 8);
    iVar2 = 8;
    iVar8 = 0x20;
    iVar7 = param_1 + 0x1b4;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      if (((uint)*(byte *)(param_1 + 0x10b8) & 1 << (iVar2 - 8U & 0x1f)) == 0) {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      }
      else {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      }
      FUN_089a5408(0x3f800000,0,uVar3,iVar7,1);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar2 < 0x10);
    iVar2 = 0x10;
    iVar8 = 0x40;
    iVar7 = param_1 + 0x2f4;
    do {
      if (((uint)*(byte *)(param_1 + 0x10b9) & 1 << (iVar2 - 0x10U & 0x1f)) == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      }
      else {
        iVar4 = FUN_08996448(param_1);
        if (iVar4 == 0) {
          piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
          uVar9 = (uint)*(byte *)(param_1 + iVar2 + 0x1090);
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
          if ((int)uVar9 < 0) {
            uVar5 = -(-uVar9 & 7) & 0x1f;
          }
          else {
            uVar5 = uVar9 & 7;
          }
          if (((uint)*(byte *)(*piVar1 + ((int)uVar9 >> 3) + 0x8d) & 1 << uVar5) == 0) {
            *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
          }
          else {
            *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
          }
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
          *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
        }
      }
      FUN_089a5408(0x3f800000,0,uVar3,iVar7,1);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar2 < 0x18);
    iVar2 = 0x2a;
    iVar8 = 0xa8;
    iVar7 = param_1 + 0x704;
    do {
      uVar9 = 1 << ((uint)(&DAT_ffffffd6 + iVar2) & 0x1f);
      if ((*(byte *)(param_1 + 0x10b9) & uVar9) == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      }
      else {
        iVar4 = FUN_08996448(param_1);
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        if (iVar4 == 0) {
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
        }
        else if (*(char *)(param_1 + (uint)*(byte *)(param_1 + iVar2 + 0x1076) + 0x11ae) == '\0') {
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
        }
        else if ((*(byte *)(param_1 + 0x10b8) & uVar9) == 0) {
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
        }
        else {
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
        }
      }
      FUN_089a5408(0x3f800000,0,uVar3,iVar7,1);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar2 < 0x32);
  }
  else {
    iVar2 = 0;
    iVar8 = 0;
    iVar7 = param_1 + 0x74;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),iVar7,1);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar2 < 8);
    iVar2 = 8;
    iVar8 = 0x20;
    iVar7 = param_1 + 0x1b4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),iVar7,1);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar2 < 0x10);
    iVar2 = 0x10;
    iVar8 = 0x40;
    iVar7 = param_1 + 0x2f4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),iVar7,1);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while (iVar2 < 0x18);
    iVar7 = 0x2a;
    iVar8 = 0xa8;
    iVar2 = param_1 + 0x704;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),iVar2,1);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar7 < 0x32);
  }
  return;
}

