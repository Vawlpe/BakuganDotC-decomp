#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f98d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_90;
  undefined4 local_8c;
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
  undefined4 local_50;
  int local_20;
  
  local_80 = DAT_08abfbe0;
  uStack_7c = DAT_08abfbe4;
  uStack_78 = DAT_08abfbe8;
  uStack_74 = DAT_08abfbec;
  local_70 = DAT_08abfbe0;
  uStack_6c = DAT_08abfbe4;
  uStack_68 = DAT_08abfbe8;
  uStack_64 = DAT_08abfbec;
  local_90 = param_1;
  local_50 = param_2;
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    local_70 = *(undefined4 *)(iVar2 + 0x40);
    uStack_6c = *(undefined4 *)(iVar2 + 0x44);
    uStack_68 = *(undefined4 *)(iVar2 + 0x48);
    uStack_64 = *(undefined4 *)(iVar2 + 0x4c);
    iVar2 = *(int *)(param_1 + 0x3c);
    local_80 = *(undefined4 *)(iVar2 + 0x20);
    uStack_7c = *(undefined4 *)(iVar2 + 0x24);
    uStack_78 = *(undefined4 *)(iVar2 + 0x28);
    uStack_74 = *(undefined4 *)(iVar2 + 0x2c);
    if (*(int *)(param_1 + 0x3c) != 0) {
      if (*(int *)(param_1 + 0x3c) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      else {
        iVar2 = **(int **)(param_1 + 0x3c);
        (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x3c) + (int)*(short *)(iVar2 + 8),3);
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
    }
  }
  local_60 = *(undefined4 *)(param_1 + 0x10);
  uStack_5c = *(undefined4 *)(param_1 + 0x14);
  uStack_58 = *(undefined4 *)(param_1 + 0x18);
  uStack_54 = *(undefined4 *)(param_1 + 0x1c);
  local_8c = *(undefined4 *)(param_1 + 0x30);
  local_20 = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  if (iVar2 != 0) {
    FUN_088f88c0(iVar2,&local_90);
    local_20 = iVar2;
  }
  *(int *)(param_1 + 0x3c) = local_20;
  return;
}

