#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b2c34(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_08abd620 != (int *)0x0) && (iVar3 = *DAT_08abd620, iVar3 != 0)) {
    sVar1 = *(short *)(iVar3 + 0x32);
    while (sVar1 != param_1) {
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) {
        return;
      }
      sVar1 = *(short *)(iVar3 + 0x32);
    }
    iVar2 = 0;
    if (DAT_08abd5bc != (int *)0x0) {
      iVar2 = *DAT_08abd5bc;
    }
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x154);
      while( true ) {
        if (iVar4 == iVar3) {
          *(undefined4 *)(iVar2 + 0x304) = 0xb;
          *(undefined4 *)(iVar2 + 0x1fc) = 0;
          return;
        }
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) break;
        iVar4 = *(int *)(iVar2 + 0x154);
      }
    }
  }
  return;
}

