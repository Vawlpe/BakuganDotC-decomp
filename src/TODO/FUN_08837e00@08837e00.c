#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08837e00(int param_1,char param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + param_4 * 2;
  sVar1 = *(short *)(iVar3 + 0xae8);
  if (sVar1 < 1) {
    if (((-1 < sVar1) && (param_2 != '\0')) && (param_3 != -1)) {
      *(short *)(iVar3 + 0xb1e) = (short)param_3;
      *(undefined2 *)(iVar3 + 0xae8) = 1;
    }
  }
  else if (sVar1 < 2) {
    iVar2 = FUN_08837ca0(param_1);
    if (iVar2 == -1) {
      *(undefined2 *)(iVar3 + 0xae8) = 9999;
    }
    else if ((*(short *)(iVar3 + 0xb1e) != -1) &&
            (iVar2 = FUN_0882cce0(param_1,iVar2,(int)*(short *)(iVar3 + 0xb1e),0xffffffff,0),
            iVar2 != 0)) {
      *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
    }
  }
  return;
}

