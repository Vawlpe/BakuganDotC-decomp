#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fff20(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_089df7ec(param_2,"eye_shape_L");
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 6) = 0;
    }
    iVar1 = FUN_089df7ec(param_2,"eye_shape_R");
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 6) = 0;
    }
    iVar1 = FUN_089df7ec(param_2,"mayu_L");
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 6) = 0;
    }
    iVar1 = FUN_089df7ec(param_2,"mayu_R");
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 6) = 0;
    }
  }
  return;
}

