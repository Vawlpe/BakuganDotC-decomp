#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fa1d8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_088f94d0(param_2[0xc]);
  if ((param_2[0xf] != 0) && (param_2[0xe] != 0)) {
    iVar6 = param_2[0xf];
    iVar5 = *(int *)param_2[0xe];
    (**(code **)(iVar5 + 0x3c))((int)(int *)param_2[0xe] + (int)*(short *)(iVar5 + 0x38),&local_40);
    *(undefined4 *)(iVar6 + 0x70) = local_40;
    *(undefined4 *)(iVar6 + 0x74) = uStack_3c;
    *(undefined4 *)(iVar6 + 0x78) = uStack_38;
    *(undefined4 *)(iVar6 + 0x7c) = uStack_34;
    iVar5 = *(int *)param_2[0xf];
    (**(code **)(iVar5 + 0x2c))(param_1,(int)(int *)param_2[0xf] + (int)*(short *)(iVar5 + 0x28));
    iVar5 = *(int *)param_2[0xe];
    (**(code **)(iVar5 + 0x2c))(param_1,(int)(int *)param_2[0xe] + (int)*(short *)(iVar5 + 0x28));
    iVar5 = *(int *)param_2[0xf];
    (**(code **)(iVar5 + 0x34))(param_1,(int)(int *)param_2[0xf] + (int)*(short *)(iVar5 + 0x30));
    iVar5 = *(int *)param_2[0xe];
    (**(code **)(iVar5 + 0x34))(param_1,(int)(int *)param_2[0xe] + (int)*(short *)(iVar5 + 0x30));
    iVar5 = *(int *)param_2[0xe];
    puVar4 = (undefined4 *)
             (**(code **)(iVar5 + 0x14))((int)(int *)param_2[0xe] + (int)*(short *)(iVar5 + 0x10));
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *param_2 = *puVar4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    iVar5 = *(int *)param_2[0xf];
    puVar4 = (undefined4 *)
             (**(code **)(iVar5 + 0x14))((int)(int *)param_2[0xf] + (int)*(short *)(iVar5 + 0x10));
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    param_2[4] = *puVar4;
    param_2[5] = uVar1;
    param_2[6] = uVar2;
    param_2[7] = uVar3;
    *(undefined *)((int)param_2 + 0x4a) = 0;
  }
  return;
}

