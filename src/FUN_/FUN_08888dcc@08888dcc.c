#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08888dcc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = param_1;
  do {
    uVar2 = *(uint *)(iVar4 + 0xd4);
    if (uVar2 != 0xffffffff) {
      if ((int)uVar2 < 0) {
        uVar2 = -(-uVar2 & 3);
      }
      else {
        uVar2 = uVar2 & 3;
      }
      FUN_08888c80(param_1,iVar3,uVar2);
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 3);
  iVar3 = 0;
  iVar4 = param_1;
  while ((((*(int *)(iVar4 + 0xd4) == -1 || (DAT_08aba77d != '\0')) ||
          (iVar1 = FUN_0882c220(0xb), iVar1 == 0)) ||
         (((iVar1 = FUN_0884b248(), iVar1 == 0 ||
           (iVar1 = FUN_0884b268(), *(int *)(iVar1 + 0x440) != 1)) ||
          (*(float *)(iVar4 + 0xbc) < 10000.0))))) {
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    if (2 < iVar3) {
      return;
    }
  }
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return;
}

