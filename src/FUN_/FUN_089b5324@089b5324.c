#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089b5324(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if ((0 < param_2) && ('4' < *(char *)(param_1 + iVar3))) {
    do {
      puVar2 = (undefined *)(param_1 + iVar3);
      iVar3 = iVar3 + -1;
      *puVar2 = 0x30;
      cVar1 = *(char *)(iVar3 + param_1);
      if (iVar3 < 1) break;
    } while (cVar1 == '9');
    if (cVar1 == '9') {
      return 0;
    }
    *(char *)(iVar3 + param_1) = cVar1 + '\x01';
  }
  return 1;
}

