#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08997d04(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  memset_jak(param_1 + 0x74,0,0xeb0);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x24);
  uVar7 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  iVar5 = param_1;
  do {
    *(uint *)(*(int *)(iVar2 + iVar6) + 0xd0) =
         *(uint *)(*(int *)(iVar2 + iVar6) + 0xd0) & 0xfffffffe;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = 0;
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
    *(undefined4 *)(iVar5 + 0xf24) = *(undefined4 *)(*piVar3 + 0x68);
    FUN_089f46dc(*piVar3);
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
    uVar7 = uVar7 + 1;
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 4;
    iVar2 = *(int *)(param_1 + 0x1c);
  } while (uVar7 < 0x5d);
  uVar7 = 0x32;
  iVar5 = 200;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(iVar2 + iVar5));
    uVar7 = uVar7 + 1;
    iVar5 = iVar5 + 4;
    iVar2 = *(int *)(param_1 + 0x1c);
  } while (uVar7 < 0x35);
  FUN_089f43d4(0x3f000000,*(undefined4 *)(iVar2 + 0xd4));
  piVar3 = *(int **)(param_1 + 0x1c);
  *(float *)(param_1 + 0x10e8) = *(float *)(*piVar3 + 100) - *(float *)(piVar3[0x10] + 100);
  *(float *)(param_1 + 0x10ec) = *(float *)(*piVar3 + 0x60) - *(float *)(piVar3[0x2a] + 0x60);
  *(float *)(param_1 + 0x10f0) = *(float *)(*piVar3 + 100) - *(float *)(piVar3[0x2a] + 100);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar2 != 0) {
    FUN_089f3aa8(iVar2);
    iVar5 = iVar2;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x174) = iVar5;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174));
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x174);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x68) + 0x128) = 4;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x80) + 0x128) = 4;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x84) + 0x128) = 4;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) + 0x128) = 4;
  iVar5 = FUN_08996448(param_1);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 100);
  if (iVar5 == 0) {
    FUN_089f4a90(0,0x3f800000,uVar1);
  }
  else {
    FUN_089f4a90(0,0x41000000,uVar1);
  }
  FUN_08997a7c(param_1);
  if (*(char *)(param_1 + 0x10bb) == '\0') {
    pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0x60);
    *pfVar4 = *pfVar4 + 40.0;
    pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x90) + 0x60);
    *pfVar4 = *pfVar4 + 40.0;
    pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 0x60);
    *pfVar4 = *pfVar4 + 40.0;
    pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 0x60);
    *pfVar4 = *pfVar4 + 40.0;
  }
  return;
}

