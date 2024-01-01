#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089df730(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089dff6c();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = param_1;
  return uVar2;
}

