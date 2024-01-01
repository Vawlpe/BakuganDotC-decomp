#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fed10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  do {
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(iVar2 + 0xd8) = param_3;
    iVar1 = iVar1 + 1;
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar1 < 8);
  FUN_089feda8();
  return;
}

