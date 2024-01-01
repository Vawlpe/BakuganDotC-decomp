#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f9e7c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 *local_50;
  int local_1c;
  undefined4 *local_18;
  
  local_18 = (undefined4 *)0x0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar2 = (undefined4 *)FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  local_60 = param_1 + 0x3c;
  local_50 = local_18;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_08af6ed0;
    puVar2[3] = local_60;
    local_50 = puVar2;
  }
  local_50[1] = param_1;
  local_50[2] = *(undefined4 *)(param_1 + 0x30);
  local_90 = DAT_08abfbe0;
  uStack_8c = DAT_08abfbe4;
  uStack_88 = DAT_08abfbe8;
  uStack_84 = DAT_08abfbec;
  local_80 = DAT_08abfbe0;
  uStack_7c = DAT_08abfbe4;
  uStack_78 = DAT_08abfbe8;
  uStack_74 = DAT_08abfbec;
  local_9c = *(undefined4 *)(param_1 + 0x30);
  local_a0 = param_1;
  local_70 = in_V72;
  uStack_6c = in_V76;
  uStack_68 = in_V7A;
  uStack_64 = in_V7E;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    local_90 = *(undefined4 *)(iVar4 + 0x20);
    uStack_8c = *(undefined4 *)(iVar4 + 0x24);
    uStack_88 = *(undefined4 *)(iVar4 + 0x28);
    uStack_84 = *(undefined4 *)(iVar4 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x38);
    local_80 = *(undefined4 *)(iVar4 + 0x40);
    uStack_7c = *(undefined4 *)(iVar4 + 0x44);
    uStack_78 = *(undefined4 *)(iVar4 + 0x48);
    uStack_74 = *(undefined4 *)(iVar4 + 0x4c);
    iVar4 = **(int **)(param_1 + 0x38);
    puVar2 = (undefined4 *)
             (**(code **)(iVar4 + 0x14))
                       ((int)*(int **)(param_1 + 0x38) + (int)*(short *)(iVar4 + 0x10));
    local_70 = *puVar2;
    uStack_6c = puVar2[1];
    uStack_68 = puVar2[2];
    uStack_64 = puVar2[3];
    if (*(int *)(param_1 + 0x38) != 0) {
      if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        iVar4 = **(int **)(param_1 + 0x38);
        (**(code **)(iVar4 + 0xc))((int)*(int **)(param_1 + 0x38) + (int)*(short *)(iVar4 + 8),3);
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
  }
  local_1c = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x150,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = local_1c;
  if (iVar3 != 0) {
    FUN_088f69d4(iVar3,&local_a0);
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x38) = iVar4;
  FUN_088f9a1c(param_1);
  return;
}

