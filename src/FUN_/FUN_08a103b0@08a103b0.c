#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a103b0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,code *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_08a102d4();
  if ((iVar1 != 0) && (param_6 != (code *)0x0)) {
    if (0 < param_5) {
      iVar3 = 0;
      iVar2 = iVar1;
      do {
        iVar3 = iVar3 + 1;
        (*param_6)(iVar2);
        iVar2 = iVar2 + param_4;
      } while (param_5 != iVar3);
    }
    if (1 < param_5) {
      iVar2 = *(int *)(param_2 * 4 + param_1);
      *(short *)(iVar2 + 0xe) = (short)param_5 + *(short *)(iVar2 + 0xe) + -1;
    }
  }
  return iVar1;
}

