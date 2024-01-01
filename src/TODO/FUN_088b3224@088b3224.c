#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b3224(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = 0;
  if ((DAT_08abd620 != (int *)0x0) && (iVar2 = *DAT_08abd620, iVar2 != 0)) {
    sVar3 = *(short *)(iVar2 + 0x34);
    while( true ) {
      if (sVar3 == 8) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) break;
      sVar3 = *(short *)(iVar2 + 0x34);
    }
  }
  return iVar1;
}

