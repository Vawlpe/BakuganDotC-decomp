#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f9c3c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_089bb728(param_1[0x11]);
  if (*param_1 == 3) {
    iVar1 = param_1[param_1[0xc] + 0xe];
    if (*(int *)(iVar1 + 0x2c) == 0) {
      *param_1 = 5;
      param_1[0x10] = iVar1;
      *(undefined4 *)(iVar1 + 0x2c) = 1;
      *(undefined4 *)(param_1[0x10] + 0x28) = 0;
      iVar2 = param_1[0xc];
      param_1[0xc] = iVar2 + 1;
      if (1 < iVar2 + 1) {
        param_1[0xc] = 0;
      }
      iVar2 = 1;
    }
  }
  FUN_089bb790(param_1[0x11]);
  if (iVar2 != 0) {
    iVar2 = FUN_089bbf78(2);
  }
  return iVar2;
}

