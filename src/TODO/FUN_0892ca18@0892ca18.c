#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892ca18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  memset_jak((undefined *)(param_1 + 0x78),0,0x14c8);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x2f);
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
    *(undefined4 *)(iVar5 + 0x1540) = *(undefined4 *)(*piVar3 + 0x68);
    uVar7 = uVar7 + 1;
    *(undefined4 *)(iVar4 + 0x1754) = *(undefined4 *)(*piVar3 + 0x60);
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 4;
    *(undefined4 *)(iVar4 + 0x1758) = *(undefined4 *)(*piVar3 + 100);
    iVar4 = iVar4 + 8;
  } while (uVar7 < 0x84);
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
  *(int *)(*(int *)(param_1 + 0x1c) + 0x210) = iVar4;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x210));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x210));
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x210);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  FUN_0892c980(param_1);
  iVar4 = *(int *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x1cd0) =
       *(float *)(*(int *)(iVar4 + 0x178) + 0x60) - *(float *)(*(int *)(iVar4 + 0x68) + 0x60);
  *(float *)(param_1 + 0x1cd4) =
       *(float *)(*(int *)(iVar4 + 0x178) + 100) - *(float *)(*(int *)(iVar4 + 0x68) + 100);
  *(float *)(param_1 + 0x1cd8) =
       *(float *)(*(int *)(iVar4 + 0x1c8) + 0x60) - *(float *)(*(int *)(iVar4 + 0x68) + 0x60);
  *(float *)(param_1 + 0x1cdc) =
       *(float *)(*(int *)(iVar4 + 0x1c8) + 100) - *(float *)(*(int *)(iVar4 + 0x68) + 100);
  *(float *)(param_1 + 0x1ce0) =
       *(float *)(*(int *)(iVar4 + 0x1cc) + 0x60) - *(float *)(*(int *)(iVar4 + 0x68) + 0x60);
  *(float *)(param_1 + 0x1ce4) =
       *(float *)(*(int *)(iVar4 + 0x1cc) + 100) - *(float *)(*(int *)(iVar4 + 0x68) + 100);
  return;
}

