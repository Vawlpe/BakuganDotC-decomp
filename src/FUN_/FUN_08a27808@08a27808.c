#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a27808(undefined4 param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_08a277c4();
  uVar1 = FUN_08a277c4(uVar1,param_2 + 1);
  uVar1 = FUN_08a277c4(uVar1,param_2 + 2);
  uVar1 = FUN_08a277d4(uVar1,param_2 + 4);
  uVar1 = FUN_08a277d4(uVar1,param_2 + 6);
  uVar1 = FUN_08a277c4(uVar1,param_2 + 8);
  uVar1 = FUN_08a277d4(uVar1,param_2 + 10);
  uVar1 = FUN_08a277d4(uVar1,param_2 + 0xc);
  uVar1 = FUN_08a277d4(uVar1,param_2 + 0xe);
  uVar1 = FUN_08a277d4(uVar1,param_2 + 0x10);
  uVar1 = FUN_08a277c4(uVar1,param_2 + 0x12);
  iVar2 = FUN_08a277c4(uVar1,param_2 + 0x13);
  return (uint)*param_2 + iVar2;
}

