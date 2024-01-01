#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08887d7c(float param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(*param_2 + 0x158) != '\0') {
    fVar3 = (float)FUN_08887d20(param_2);
    fVar4 = 0.0;
    if ((fVar3 - param_1 <= 0.0) && (fVar3 = (float)FUN_08887d20(param_2), fVar4 < fVar3)) {
      uVar1 = _DONE_Get_DAT_08AC5874();
      iVar2 = FUN_089c6914(uVar1,0x20012f);
      if ((iVar2 == 0) && (iVar2 = _DONE_NotZero_DAT_08AC5874(), iVar2 != 0)) {
        uVar1 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar1,0x20012f,0,0);
      }
    }
  }
  fVar3 = (float)FUN_08887d20(param_2);
  FUN_08887d3c(fVar3 - param_1,param_2);
  return;
}

