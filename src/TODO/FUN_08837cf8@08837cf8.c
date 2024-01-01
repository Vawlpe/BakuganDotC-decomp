#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08837cf8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_08837ca0();
  if (iVar2 != -1) {
    iVar3 = param_1 + param_2 * 2;
    sVar1 = *(short *)(iVar3 + 0xae8);
    if (sVar1 < 1) {
      if ((-1 < sVar1) && (iVar2 = FUN_088b2db4(), iVar2 != 0)) {
        *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
      }
    }
    else if (sVar1 < 2) {
      iVar2 = FUN_0882cce0(param_1,iVar2,0x2d4,0xffffffff,0);
      if (iVar2 != 0) {
        *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
      }
    }
    else if (sVar1 < 3) {
      if (*(int *)(param_1 + 0x8f4) == 0x2d4) {
        iVar2 = FUN_0882cce0(param_1,iVar2,0x2d5,0xffffffff,0);
        if (iVar2 != 0) {
          *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
        }
      }
      else {
        *(short *)(iVar3 + 0xae8) = sVar1 + 1;
      }
    }
  }
  return;
}

