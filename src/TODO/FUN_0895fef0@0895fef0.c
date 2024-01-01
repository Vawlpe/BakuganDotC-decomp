#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0895fef0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 9) & 1) == 0) {
    iVar2 = param_1 + (param_2 & 0xff);
    if (((*(byte *)(*(int *)(param_1 + 0x20) + 9) & 2) != 0) &&
       (cVar1 = *(char *)(iVar2 + 0x5020), cVar1 != -0x6a)) {
      *(char *)(iVar2 + 0x5020) = cVar1 + '2';
      return 1;
    }
  }
  else {
    param_1 = param_1 + (param_2 & 0xff);
    cVar1 = *(char *)(param_1 + 0x5020);
    if (cVar1 != '2') {
      *(char *)(param_1 + 0x5020) = cVar1 + -0x32;
      return 1;
    }
  }
  return 0;
}

