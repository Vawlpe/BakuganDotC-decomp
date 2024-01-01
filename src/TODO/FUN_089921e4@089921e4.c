#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089921e4(undefined2 *param_1,undefined4 param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 auStack_4a [25];
  
  param_3 = param_3 & 0xff;
  memcpy_jak(auStack_4a,&DAT_08ac3c44,0x30);
  uVar2 = auStack_4a[param_3 * 3 + 1];
  uVar1 = auStack_4a[param_3 * 3 + 2];
  *param_1 = auStack_4a[param_3 * 3];
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

