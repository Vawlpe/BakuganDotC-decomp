#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f9f28(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x44));
  iVar2 = 0;
  if ((*(char *)(param_1 + 8) != '\0') &&
     (iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x34) * 4 + 0x38), *(int *)(iVar1 + 0x2c) == 2))
  {
    iVar2 = iVar1;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x44));
  return iVar2;
}

