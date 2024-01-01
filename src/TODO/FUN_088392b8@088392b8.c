#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088392b8(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  uVar2 = 0xffffffff;
  iVar3 = 0;
  if (((*(short *)(param_1 + 0xb32) != -1) &&
      (iVar4 = param_1 + param_3 * 2, *(short *)(iVar4 + 0xb1e) == -1)) &&
     (fVar5 = (float)FUN_08887cdc(param_2 + 0x434), fVar5 <= 0.35)) {
    *(undefined2 *)(iVar4 + 0xb1e) = 0;
    bVar1 = false;
    if (*(int *)(param_2 + 0x170) != 0) {
      iVar4 = FUN_08854e68(*(int *)(param_2 + 0x170),0x15);
      bVar1 = 9 < iVar4;
    }
    if (bVar1) {
      bVar1 = true;
      if (*(int *)(param_2 + 0x170) != 0) {
        iVar4 = FUN_08854e68(*(int *)(param_2 + 0x170),0xb);
        bVar1 = iVar4 < 5;
      }
      if (bVar1) {
        iVar3 = 1;
      }
    }
  }
  if (iVar3 != 0) {
    uVar2 = FUN_08838428(param_1,param_3,0);
  }
  FUN_08837e00(param_1,iVar3,uVar2,param_3);
  return;
}

