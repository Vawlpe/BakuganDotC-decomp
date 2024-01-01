#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08838ecc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = 0xffffffff;
  iVar3 = 0;
  if ((*(short *)(param_1 + param_3 * 2 + 0xb1e) == -1) &&
     (fVar5 = (float)FUN_08887cdc(param_2 + 0x434), fVar5 <= 0.2)) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    bVar1 = false;
    if (*(int *)(param_2 + 0x170) != 0) {
      iVar2 = FUN_08854e68(*(int *)(param_2 + 0x170),0xf);
      bVar1 = 2 < iVar2;
    }
    uVar4 = FUN_08838428(param_1,param_3,bVar1);
  }
  FUN_08837e00(param_1,iVar3,uVar4,param_3);
  return;
}

