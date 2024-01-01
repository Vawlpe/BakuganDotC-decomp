#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888f304(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x970) != 0) {
    iVar1 = FUN_08860188();
    *(int *)(param_1 + 0x970) = iVar1;
    if (iVar1 != 0) {
      FUN_0888f248(param_1,iVar1);
      *(undefined4 *)(param_1 + 0x970) = 0;
    }
  }
  return;
}

