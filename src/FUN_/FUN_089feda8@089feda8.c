#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089feda8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  puVar2 = &local_b0;
  iVar1 = FUN_089f70c4(*(undefined4 *)(param_1 + 0xa4));
  fVar4 = (float)iVar1 * 0.5 - 1.0;
  fVar5 = fVar4 + 2.0;
  iVar1 = FUN_089f70d0(*(undefined4 *)(param_1 + 0xa4));
  local_b0 = 0;
  local_ac = 0;
  local_a4 = (float)iVar1 * 0.5 - 1.0;
  local_9c = 0;
  local_98 = 0x40000000;
  local_8c = 0;
  local_80 = 0;
  local_74 = 0x40000000;
  local_5c = local_a4 + 2.0;
  local_64 = 0x40000000;
  local_60 = 0;
  local_48 = 0x40000000;
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar1 = 0;
  local_a8 = fVar4;
  local_a0 = fVar4;
  local_94 = local_a4;
  local_90 = fVar5;
  local_88 = fVar4;
  local_84 = local_a4;
  local_7c = local_a4;
  local_78 = fVar4;
  local_70 = fVar5;
  local_6c = local_a4;
  local_68 = fVar4;
  local_58 = fVar4;
  local_54 = local_a4;
  local_50 = fVar4;
  local_4c = local_5c;
  local_44 = local_a4;
  local_40 = fVar5;
  local_3c = local_5c;
  local_38 = fVar4;
  local_34 = local_a4;
  do {
    FUN_089f4060(iVar3,puVar2);
    iVar1 = iVar1 + 1;
    iVar3 = *(int *)(iVar3 + 4);
    puVar2 = (undefined4 *)((int)puVar2 + 0x10);
  } while (iVar1 < 8);
  return;
}

