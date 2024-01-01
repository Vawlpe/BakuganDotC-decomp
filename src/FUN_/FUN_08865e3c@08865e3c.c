#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08865e3c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08860188(*(undefined4 *)(param_1 + 0x3c0));
  *(int *)(param_1 + 0x3c0) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x140) != 0xb)) {
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    iVar1 = 0;
  }
  return iVar1 != 0;
}

