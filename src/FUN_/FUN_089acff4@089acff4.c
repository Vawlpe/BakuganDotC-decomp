#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089acff4(int param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    iVar5 = 0x24;
    iVar4 = 0x90;
    iVar2 = param_1 + 0x618;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if ((0x23 < iVar5) && (iVar5 < 0x27)) {
        uVar1 = FUN_089acf60(param_1,iVar5 - 0x24U & 0xff);
        FUN_089acee0(param_1,iVar3,uVar1);
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a54cc(0x3f800000,0x42000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar2
                   ,5);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar5 < 0x2a);
  }
  else {
    iVar5 = 0x24;
    iVar4 = 0x90;
    iVar2 = param_1 + 0x618;
    do {
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      FUN_089a54cc(0x3f800000,0,0x42000000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar2
                   ,7);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar5 < 0x2a);
  }
  return;
}

