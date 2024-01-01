#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892fe5c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (param_2 == '\0') {
    iVar6 = 0x1a;
    iVar5 = 0x68;
    iVar4 = param_1 + 0x488;
    iVar3 = param_1 + 0xd0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
      fVar7 = *(float *)(param_1 + (((iVar6 + -0x1a) / 10) * 10 & 0xffU) * 8 + 0x1824);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60) = fVar7;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar3 + 0x1754) - fVar7,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x2e);
    iVar4 = 0x2e;
    iVar3 = 0xb8;
    iVar1 = param_1 + 0x7a8;
    iVar6 = param_1 + 0x170;
    iVar5 = param_1 + 0x228;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (*(char *)(iVar5 + 0x197c) == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      *(undefined4 *)(iVar2 + 0x128) = 2;
      fVar7 = *(float *)(param_1 + (((iVar4 + -0x2e) / 10) * 10 & 0xffU) * 8 + 0x18c4);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x60) = fVar7;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar6 + 0x1754) - fVar7,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar1,5);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 0x28;
      iVar6 = iVar6 + 8;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < 0x42);
    iVar5 = 0x42;
    iVar3 = 0x108;
    iVar1 = param_1 + 0xac8;
    iVar6 = param_1 + 0x210;
    iVar4 = param_1 + 0x318;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (*(char *)(iVar4 + 0x188c) == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        FUN_0892e610(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),
                     *(undefined *)(iVar4 + 0x188c));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        if ((*(uint *)(param_1 + 0x1cec) & 1 << (*(byte *)(iVar4 + 0x188c) & 0x1f)) != 0) {
          *(undefined4 *)(iVar2 + 0xb0) = 0x3e99999a;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3e99999a;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3e99999a;
          *(undefined4 *)(iVar2 + 0xbc) = 0;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        }
      }
      *(undefined4 *)(iVar2 + 0x128) = 2;
      fVar7 = *(float *)(param_1 + (((iVar5 + -0x42) / 10) * 10 & 0xffU) * 8 + 0x1964);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x60) = fVar7;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar6 + 0x1754) - fVar7,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar1,5);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 0x28;
      iVar6 = iVar6 + 8;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < 0x56);
    iVar4 = 0x5e;
    iVar3 = 0x178;
    iVar1 = param_1 + 0xf28;
    iVar6 = param_1 + 0x2f0;
    iVar5 = param_1 + 0x468;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (*(char *)(iVar5 + 0x173d) == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      *(undefined4 *)(iVar2 + 0x128) = 2;
      iVar2 = param_1 + (((iVar4 + -0x5e) / 10) * 10 & 0xffU) * 8;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x60) =
           *(float *)(iVar2 + 0x1824) + *(float *)(param_1 + 0x1cd0);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 100) =
           *(float *)(iVar2 + 0x1828) + *(float *)(param_1 + 0x1cd4);
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(iVar6 + 0x1534) + *(float *)(param_1 + 0x1cd0)) -
                   (*(float *)(iVar2 + 0x1824) + *(float *)(param_1 + 0x1cd0)),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar1,5);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 0x28;
      iVar6 = iVar6 + 8;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < 0x72);
  }
  else {
    iVar6 = 0x1a;
    iVar5 = 0x68;
    iVar4 = param_1 + 0x488;
    iVar3 = param_1 + 0xd0;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(param_1 + (((iVar6 + -0x1a) / 10) * 10 & 0xffU) * 8 + 0x1824) -
                   *(float *)(iVar3 + 0x1754),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x2e);
    iVar6 = 0x2e;
    iVar5 = 0xb8;
    iVar4 = param_1 + 0x7a8;
    iVar3 = param_1 + 0x170;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(param_1 + (((iVar6 + -0x2e) / 10) * 10 & 0xffU) * 8 + 0x18c4) -
                   *(float *)(iVar3 + 0x1754),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x42);
    iVar6 = 0x42;
    iVar5 = 0x108;
    iVar4 = param_1 + 0xac8;
    iVar3 = param_1 + 0x210;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(param_1 + (((iVar6 + -0x42) / 10) * 10 & 0xffU) * 8 + 0x1964) -
                   *(float *)(iVar3 + 0x1754),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x56);
    iVar3 = 0x5e;
    iVar4 = 0x178;
    iVar5 = param_1 + 0xf28;
    iVar6 = param_1 + 0x2f0;
    do {
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(param_1 + (((iVar3 + -0x5e) / 10) * 10 & 0xffU) * 8 + 0x1824) +
                   *(float *)(param_1 + 0x1cd0)) -
                   (*(float *)(iVar6 + 0x1534) + *(float *)(param_1 + 0x1cd0)),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,5);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
      iVar6 = iVar6 + 8;
    } while (iVar3 < 0x72);
  }
  return;
}

