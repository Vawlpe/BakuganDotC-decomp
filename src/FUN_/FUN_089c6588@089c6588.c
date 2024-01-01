#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089c6588(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar1 = -1;
  if (*(int *)(param_1 + 8) == 5) {
    iVar1 = FUN_089c7250(param_1);
  }
  if (-1 < iVar1) {
    iVar2 = param_1 + iVar1 * 4;
    *(undefined4 *)(iVar2 + 0x20) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xa0) = param_2;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return -1 < iVar1;
}

