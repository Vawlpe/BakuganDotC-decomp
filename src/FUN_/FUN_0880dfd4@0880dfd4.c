#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880dfd4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == -1) {
    uVar1 = FUN_0880cc48(0xffffffff,0xffffffff,0xffffffff);
    param_1 = FUN_0880d0ac(uVar1,0x13);
  }
  uVar1 = FUN_0880cc48();
  uVar1 = FUN_0880d0ac(uVar1,param_1 + 3);
  iVar2 = FUN_0880d378();
  if (iVar2 != 0) {
    uVar1 = 0x15;
  }
  return uVar1;
}

