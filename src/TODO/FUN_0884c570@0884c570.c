#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0884c570(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x1b);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  else if (5 < iVar2) {
    iVar2 = 5;
  }
  iVar4 = 0;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if ((*(int *)(param_1 + 0x594) == 3) || (*(int *)(param_1 + 0x594) == 2)) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 4;
    } while (iVar4 < iVar2);
  }
  return iVar2 / 2 + 1 <= iVar3;
}

