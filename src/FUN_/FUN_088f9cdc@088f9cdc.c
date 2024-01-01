#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f9cdc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_24;
  
  local_c0 = 0;
  local_b0 = DAT_08abfbe0;
  uStack_ac = DAT_08abfbe4;
  uStack_a8 = DAT_08abfbe8;
  uStack_a4 = DAT_08abfbec;
  local_a0 = DAT_08abfbe0;
  uStack_9c = DAT_08abfbe4;
  uStack_98 = DAT_08abfbe8;
  uStack_94 = DAT_08abfbec;
  local_90 = in_V72;
  uStack_8c = in_V76;
  uStack_88 = in_V7A;
  uStack_84 = in_V7E;
  FUN_088f9a1c(param_1);
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar3 = *(int *)(param_1 + 0x38);
    local_b0 = *(undefined4 *)(iVar3 + 0x20);
    uStack_ac = *(undefined4 *)(iVar3 + 0x24);
    uStack_a8 = *(undefined4 *)(iVar3 + 0x28);
    uStack_a4 = *(undefined4 *)(iVar3 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x38);
    local_a0 = *(undefined4 *)(iVar3 + 0x40);
    uStack_9c = *(undefined4 *)(iVar3 + 0x44);
    uStack_98 = *(undefined4 *)(iVar3 + 0x48);
    uStack_94 = *(undefined4 *)(iVar3 + 0x4c);
    iVar3 = **(int **)(param_1 + 0x38);
    puVar1 = (undefined4 *)
             (**(code **)(iVar3 + 0x14))
                       ((int)*(int **)(param_1 + 0x38) + (int)*(short *)(iVar3 + 0x10));
    local_90 = *puVar1;
    uStack_8c = puVar1[1];
    uStack_88 = puVar1[2];
    uStack_84 = puVar1[3];
    if (*(int *)(param_1 + 0x38) != 0) {
      if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        iVar3 = **(int **)(param_1 + 0x38);
        (**(code **)(iVar3 + 0xc))((int)*(int **)(param_1 + 0x38) + (int)*(short *)(iVar3 + 8),3);
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
  }
  local_80 = param_1 + 0x3c;
  local_bc = *(undefined4 *)(param_1 + 0x30);
  local_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  uStack_54 = param_3[3];
  local_24 = 0;
  local_c0 = param_1;
  local_70 = param_2;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x150,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  if (iVar3 != 0) {
    FUN_088f8050(iVar3,&local_c0);
    local_24 = iVar3;
  }
  *(int *)(param_1 + 0x38) = local_24;
  return;
}

