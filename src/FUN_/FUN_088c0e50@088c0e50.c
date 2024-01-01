#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c0e50(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0xff) != 0xff) {
    if (DAT_08abf710[param_2 & 0xff] == 0) {
      iVar1 = *DAT_08abf710;
      goto LAB_088c0ea4;
    }
    *(undefined2 *)(param_1 + 0x796) =
         *(undefined2 *)(*(int *)(DAT_08abf710[param_2 & 0xff] + 0x350) + 0x30);
  }
  iVar1 = *DAT_08abf710;
LAB_088c0ea4:
  if ((iVar1 != 0) && (FUN_088e1d44(iVar1), *(int *)(iVar1 + 0x140) != 9)) {
    FUN_088f488c(*(undefined4 *)(param_1 + 0x78c),0);
  }
  FUN_088b9f54(param_1 + 0x20,0,0);
  return;
}

