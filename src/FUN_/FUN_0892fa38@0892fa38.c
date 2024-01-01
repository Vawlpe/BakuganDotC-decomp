#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892fa38(int param_1,char param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (param_2 == '\0') {
    iVar6 = 2;
    iVar5 = 8;
    iVar4 = param_1 + 200;
    iVar3 = param_1 + 0x10;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
      fVar7 = *(float *)(param_1 + 0x1768);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) = fVar7;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar3 + 0x1758) - fVar7,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,0xb);
      iVar6 = iVar6 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      iVar5 = iVar5 + 4;
      *(undefined4 *)(iVar1 + 0xb0) = 0x3e4ccccd;
      *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb8) = 0;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 6);
    iVar6 = 8;
    iVar5 = 0x20;
    iVar4 = param_1 + 0x1b8;
    iVar3 = param_1 + 0x40;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
      fVar7 = *(float *)(param_1 + 0x1798);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) = fVar7;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar3 + 0x1758) - fVar7,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,0xb);
      iVar6 = iVar6 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      iVar5 = iVar5 + 4;
      *(undefined4 *)(iVar1 + 0xb0) = 0x3e4ccccd;
      *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb8) = 0;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0xc);
    iVar6 = 0xc;
    iVar5 = 0x30;
    iVar4 = param_1 + 600;
    iVar3 = param_1 + 0x60;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
      FUN_089f4594(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) =
           *(undefined4 *)(param_1 + 0x17b8);
      pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100);
      *pfVar2 = *pfVar2 - 8.0;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar3 + 0x1758) - *(float *)(param_1 + 0x17b8),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,9);
      iVar6 = iVar6 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      iVar5 = iVar5 + 4;
      *(undefined4 *)(iVar1 + 0xb0) = 0x3e4ccccd;
      *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb8) = 0;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x10);
  }
  else {
    iVar6 = 2;
    iVar5 = 8;
    iVar4 = param_1 + 200;
    iVar3 = param_1 + 0x10;
    do {
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x1768) - *(float *)(iVar3 + 0x1758),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,0xb);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 6);
    iVar6 = 8;
    iVar5 = 0x20;
    iVar4 = param_1 + 0x1b8;
    iVar3 = param_1 + 0x40;
    do {
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x1798) - *(float *)(iVar3 + 0x1758),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,0xb);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0xc);
    iVar6 = 0xc;
    iVar5 = 0x30;
    iVar4 = param_1 + 600;
    iVar3 = param_1 + 0x60;
    do {
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x17b8) - *(float *)(iVar3 + 0x1758),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,9);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x10);
  }
  return;
}

