#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08922110(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 auStack_60 [18];
  
  param_3 = param_3 & 0xff;
  memcpy_jak(auStack_60,&DAT_08ac1190,0x48);
  uVar1 = auStack_60[param_3 * 3 + 1];
  uVar2 = auStack_60[param_3 * 3 + 2];
  *(undefined4 *)(param_2 + 0xb0) = auStack_60[param_3 * 3];
  *(undefined4 *)(param_2 + 0xb4) = uVar1;
  *(undefined4 *)(param_2 + 0xb8) = uVar2;
  *(undefined4 *)(param_2 + 0xbc) = 0x3f800000;
  return;
}

