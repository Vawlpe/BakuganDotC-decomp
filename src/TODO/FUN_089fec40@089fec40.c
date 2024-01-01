#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fec40(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 300) = uVar2;
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  uVar3 = FUN_089f7720(param_2);
  FUN_089fed10(param_1,uVar3,*(undefined4 *)(param_2 + 0x20));
  uVar3 = FUN_089f7720(param_2 + 0x40);
  FUN_089fed58(param_1,uVar3,*(undefined4 *)(param_2 + 0x60));
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  uVar2 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar1 = *(undefined4 *)(param_2 + 0x98);
  uVar2 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  (**(code **)(*(int *)(param_1 + 0x74) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x38));
  return;
}

