#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089625d8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < 4)) {
    iVar1 = param_1 + param_2 * 0x28;
    if (*(int *)(iVar1 + 0x520c) != param_3) {
      *(int *)(iVar1 + 0x520c) = param_3;
      *(char *)(param_1 + param_2 + 0x5020) = (char)param_3;
      FUN_0895f9a8(param_1,param_2 & 0xff);
    }
  }
  return;
}

