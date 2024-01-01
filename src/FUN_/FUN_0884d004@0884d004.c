#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884d004(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x528);
  bVar1 = DAT_08aba778 == 0;
  if (iVar3 != param_2) {
    if (((0 < iVar3) && (iVar3 < 2)) && (bVar1)) {
      FUN_089c879c(0x3f000000,0);
    }
    *(int *)(param_1 + 0x528) = param_2;
    if (((param_2 < 1) && (-1 < param_2)) && (bVar1)) {
      uVar2 = FUN_0884cf94();
      FUN_089c8734(0,uVar2,1,0);
    }
  }
  return;
}

