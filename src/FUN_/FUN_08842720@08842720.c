#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08842720(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x60) + iVar4;
    iVar3 = *(int *)(iVar1 + 0x80);
    uVar8 = *(undefined4 *)(iVar3 + 0x94);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(*(int *)(iVar1 + 0x84) + 0x94);
    iVar3 = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x60) + iVar4 + 0x84) + 0x94) = uVar8;
    iVar1 = iVar2 << 2;
    do {
      iVar6 = *(int *)(param_1 + 0x60) + iVar1;
      iVar7 = *(int *)(iVar6 + 0xe8);
      uVar8 = *(undefined4 *)(iVar7 + 0x94);
      *(undefined4 *)(iVar7 + 0x94) = *(undefined4 *)(*(int *)(iVar6 + 0xf4) + 0x94);
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x60) + iVar1 + 0xf4) + 0x94) = uVar8;
      iVar1 = iVar1 + 4;
    } while (iVar3 < 3);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
    iVar2 = iVar2 + 0xc;
  } while (iVar5 < 4);
  return;
}

