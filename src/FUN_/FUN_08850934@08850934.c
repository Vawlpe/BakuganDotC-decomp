#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08850934(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *local_30;
  uint local_2c;
  uint local_28;
  
  uVar2 = FUN_089f2178(0);
  local_30 = (uint *)FUN_089f1308(uVar2);
  puVar1 = DAT_08ac5c74;
  *local_30 = *DAT_08ac5c74 & 0xffffff | 0xcf000000;
  local_2c = puVar1[1];
  local_30[1] = local_2c >> 8 | 0xcd000000;
  local_28 = puVar1[2];
  local_30[2] = local_28 >> 8 | 0xce000000;
  local_30 = local_30 + 3;
  puVar3 = (undefined4 *)FUN_089f1490(local_30,DAT_08ac5c90,1);
  *puVar3 = 0x19000001;
  local_30 = puVar3 + 1;
  FUN_088acbdc(&local_30);
  FUN_089f13c8(uVar2,local_30);
  uVar2 = FUN_089f2178(0x3f800000);
  local_30 = (uint *)FUN_089f1308(uVar2);
  puVar3 = (undefined4 *)FUN_089f1490(local_30,DAT_08ac5c90,1);
  *puVar3 = 0x19000001;
  local_30 = puVar3 + 1;
  iVar4 = FUN_088660e0();
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x14) + 0x44))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x40),&local_30);
    iVar4 = FUN_08860344(iVar4);
    if (iVar4 != 0) {
      (**(code **)(*(int *)(iVar4 + 0x14) + 0x44))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x40),&local_30);
    }
  }
  FUN_089f13c8(uVar2,local_30);
  FUN_089f50a0(*(undefined4 *)(param_1 + 0x434),uVar2,DAT_08ac5c90,0);
  FUN_08824ab8(*(undefined4 *)(param_1 + 0x4d4),uVar2,DAT_08ac5c90);
  FUN_089f50a0(*(undefined4 *)(param_1 + 0x4d4),uVar2,DAT_08ac5c90,0);
  uVar2 = FUN_088500fc(0x40000000,param_1);
  FUN_0888b95c(uVar2);
  FUN_089f8a64(param_1 + 0x488);
  uVar2 = FUN_089f2178(0x40400000);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x430),uVar2);
  return;
}

