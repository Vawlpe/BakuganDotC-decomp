#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ea0b0(undefined4 param_1,undefined param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_088be274();
  iVar2 = *(int *)(iVar2 + 0x658);
  if (iVar2 != 0) {
    sVar1 = *(short *)(iVar2 + 0x142);
    while( true ) {
      if (sVar1 == 0xbd9) {
        FUN_088d8498(iVar2,param_2);
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) break;
      sVar1 = *(short *)(iVar2 + 0x142);
    }
  }
  return;
}

