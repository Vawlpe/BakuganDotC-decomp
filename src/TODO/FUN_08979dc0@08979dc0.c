#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08979dc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  memset_jak((undefined *)(param_1 + 0x74),0,0xb18);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x27);
  uVar7 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  iVar4 = param_1;
  iVar5 = param_1;
  do {
    *(uint *)(*(int *)(iVar2 + iVar6) + 0xd0) =
         *(uint *)(*(int *)(iVar2 + iVar6) + 0xd0) & 0xfffffffe;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = 0;
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3 = (int *)(iVar2 + iVar6);
    *(undefined4 *)(iVar4 + 0xb8c) = *(undefined4 *)(*piVar3 + 0x68);
    uVar7 = uVar7 + 1;
    *(undefined4 *)(iVar5 + 0xca8) = *(undefined4 *)(*piVar3 + 0x60);
    iVar6 = iVar6 + 4;
    iVar4 = iVar4 + 4;
    *(undefined4 *)(iVar5 + 0xcac) = *(undefined4 *)(*piVar3 + 100);
    iVar5 = iVar5 + 8;
  } while (uVar7 < 0x46);
  uVar7 = 0;
  iVar4 = 0;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar7 = uVar7 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar7 < 6);
  uVar7 = 6;
  iVar4 = 0x18;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar7 = uVar7 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar7 < 7);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar5 != 0) {
    FUN_089f3aa8(iVar5);
    iVar4 = iVar5;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x118) = iVar4;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x118));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x118));
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x118);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  uVar7 = 0;
  piVar3 = (int *)(*(int *)(param_1 + 0x1c) + 0x1c);
  do {
    uVar7 = uVar7 + 1;
    *(undefined4 *)(param_1 + 0x12c8) = *(undefined4 *)(*piVar3 + 0x60);
    iVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    *(undefined4 *)(param_1 + 0x12cc) = *(undefined4 *)(iVar4 + 100);
    param_1 = param_1 + 8;
  } while (uVar7 < 7);
  return;
}

