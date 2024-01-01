#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ef540(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  do {
    iVar1 = FUN_089edb80();
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x24);
    iVar2 = uVar7 * 4;
    iVar6 = *(int *)(param_1 + 0x24);
    uVar7 = uVar7 + 1 & 0xff;
    uVar5 = (undefined)(int)((*(float *)(iVar1 + 0x2c) - 0.5) * 32.0);
    *(undefined *)(*(int *)(param_1 + 0x24) + iVar2 + 3) = uVar5;
    *(undefined *)(iVar3 + iVar2 + 2) = uVar5;
    *(undefined *)(iVar4 + iVar2 + 1) = uVar5;
    *(undefined *)(iVar6 + iVar2) = uVar5;
  } while (uVar7 == 0);
  memset_jak(*(undefined4 *)(param_1 + 0x28),0,4);
  return;
}

