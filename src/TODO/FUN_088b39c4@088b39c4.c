#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b39c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    local_18 = param_2;
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_088b365c(param_1);
    }
    iVar3 = local_18;
    local_40 = *(undefined4 *)(param_1 + 0x60);
    uStack_3c = *(undefined4 *)(param_1 + 100);
    uStack_38 = *(undefined4 *)(param_1 + 0x68);
    uStack_34 = *(undefined4 *)(param_1 + 0x6c);
    local_30 = *(undefined4 *)(param_1 + 0x70);
    uStack_2c = *(undefined4 *)(param_1 + 0x74);
    uStack_28 = *(undefined4 *)(param_1 + 0x78);
    uStack_24 = *(undefined4 *)(param_1 + 0x7c);
    FUN_088b38fc(0x41000000,param_1,&local_40,&local_30,"StopWallTuto");
    iVar1 = FUN_089f7720("StopWallTuto");
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x1c) = 0xc1000000;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x18) = 0xbe19999a;
    FUN_089f7c90(*(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x18),iVar1);
    FUN_089f7c04(*(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x1c),iVar1);
    if (iVar3 == 0) {
      iVar1 = 0;
      iVar3 = param_1;
      do {
        if (*(int *)(iVar3 + 0x20) != 0) {
          *(undefined4 *)(*(int *)(iVar3 + 0x20) + 0xbc) = 0x3f800000;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar1 < 2);
    }
    local_14 = 0;
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar1 = FUN_089d7d74(400,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar3 = local_14;
    if (iVar1 != 0) {
      FUN_0881a358(iVar1,2);
      iVar3 = iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    FUN_0881a520(iVar3,*(undefined4 *)(param_1 + 0x1c),8,0,0);
    *(undefined *)(*(int *)(param_1 + 0x18) + 0x104) = 0;
    *(uint *)(*(int *)(param_1 + 0x18) + 0x130) = *(uint *)(*(int *)(param_1 + 0x18) + 0x130) | 1;
    *(undefined *)(*(int *)(param_1 + 0x18) + 0x10c) = 1;
  }
  return;
}

