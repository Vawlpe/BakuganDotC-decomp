#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08838ba4(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != 0) {
    iVar3 = 0;
    iVar4 = param_1 + param_4 * 2;
    if (*(int *)(param_2 + 0x170) != 0) {
      iVar3 = FUN_08854e68(*(int *)(param_2 + 0x170),0x12);
    }
    sVar1 = *(short *)(iVar4 + 0xae8);
    if (sVar1 < 1) {
      if (-1 < sVar1) {
        *(short *)(iVar4 + 0xb54) = (short)iVar3;
        *(short *)(iVar4 + 0xae8) = sVar1 + 1;
      }
    }
    else if (sVar1 < 2) {
      if (*(short *)(iVar4 + 0xb54) != iVar3) {
        *(short *)(iVar4 + 0xae8) = sVar1 + 1;
      }
    }
    else if (sVar1 < 3) {
      iVar3 = FUN_08837ca0(param_1);
      if (iVar3 == -1) {
        *(undefined2 *)(iVar4 + 0xae8) = 9999;
      }
      else {
        uVar2 = FUN_08838428(param_1,param_4,0);
        *(undefined2 *)(iVar4 + 0xb1e) = uVar2;
        if (*(short *)(iVar4 + 0xb1e) == -1) {
          *(undefined2 *)(iVar4 + 0xae8) = 9999;
        }
        else {
          iVar3 = FUN_0882cce0(param_1,iVar3,(int)*(short *)(iVar4 + 0xb1e),0xffffffff,0);
          if (iVar3 != 0) {
            *(undefined2 *)(iVar4 + 0xae8) = 0;
          }
        }
      }
    }
  }
  return;
}

