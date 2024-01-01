#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f488c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + (param_2 & 0xff) * 4);
  iVar2 = *(int *)(iVar1 + 0x14);
  (**(code **)(iVar2 + 0x84))(iVar1 + *(short *)(iVar2 + 0x80));
  return;
}

