#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08888b50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xe0) != -1) {
    iVar3 = 0;
    iVar2 = param_1;
    do {
      if ((*(int *)(iVar2 + 0xd4) == *(int *)(param_1 + 0xe0)) &&
         (iVar1 = FUN_08888adc(param_1,iVar3), iVar1 != 0)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 3);
  }
  return 0;
}

