#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08838780(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = param_1 + param_3 * 2;
  switch(*(short *)(iVar3 + 0xae8)) {
  case 0:
    if (*(int *)(param_2 + 0x140) == 4) {
      *(short *)(iVar3 + 0xae8) = (short)(*(short *)(iVar3 + 0xae8) * 4 >> 2) + 1;
    }
    break;
  case 1:
    uVar1 = 0;
    if (*(int *)(param_2 + 0x140) != 4) {
      fVar4 = (float)FUN_08887cdc(param_2 + 0x434);
      if (fVar4 < 0.9) {
        uVar1 = 10;
      }
      *(undefined2 *)(iVar3 + 0xae8) = uVar1;
    }
    break;
  case 10:
    iVar2 = FUN_08837ca0(param_1);
    if (iVar2 == -1) {
      *(undefined2 *)(iVar3 + 0xae8) = 9999;
    }
    else {
      uVar1 = FUN_08838428(param_1,param_3,0);
      *(undefined2 *)(iVar3 + 0xb1e) = uVar1;
      if (*(short *)(iVar3 + 0xb1e) == -1) {
        *(undefined2 *)(iVar3 + 0xae8) = 9999;
      }
      else {
        iVar2 = FUN_0882cce0(param_1,iVar2,(int)*(short *)(iVar3 + 0xb1e),0xffffffff,0);
        if (iVar2 != 0) {
          *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
        }
      }
    }
  }
  return;
}

