#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088391a4(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = param_1 + param_3 * 2;
  uVar3 = 0xffffffff;
  iVar2 = 0;
  if ((*(short *)(iVar4 + 0xb1e) == -1) &&
     (fVar5 = (float)FUN_08887cdc(param_2 + 0x434), fVar5 <= 0.7)) {
    *(undefined2 *)(iVar4 + 0xb1e) = 0;
    bVar1 = false;
    if (*(int *)(param_2 + 0x170) != 0) {
      iVar4 = FUN_08854e68(*(int *)(param_2 + 0x170),0x15);
      bVar1 = 4 < iVar4;
    }
    if (bVar1) {
      bVar1 = true;
      if (*(int *)(param_2 + 0x170) != 0) {
        iVar4 = FUN_08854e68(*(int *)(param_2 + 0x170),0xb);
        bVar1 = iVar4 < 2;
      }
      if (bVar1) {
        iVar2 = 1;
      }
    }
  }
  if (iVar2 != 0) {
    uVar3 = FUN_08838428(param_1,param_3,0);
  }
  FUN_08837e00(param_1,iVar2,uVar3,param_3);
  return;
}

