#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d5554(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (-1 < param_1) {
    if (param_1 < 3) {
      uVar1 = FUN_089cd83c();
      iVar2 = FUN_089cd960(uVar1,(&DAT_08aa2d3c)[param_1]);
      if (iVar2 != 0) {
        param_1 = param_1 + 1;
      }
    }
    else if (param_1 < 6) {
      uVar1 = FUN_089cd83c();
      iVar2 = FUN_089cdad4(uVar1,(&DAT_08aa2d3c)[param_1 + -3]);
      if (iVar2 != 0) {
        param_1 = param_1 + 1;
      }
    }
    else {
      param_1 = -1;
    }
  }
  return param_1;
}

