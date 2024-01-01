#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0884d2c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    if (((*(char *)(param_1 + 0x531) == '\0') && (iVar2 = FUN_0884b670(param_1,1), iVar2 != 0)) &&
       (*(int *)(&DAT_08a66114 + *(int *)(DAT_08ac58c4 + 4) * 4) != -1)) {
      FUN_089c9b74(*(int *)(&DAT_08a66114 + *(int *)(DAT_08ac58c4 + 4) * 4),DAT_08ac58c8);
    }
  }
  else {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,7);
    if (iVar2 < 2) {
      if (0 < iVar2) {
        iVar2 = FUN_0884d20c(param_1);
        return iVar2;
      }
    }
    else if (iVar2 < 3) {
      iVar2 = FUN_0884d20c(param_1);
      return iVar2;
    }
    iVar2 = FUN_0884b670(param_1,1);
  }
  return iVar2;
}

