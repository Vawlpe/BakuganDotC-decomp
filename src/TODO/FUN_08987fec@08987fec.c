#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08987fec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  memset_jak((undefined *)(param_1 + 0x74),0,0x7a8);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x2a);
  uVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar4 = 0;
  iVar5 = param_1;
  do {
    *(uint *)(*(int *)(iVar2 + iVar4) + 0xd0) =
         *(uint *)(*(int *)(iVar2 + iVar4) + 0xd0) & 0xfffffffe;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0;
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar6 = uVar6 + 1;
    piVar3 = (int *)(iVar2 + iVar4);
    iVar4 = iVar4 + 4;
    *(undefined4 *)(iVar5 + 0x81c) = *(undefined4 *)(*piVar3 + 0x68);
    iVar5 = iVar5 + 4;
  } while (uVar6 < 0x30);
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
  *(int *)(*(int *)(param_1 + 0x1c) + 0xc0) = iVar5;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc0));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc0));
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc0);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
  uVar6 = 0xd;
  piVar3 = (int *)(*(int *)(param_1 + 0x1c) + 0x34);
  do {
    uVar6 = uVar6 + 1;
    *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(*piVar3 + 0x60);
    iVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(iVar5 + 100);
    param_1 = param_1 + 8;
  } while (uVar6 < 0x13);
  return;
}

