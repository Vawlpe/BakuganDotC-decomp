#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08845cd8(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af17fc;
  DAT_08aba750 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 3);
  return param_1;
}

