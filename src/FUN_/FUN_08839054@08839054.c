#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08839054(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0xffffffff;
  if ((*(short *)(param_1 + param_3 * 2 + 0xb1e) == -1) &&
     (iVar1 = FUN_088b2eec(0x3ecccccd), iVar1 != 0)) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    uVar2 = FUN_08838428(param_1,param_3,0);
  }
  FUN_08837e00(param_1,iVar3,uVar2,param_3);
  return;
}

