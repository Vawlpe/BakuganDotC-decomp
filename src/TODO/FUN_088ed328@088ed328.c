#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ed328(int param_1,uint param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (param_2 & 0xff) * 100;
  uVar2 = FUN_088ea860((int)param_3);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 + 0x30) = uVar2;
  iVar3 = *(int *)(param_1 + 0x30) + iVar1;
  if (*(int *)(iVar3 + 0x30) == 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    uVar2 = 1;
    iVar5 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(iVar3 + 0x40) = 1;
    *(undefined4 *)(iVar4 + iVar1 + 0x3c) = 1;
    *(undefined4 *)(iVar5 + iVar1 + 0x38) = 1;
    iVar3 = *(int *)(param_1 + 0x30);
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x30) + 4);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(iVar3 + 0x40) = uVar2;
    *(undefined4 *)(iVar4 + iVar1 + 0x3c) = uVar2;
    *(undefined4 *)(iVar5 + iVar1 + 0x38) = uVar2;
    iVar3 = *(int *)(param_1 + 0x30);
  }
  *(undefined4 *)(iVar3 + iVar1 + 0x34) = uVar2;
  return;
}

