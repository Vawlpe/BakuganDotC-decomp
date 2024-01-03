#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899ed34(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  
  if ((-1 < param_2) && (param_2 < 4)) {
    psVar3 = (short *)(param_1 + param_2 * 0x10 + 0x2330);
    if ((*psVar3 != param_3) &&
       (((*psVar3 = (short)param_3, param_2 == 0 && (*(int *)(param_1 + 0x2370) != 0)) &&
        (*(char *)(param_1 + 0x109c) != param_3)))) {
      *(char *)(param_1 + 0x109c) = (char)param_3;
      iVar1 = DONE_NotZero_DAT_08AC5874();
      if (iVar1 != 0) {
        uVar2 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,1,0,0);
      }
      FUN_08998fdc(param_1);
    }
  }
  return;
}

