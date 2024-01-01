#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893dc38(int param_1,char param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = (param_3 & 0xff) * 4;
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
  iVar3 = param_1 + (param_3 & 0xff) * 0x28;
  if (param_2 == '\0') {
    FUN_089f46dc(*piVar1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x20;
    FUN_089a51fc(0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar2 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar3 + 0x94) = 0;
    piVar1 = (int *)(iVar2 + iVar4);
    *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(*piVar1 + 0xbc);
    uVar5 = *(undefined4 *)(*piVar1 + 0x90);
    *(undefined *)(iVar3 + 0x7f) = 0;
    *(undefined4 *)(iVar3 + 0x9c) = uVar5;
  }
  else {
    *(undefined4 *)(iVar3 + 0x94) = 0;
    *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(*piVar1 + 0xbc);
    uVar5 = *(undefined4 *)(*piVar1 + 0x90);
    *(undefined *)(iVar3 + 0x7f) = 0;
    *(undefined4 *)(iVar3 + 0x9c) = uVar5;
  }
  return;
}

