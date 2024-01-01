#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088249a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  do {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 4);
  } while (((param_2 != -1) && (*(int *)(iVar1 + 0x16c) != param_2)) ||
          ((param_3 != 0 && (*(int *)(iVar1 + 0x160) != param_3))));
  return iVar1;
}

