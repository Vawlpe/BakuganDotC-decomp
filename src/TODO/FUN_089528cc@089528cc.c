#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089528cc(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = FUN_08952804();
  *(undefined *)(param_1 + 0x74) = uVar1;
  FUN_08952834(param_1);
  memset_jak((undefined *)(param_1 + 0x78),0,0x500);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x15);
  iVar7 = 0;
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  iVar3 = param_1;
  do {
    *(uint *)(*(int *)(iVar4 + iVar6) + 0xd0) =
         *(uint *)(*(int *)(iVar4 + iVar6) + 0xd0) & 0xfffffffe;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = 0;
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar7 = iVar7 + 1;
    piVar5 = (int *)(iVar4 + iVar6);
    iVar6 = iVar6 + 4;
    *(undefined4 *)(iVar3 + 0x578) = *(undefined4 *)(*piVar5 + 0x68);
    iVar3 = iVar3 + 4;
  } while (iVar7 < 0x1c);
  iVar4 = 0x15;
  iVar3 = 0x54;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0x18);
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar4 != 0) {
    FUN_089f3aa8(iVar4);
    iVar3 = iVar4;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x70) = iVar3;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x54),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70));
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x70);
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
  return;
}

