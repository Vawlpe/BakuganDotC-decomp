#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a027e4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(PTR_DAT_08ac46dc + 0xc);
  uVar1 = FUN_08a02748(1);
  uVar2 = FUN_08a02748(param_1);
  FUN_08a0f88c(uVar3,"%s: %s\n",uVar1,uVar2);
  return;
}

