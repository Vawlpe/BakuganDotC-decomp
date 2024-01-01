#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b2b24(int param_1)

{
  short sVar1;
  int iVar2;
  
  if ((DAT_08abd620 != (int *)0x0) && (iVar2 = *DAT_08abd620, iVar2 != 0)) {
    sVar1 = *(short *)(iVar2 + 0x32);
    while (sVar1 != param_1) {
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) {
        return;
      }
      sVar1 = *(short *)(iVar2 + 0x32);
    }
    FUN_088246f4(DAT_08ac5c70,0xffffffff,iVar2);
    if (DAT_08abd5b0 != 0) {
      FUN_088246f4(DAT_08abd5b0,0xffffffff,iVar2);
    }
  }
  return;
}

