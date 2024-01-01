#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890f83c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = FUN_089f2178(0x42480000);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xa8) = 0x3f800000;
  uVar3 = DAT_08b0086c;
  uVar2 = DAT_08b00868;
  uVar4 = DAT_08b00864;
  iVar5 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(iVar5 + 0xc0) = DAT_08b00860;
  *(undefined4 *)(iVar5 + 0xc4) = uVar4;
  *(undefined4 *)(iVar5 + 200) = uVar2;
  *(undefined4 *)(iVar5 + 0xcc) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xcc) = *(undefined4 *)(param_1 + 0x2c0);
  iVar5 = *(int *)(*(int *)(param_1 + 0x7c) + 0x74);
  (**(code **)(iVar5 + 0x14))
            (0x43700000,0x43200000,0,*(int *)(param_1 + 0x7c) + (int)*(short *)(iVar5 + 0x10),
             param_1 + 0x80,1,0,0);
  iVar5 = *(int *)(param_1 + 0x7c);
  iVar6 = *(int *)(iVar5 + 0x74);
  sVar1 = *(short *)(iVar6 + 0x28);
  uVar4 = FUN_089f2178(0x44098000);
  (**(code **)(iVar6 + 0x2c))(iVar5 + sVar1,uVar4);
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xa8) = 0x3f400000;
  uVar3 = DAT_08b0019c;
  uVar2 = DAT_08b00198;
  uVar4 = DAT_08b00194;
  iVar5 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(iVar5 + 0xc0) = DAT_08b00190;
  *(undefined4 *)(iVar5 + 0xc4) = uVar4;
  *(undefined4 *)(iVar5 + 200) = uVar2;
  *(undefined4 *)(iVar5 + 0xcc) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xcc) = *(undefined4 *)(param_1 + 0x2c0);
  iVar5 = *(int *)(*(int *)(param_1 + 0x7c) + 0x74);
  (**(code **)(iVar5 + 0x14))
            (0x42e80000,0x434c0000,0,*(int *)(param_1 + 0x7c) + (int)*(short *)(iVar5 + 0x10),
             param_1 + 0xc0,0,0,0);
  iVar5 = *(int *)(param_1 + 0x7c);
  iVar6 = *(int *)(iVar5 + 0x74);
  sVar1 = *(short *)(iVar6 + 0x28);
  uVar4 = FUN_089f2178(0x44098000);
  (**(code **)(iVar6 + 0x2c))(iVar5 + sVar1,uVar4);
  return;
}

