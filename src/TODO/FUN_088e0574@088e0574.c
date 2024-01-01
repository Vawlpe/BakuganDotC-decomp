#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e0574(uint param_1,int param_2)

{
  int iVar1;
  
  FUN_088dfa54(*(undefined *)(param_2 + 0x36));
  iVar1 = *(int *)(DAT_08abf710 + (param_1 & 0xff) * 4);
  *(int *)(iVar1 + 0x350) = param_2;
  FUN_088df254(iVar1,1);
  FUN_088df5d8(iVar1);
  return iVar1;
}

