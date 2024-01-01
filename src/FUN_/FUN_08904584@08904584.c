#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08904584(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_08903afc();
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = DAT_08ac5c90;
  DAT_08ac5c90 = uVar1;
  FUN_088fe1d0(*(undefined4 *)(param_1 + 0x50));
  iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x20);
  (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x10));
  iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x20);
  (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x10));
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

