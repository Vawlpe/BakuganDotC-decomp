#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08958628(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_50 [9];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = local_50;
  puVar3 = local_50;
  local_50[1] = 0;
  local_50[0] = 0xc2f00000;
  local_50[3] = 0;
  local_50[2] = 0x42f00000;
  local_50[4] = 0xc2f00000;
  local_50[6] = 0x42f00000;
  local_50[5] = 0xc2de0000;
  local_50[7] = 0xc2de0000;
  local_50[8] = 0xc2f00000;
  local_2c = 0x41a00000;
  local_28 = 0x42f00000;
  local_24 = 0x41a00000;
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    iVar5 = 0;
    iVar4 = 0;
    do {
      FUN_089e29e4(*(int *)(param_1 + 0x4d28) + iVar4);
      iVar1 = *(int *)(param_1 + 0x4d28) + iVar4;
      *(undefined4 *)(iVar1 + 0x60) = 0;
      *(undefined4 *)(iVar1 + 100) = 0;
      *(undefined4 *)(iVar1 + 0x68) = 0;
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      iVar1 = *(int *)(param_1 + 0x4d28) + iVar4;
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined4 *)(iVar1 + 0x54) = 0;
      *(undefined4 *)(iVar1 + 0x58) = 0x43160000;
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      FUN_089e3008(*puVar2,puVar2[1],*(int *)(param_1 + 0x4d28) + iVar4);
      FUN_089e2b14(*(int *)(param_1 + 0x4d28) + iVar4,0xffffffff);
      iVar1 = *(int *)(*(int *)(param_1 + 0x4d28) + iVar4 + 0x20);
      (**(code **)(iVar1 + 0x14))
                (*(int *)(param_1 + 0x4d28) + iVar4 + (int)*(short *)(iVar1 + 0x10));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x2a0;
      puVar2 = puVar2 + 2;
    } while (iVar5 < 2);
  }
  else {
    iVar5 = 0;
    iVar4 = 0;
    do {
      FUN_089e29e4(*(int *)(param_1 + 0x4d28) + iVar4);
      iVar1 = *(int *)(param_1 + 0x4d28) + iVar4;
      *(undefined4 *)(iVar1 + 0x60) = 0;
      *(undefined4 *)(iVar1 + 100) = 0;
      *(undefined4 *)(iVar1 + 0x68) = 0;
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      iVar1 = *(int *)(param_1 + 0x4d28) + iVar4;
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined4 *)(iVar1 + 0x54) = 0;
      *(undefined4 *)(iVar1 + 0x58) = 0x43160000;
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      FUN_089e3008(*(undefined4 *)((int)puVar3 + 0x10),*(undefined4 *)((int)puVar3 + 0x14),
                   *(int *)(param_1 + 0x4d28) + iVar4);
      FUN_089e2b14(*(int *)(param_1 + 0x4d28) + iVar4,0xffffffff);
      iVar1 = *(int *)(*(int *)(param_1 + 0x4d28) + iVar4 + 0x20);
      (**(code **)(iVar1 + 0x14))
                (*(int *)(param_1 + 0x4d28) + iVar4 + (int)*(short *)(iVar1 + 0x10));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x2a0;
      puVar3 = (undefined4 *)((int)puVar3 + 8);
    } while (iVar5 < 4);
  }
  return;
}

