#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a14bc0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 + 1U & 0xffff0000) == 0) {
      iVar1 = 0;
    }
    FUN_08a14aac(iVar1,1);
    FUN_08a1483c(*(undefined4 *)(param_1 + 4),1);
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 8));
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x10));
    thunk_FUN_08a13244(1,*(undefined4 *)(param_1 + 0x24));
    FUN_08a19874(*(undefined4 *)(param_1 + 0xc));
  }
  return param_1;
}

