#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089adbc4(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 == '\0') {
    iVar5 = 0x3d;
    iVar4 = 0xf4;
    iVar3 = param_1 + 0xa00;
    do {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4);
      piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
      FUN_089adb98(param_1,uVar6,*(undefined *)(*piVar1 + 0x6ab));
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      FUN_089a54cc(0x3f800000,0x42000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3
                   ,5);
      iVar2 = FUN_089abfa0(param_1);
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3e);
  }
  else {
    iVar5 = 0x3d;
    iVar4 = 0xf4;
    iVar3 = param_1 + 0xa00;
    do {
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      FUN_089a54cc(0x3f800000,0,0x42000000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3
                   ,7);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3e);
  }
  return;
}

