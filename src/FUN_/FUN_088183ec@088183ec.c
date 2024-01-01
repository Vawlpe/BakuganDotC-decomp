#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088183ec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_1 == -5) || (param_1 == 0)) {
    if ((param_2 != 0x206) &&
       ((((param_2 != 0x207 && (param_2 != 0x208)) && (param_2 != 0x209)) && (param_2 != 0x20a)))) {
      uVar3 = 1;
    }
    uVar1 = FUN_0880cc48();
    iVar2 = FUN_0880dba8(uVar1);
    if ((iVar2 == 2) &&
       ((((param_2 == 1 || (param_2 == 0x1f)) ||
         ((param_2 == 0x1a || ((param_2 == 0x1b || (param_2 == 0xe)))))) || (param_2 == 0xc)))) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

