#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0818(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_08a15998(*(undefined4 *)(param_1 + 0x130));
  *(byte *)(*(int *)(iVar1 + 4) + 4) =
       *(byte *)(*(int *)(iVar1 + 4) + 4) & 0xdf | (byte)((param_3 & 1) << 5);
  return;
}

