#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089d74cc(undefined4 *param_1,int param_2,int param_3,undefined param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *ptr;
  int numBytes;
  
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[1] = param_3 * param_2;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(param_4);
  uVar2 = FUN_089d7d74((param_3 * param_2 & 0xfffffffcU) + 4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *param_1 = uVar2;
  numBytes = (((int)(param_3 + ((uint)(param_3 >> 5) >> 0x1b)) >> 5) + 1) * 4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(param_4);
  ptr = (undefined *)FUN_089d7d74(numBytes,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[2] = ptr;
  memset_jak(ptr,0,numBytes);
  return param_1;
}
