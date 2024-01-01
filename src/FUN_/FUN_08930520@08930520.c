#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08930520(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x1b80) = 0;
  FUN_089a535c(param_1 + 0x460);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0x128) = 2;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0xbc) = 0x3f800000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0x60) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x68) + 0x60);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 100) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x68) + 100);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0x68) =
       *(undefined4 *)(param_1 + 0x15a4);
  FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x210),param_1 + 0x1518);
  iVar4 = 0x1a;
  iVar3 = 0x68;
  iVar1 = param_1 + 0x68;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0x1540);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 0x2e);
  iVar4 = 0x2e;
  iVar3 = 0xb8;
  iVar1 = param_1 + 0xb8;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0x1540);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 0x42);
  iVar4 = 0x42;
  iVar3 = 0x108;
  iVar1 = param_1 + 0x108;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0x1540);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 0x56);
  iVar5 = 0x5e;
  iVar4 = 0x178;
  iVar3 = param_1 + 0x178;
  iVar1 = param_1 + 0x2f0;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar3 + 0x1540);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x60) =
         *(float *)(iVar1 + 0x1534) + *(float *)(param_1 + 0x1cd0);
    iVar5 = iVar5 + 1;
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    iVar4 = iVar4 + 4;
    *(float *)(*piVar2 + 100) = *(float *)(iVar1 + 0x1538) + *(float *)(param_1 + 0x1cd4);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 8;
  } while (iVar5 < 0x72);
  iVar1 = 0x72;
  iVar3 = 0x1c8;
  iVar4 = param_1 + 0x1c8;
  uVar6 = 0;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar4 + 0x1540);
    iVar5 = param_1 + ((iVar1 - ((int)uVar6 >> 0x1f)) + -0x72 >> 1) * 8;
    if ((int)uVar6 < 0) {
      fVar7 = *(float *)(param_1 + (uVar6 & 1) * -8 + 0x1cd8);
    }
    else {
      fVar7 = *(float *)(param_1 + (uVar6 & 1) * 8 + 0x1cd8);
    }
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x60) =
         *(float *)(iVar5 + 0x1824) + fVar7;
    if ((int)uVar6 < 0) {
      fVar7 = *(float *)(param_1 + (uVar6 & 1) * -8 + 0x1cdc);
    }
    else {
      fVar7 = *(float *)(param_1 + (uVar6 & 1) * 8 + 0x1cdc);
    }
    iVar1 = iVar1 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 100) =
         *(float *)(iVar5 + 0x1828) + fVar7;
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 4;
    uVar6 = uVar6 + 1;
  } while (iVar1 < 0x7e);
  FUN_0892f2a0(param_1,1);
  return;
}

