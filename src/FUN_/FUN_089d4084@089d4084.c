#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d4084(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x30));
  iVar2 = *(int *)(param_1 + 0x4c);
  *(undefined *)(param_1 + 0x1e) = 1;
  FUN_089bb790(*(undefined4 *)(param_1 + 0x30));
  iVar1 = FUN_089d49b0(param_1,1);
  if (iVar1 == 0) {
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        return 1;
      }
    }
    else if (iVar2 == 3) {
      FUN_089d4aa0(param_1,2);
      return 1;
    }
    FUN_089d4aa0(param_1,5);
  }
  else {
    FUN_089d4aa0(param_1,5);
  }
  return 0;
}

