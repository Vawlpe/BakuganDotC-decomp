#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08908158(int param_1,ushort *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  *(uint *)(param_1 + 0x3c) = (uint)param_2[1];
  iVar6 = 0;
  puVar7 = param_2;
  if (*param_2 != 0) {
    do {
      local_28 = (int)param_2 + *(int *)(puVar7 + 2) + 4;
      if (*(short *)(local_28 + 2) == -1) {
        local_2c = 0;
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar4 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        iVar5 = local_2c;
        if (iVar4 != 0) {
          FUN_08907da8(iVar4,local_28,param_1);
          iVar5 = iVar4;
        }
        FUN_089d8984(iVar5,*(undefined4 *)(param_1 + 0x18));
        uVar1 = *param_2;
      }
      else {
        local_30 = 0;
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar4 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        iVar5 = local_30;
        if (iVar4 != 0) {
          FUN_08907da8(iVar4,local_28,param_1);
          iVar5 = iVar4;
        }
        FUN_089d8984(iVar5,*(undefined4 *)(param_1 + 0x18));
        uVar1 = *param_2;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar6 < (int)(uint)uVar1);
  }
  bVar2 = true;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    bVar2 = **(int **)(param_1 + 0x20) == 0;
  }
  if (bVar2) {
    local_3e = 0xffff;
    local_40 = 0;
    local_3c = 0;
    local_34 = 0;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar5 = FUN_089d7d74(0x44,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar6 = local_34;
    if (iVar5 != 0) {
      FUN_08907da8(iVar5,&local_40,param_1);
      iVar6 = iVar5;
    }
    FUN_089d8984(iVar6,*(undefined4 *)(param_1 + 0x18));
  }
  return;
}

