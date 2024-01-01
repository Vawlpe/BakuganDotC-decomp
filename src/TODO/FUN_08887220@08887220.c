#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08887220(void)

{
  short *psVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_088871a0();
  psVar1 = (short *)uVar3;
  iVar2 = 0x14;
  if (psVar1 != (short *)0x0) {
    if ((int)((ulonglong)uVar3 >> 0x20) == 0) {
      iVar2 = (int)((float)(int)psVar1[5] * 0.7);
    }
    else {
      iVar2 = (int)*psVar1;
    }
  }
  return iVar2;
}

