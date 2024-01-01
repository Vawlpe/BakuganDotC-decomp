#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892987c(int param_1,uint param_2)

{
  int iVar1;
  int aiStack_a0 [36];
  
  memcpy_jak(aiStack_a0,&DAT_08ac1338,0x90);
  iVar1 = aiStack_a0[param_2 & 0xff];
  *(int *)(param_1 + 0x70c) = iVar1;
  if (iVar1 != -1) {
    FUN_089c2fbc();
  }
  return;
}

