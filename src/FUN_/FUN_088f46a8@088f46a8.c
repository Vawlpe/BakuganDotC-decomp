#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f46a8(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (&DAT_08b00d40)[param_2 & 0xff];
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    (&DAT_08b00d40)[param_2 & 0xff] = 0;
  }
  return;
}

