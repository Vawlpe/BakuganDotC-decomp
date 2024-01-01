#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890fab8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined auStack_60 [64];
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),6);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) =
         *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) & 0xfffffffe;
    iVar3 = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
    iVar2 = 0;
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x15);
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    pcVar4 = "repair_card_%03d";
    uVar1 = FUN_0890f9f8(param_1,*(undefined4 *)(param_1 + 0x74),"repair_card_%03d");
    FUN_089b4c84(auStack_60,pcVar4,uVar1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
    uVar1 = FUN_089f7720(auStack_60);
    *(undefined4 *)(iVar2 + 0xd4) = uVar1;
    iVar2 = FUN_089be054(DAT_08ac520c,"DMMesRepair_eu.bin");
    iVar3 = FUN_088cc354(iVar2);
    iVar6 = param_1 + 0x80;
    iVar5 = FUN_0890fa34(param_1,*(undefined4 *)(param_1 + 0x74));
    strcpy(iVar6,*(undefined4 *)(iVar2 + iVar5 * 4));
    iVar6 = param_1 + 0xc0;
    iVar5 = FUN_0890fa34(param_1,*(undefined4 *)(param_1 + 0x74));
    strcpy(iVar6,*(undefined4 *)(iVar2 + (iVar3 / 2 + iVar5) * 4));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    iVar2 = FUN_089edb80();
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    iVar2 = FUN_089edb80();
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0x3f000000;
    uVar1 = FUN_089edb80();
    FUN_089edf24(uVar1,5);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

