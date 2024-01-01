#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08909fc4(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + param_3 * 4);
  if (iVar1 != 0) {
    if (param_2 == 0xffffffff) {
      param_2 = FUN_089f889c();
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + param_3 * 4);
    }
    iVar1 = FUN_089f89cc(iVar1,0);
    if ((iVar1 != 0) && (param_2 <= *(uint *)(iVar1 + 0x34))) {
      *(undefined *)(param_1 + 0x68) = 1;
    }
  }
  return *(undefined *)(param_1 + 0x68);
}

