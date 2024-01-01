#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f2ddc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_089f1308();
  puVar2 = (undefined4 *)FUN_089f202c(uVar1,param_2,0,1);
  *puVar2 = 0x12800100;
  puVar2[1] = 0x10080000;
  puVar2[2] = 0x1aa3aca;
  puVar2[3] = 0x4060002;
  FUN_089f13c8(param_1,puVar2 + 4);
  return;
}

