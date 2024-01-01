#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ed278(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x5c);
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0x62) =
       *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0x66);
  return;
}

