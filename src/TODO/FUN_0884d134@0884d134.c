#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0884d134(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,7);
  if ((0 < iVar2) && (iVar2 < 3)) {
    if (param_2 == -1) {
      param_2 = *(int *)(param_1 + 0x548);
    }
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,param_2 + 0xe);
    iVar4 = 0;
    do {
      uVar1 = _DONE_Get_DAT_08AAC9E0();
      iVar3 = FUN_0880d0ac(uVar1,iVar4 + 0xe);
      if (iVar2 < iVar3) {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    return iVar5;
  }
  return 4;
}

