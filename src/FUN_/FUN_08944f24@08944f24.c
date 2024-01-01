#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08944f24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = param_1;
  do {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0xf0,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_08817708(iVar2,0,0);
      iVar3 = iVar2;
    }
    *(int *)(iVar4 + 0x8c) = iVar3;
    FUN_08817a90(iVar3,2);
    iVar5 = iVar5 + 1;
    *(undefined **)(*(int *)(iVar4 + 0x8c) + 0xd8) = &DAT_08aae718;
    *(undefined4 *)(*(int *)(iVar4 + 0x8c) + 0xe0) = 0x43f00000;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x14);
  uVar1 = FUN_089be054(DAT_08ac520c,"DNStaffCredit.bin");
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = FUN_088cc354(uVar1);
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  return;
}

