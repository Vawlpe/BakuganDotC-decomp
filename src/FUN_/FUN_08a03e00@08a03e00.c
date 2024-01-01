#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a03e00(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = FUN_08a03668(param_2);
  FUN_08a03c00(param_1,uVar2,param_3,0,0,0,uVar1,0,0);
  return uVar1;
}

