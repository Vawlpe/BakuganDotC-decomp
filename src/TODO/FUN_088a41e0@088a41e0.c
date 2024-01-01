#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a41e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_08824024(DAT_08abd5b0,0x34,param_2,param_3);
  *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0x350);
  *(undefined4 *)(iVar1 + 0x70) = 0x41200000;
  *(undefined4 *)(iVar1 + 0x74) = 0x41200000;
  *(undefined4 *)(iVar1 + 0x78) = 0x41200000;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  return;
}

