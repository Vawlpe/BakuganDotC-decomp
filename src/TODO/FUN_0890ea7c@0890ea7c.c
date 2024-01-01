#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890ea7c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(int *)(param_1 + 0x84) == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0xf);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089f3aa8(iVar2);
      iVar3 = iVar2;
    }
    *(int *)(*(int *)(param_1 + 0x1c) + 0x3c) = iVar3;
    FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
    iVar3 = 0;
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar2 = 0;
    do {
      *(uint *)(*(int *)(iVar5 + iVar2) + 0xd0) =
           *(uint *)(*(int *)(iVar5 + iVar2) + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 1;
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar2);
      iVar2 = iVar2 + 4;
      *(undefined4 *)(*piVar6 + 0xbc) = 0;
      iVar5 = *(int *)(param_1 + 0x1c);
    } while (iVar3 < 0x10);
    *(uint *)(*(int *)(iVar5 + 0x1c) + 0xd0) = *(uint *)(*(int *)(iVar5 + 0x1c) + 0xd0) | 1;
    iVar3 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x84) == 0) {
      *(uint *)(*(int *)(iVar3 + 0x24) + 0xd0) = *(uint *)(*(int *)(iVar3 + 0x24) + 0xd0) | 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
    }
    else {
      pfVar4 = (float *)(*(int *)(iVar3 + 0x38) + 0x60);
      *pfVar4 = *pfVar4 + (*(float *)(*(int *)(iVar3 + 0x28) + 0x60) -
                          *(float *)(*(int *)(iVar3 + 0x20) + 0x60));
      FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x28),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20));
      FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2c));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
    }
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar2 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
    iVar5 = 0;
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar3 = *(int *)(param_1 + 0x1c);
    do {
      FUN_089f46dc(*(undefined4 *)(iVar3 + iVar5 + 0x20));
      FUN_089f4954(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x20),
                   0);
      FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x20));
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x2c));
      FUN_089f4954(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x2c),
                   0);
      FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x2c));
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
      iVar3 = *(int *)(param_1 + 0x1c);
    } while (iVar2 < 2);
    FUN_089f46dc(*(undefined4 *)(iVar3 + 0x38));
    FUN_089f4954(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38),0);
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
    iVar3 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(iVar3 + 0x38) + 0x60);
    iVar2 = iVar3 + *(int *)(param_1 + 0x7c) * 4;
    *(float *)(param_1 + 0x8c) = *(float *)(*(int *)(iVar3 + 0x38) + 0x60) + 103.0;
    FUN_0890e874(param_1,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x2c),
                 *(undefined4 *)(iVar3 + 0x38),0);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = 0xbf800000;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  if (*(char *)(param_1 + 0x91) == '\0') {
    iVar3 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar3 = FUN_089edb80();
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    iVar3 = FUN_089edb80();
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 0;
    *(undefined4 *)(iVar3 + 0x48) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0x3f000000;
    uVar1 = FUN_089edb80();
    FUN_089edf24(uVar1,3);
    iVar3 = *(int *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = iVar3 + 1;
  return;
}

