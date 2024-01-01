#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b2ba4(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_08abd620 != (int *)0x0) && (iVar3 = *DAT_08abd620, iVar3 != 0)) {
    sVar1 = *(short *)(iVar3 + 0x32);
    while (sVar1 != param_1) {
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) {
        return;
      }
      sVar1 = *(short *)(iVar3 + 0x32);
    }
    FUN_088246f4(DAT_08ac5c70,0xffffffff,iVar3);
    iVar2 = FUN_08823f5c(DAT_08ac5c70,param_2,iVar3 + 0x20);
    *(int *)(iVar2 + 0x1fc) = iVar3;
    *(undefined4 *)(iVar2 + 0x200) = *(undefined4 *)(iVar3 + 0xc);
  }
  return;
}

