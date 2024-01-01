#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08973fe4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_089e37a4(0);
  *(int *)(param_1 + 0x518) = iVar1;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  iVar1 = *(int *)(param_1 + 0x518);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0x43480000;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  FUN_089e2b14(*(undefined4 *)(param_1 + 0x518),0xffffffff);
  iVar1 = *(int *)(*(int *)(param_1 + 0x518) + 0x20);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 0x518) + (int)*(short *)(iVar1 + 0x10));
  return;
}

