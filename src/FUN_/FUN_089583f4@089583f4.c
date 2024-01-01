#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089583f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  memset_jak(param_1 + 0x78,0,0x3ac0);
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x2c);
    *(undefined4 *)(param_1 + 0x4fb4) = 0xec;
    uVar7 = 0xec;
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xac));
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x210));
  }
  else {
    FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x2d);
    *(undefined4 *)(param_1 + 0x4fb4) = 0x177;
    uVar7 = 0x177;
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xac));
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2b0));
  }
  uVar3 = 0;
  if (uVar7 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar4 = 0;
    iVar5 = param_1;
    do {
      *(uint *)(*(int *)(iVar2 + iVar4) + 0xd0) =
           *(uint *)(*(int *)(iVar2 + iVar4) + 0xd0) & 0xfffffffe;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0;
      iVar2 = *(int *)(param_1 + 0x1c);
      uVar3 = uVar3 + 1;
      piVar6 = (int *)(iVar2 + iVar4);
      iVar4 = iVar4 + 4;
      *(undefined4 *)(iVar5 + 0x3b38) = *(undefined4 *)(*piVar6 + 0x68);
      iVar5 = iVar5 + 4;
    } while (uVar3 < uVar7);
  }
  *(undefined *)(param_1 + 0x4ce1) = 0;
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
  *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4) = iVar5;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xac),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4));
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
  return;
}

