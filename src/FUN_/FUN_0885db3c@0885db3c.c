#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0885db3c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int local_10 [4];
  
  piVar2 = local_10;
  local_10[0] = 0x2c;
  local_10[1] = 0x2d;
  local_10[2] = 0x2e;
  local_10[3] = 0x2f;
  uVar1 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    if (*piVar2 == param_2) {
      return 1;
    }
    piVar2 = piVar2 + 1;
  } while (iVar3 < 4);
  if ((0xb4 < param_2) && (param_2 < 0xb8)) {
    uVar1 = 1;
  }
  return uVar1;
}

