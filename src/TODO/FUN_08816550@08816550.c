#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08816550(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar2 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_089eb248(*(undefined4 *)(param_1 + 0x2c));
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (iVar1 != 0) {
      FUN_088184e8(iVar1,param_2,&local_20,&local_1c,&local_18);
      memcpy_jak(*(undefined4 *)(param_1 + 0xc),param_2,local_18);
      uVar2 = 1;
    }
  }
  return uVar2;
}

