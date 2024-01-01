#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891a954(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (param_2 == '\0') {
    iVar6 = 5;
    iVar5 = 0x14;
    iVar4 = param_1 + 0x140;
    iVar3 = param_1 + 0x28;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      fVar7 = *(float *)(param_1 + 0x780);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60) = fVar7;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar3 + 0x758) - fVar7,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0xb);
    iVar1 = 0xb;
    iVar6 = 0x2c;
    iVar5 = param_1 + 0x230;
    iVar4 = param_1 + 0x58;
    iVar3 = param_1 + 0x2c;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (*(char *)(iVar3 + 0x874) == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        FUN_08919954(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),
                     *(undefined *)(iVar3 + 0x874));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (*(char *)(iVar3 + 0x876) != '\0') {
          *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xbc) = 0;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        }
      }
      fVar7 = *(float *)(param_1 + 0x7b0);
      *(float *)(iVar2 + 0x60) = fVar7;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar4 + 0x758) - fVar7,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,5);
      iVar1 = iVar1 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
      iVar4 = iVar4 + 8;
      iVar3 = iVar3 + 4;
    } while (iVar1 < 0x11);
    iVar1 = 0x12;
    iVar6 = 0x48;
    iVar5 = param_1 + 0x348;
    iVar4 = param_1 + 0x90;
    iVar3 = param_1 + 0x48;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (*(char *)(iVar3 + 0x85a) == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar7 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x900);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar7 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x900);
      }
      *(float *)(iVar2 + 0x60) = fVar7;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
           *(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x904);
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(iVar4 + 0x6f0) + *(float *)(param_1 + 0x900)) -
                   (*(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x900)),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,5);
      iVar1 = iVar1 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
      iVar4 = iVar4 + 8;
      iVar3 = iVar3 + 4;
    } while (iVar1 < 0x18);
  }
  else {
    iVar6 = 5;
    iVar5 = 0x14;
    iVar4 = param_1 + 0x140;
    iVar3 = param_1 + 0x28;
    do {
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x780) - *(float *)(iVar3 + 0x758),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0xb);
    iVar6 = 0xb;
    iVar5 = 0x2c;
    iVar4 = param_1 + 0x230;
    iVar3 = param_1 + 0x58;
    do {
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x7b0) - *(float *)(iVar3 + 0x758),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x11);
    iVar6 = 0x12;
    iVar5 = 0x48;
    iVar4 = param_1 + 0x348;
    iVar3 = param_1 + 0x90;
    do {
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x900)) -
                   (*(float *)(iVar3 + 0x6f0) + *(float *)(param_1 + 0x900)),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x18);
  }
  return;
}

