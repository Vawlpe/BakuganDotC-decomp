#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f9b58(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  int local_90 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  int local_1c;
  
  local_90[0] = 0;
  local_80 = DAT_08abfbe0;
  uStack_7c = DAT_08abfbe4;
  uStack_78 = DAT_08abfbe8;
  uStack_74 = DAT_08abfbec;
  local_70 = DAT_08abfbe0;
  uStack_6c = DAT_08abfbe4;
  uStack_68 = DAT_08abfbe8;
  uStack_64 = DAT_08abfbec;
  local_60 = in_V72;
  uStack_5c = in_V76;
  uStack_58 = in_V7A;
  uStack_54 = in_V7E;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    local_80 = *(undefined4 *)(iVar4 + 0x20);
    uStack_7c = *(undefined4 *)(iVar4 + 0x24);
    uStack_78 = *(undefined4 *)(iVar4 + 0x28);
    uStack_74 = *(undefined4 *)(iVar4 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x38);
    local_70 = *(undefined4 *)(iVar4 + 0x40);
    uStack_6c = *(undefined4 *)(iVar4 + 0x44);
    uStack_68 = *(undefined4 *)(iVar4 + 0x48);
    uStack_64 = *(undefined4 *)(iVar4 + 0x4c);
    iVar4 = **(int **)(param_1 + 0x38);
    puVar1 = (undefined4 *)
             (**(code **)(iVar4 + 0x14))
                       ((int)*(int **)(param_1 + 0x38) + (int)*(short *)(iVar4 + 0x10));
    local_60 = *puVar1;
    uStack_5c = puVar1[1];
    uStack_58 = puVar1[2];
    uStack_54 = puVar1[3];
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
  local_90[0] = param_1;
  local_50 = param_2;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x90,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar4 = local_1c;
  if (iVar3 != 0) {
    FUN_088f6734(iVar3,local_90);
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x38) = iVar4;
  if (*(int *)(param_2 + 0x5c) == 1) {
    FUN_088f98d8(param_1,param_2);
  }
  else {
    FUN_088f9a1c(param_1);
  }
  return;
}

