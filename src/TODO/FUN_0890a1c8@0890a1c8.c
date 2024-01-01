#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char FUN_0890a1c8(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_08ac0e6c != '\0') {
    return '\x01';
  }
  iVar1 = *(int *)(DAT_08ac0e60 + param_3 * 4);
  uVar2 = DAT_08ac0e68;
  if (param_2 != 0xffffffff) {
    uVar2 = param_2;
  }
  if (((iVar1 != 0) && (iVar1 = FUN_089f89cc(iVar1,0), iVar1 != 0)) &&
     (uVar2 <= *(uint *)(iVar1 + 0x34))) {
    DAT_08ac0e6c = '\x01';
  }
  return DAT_08ac0e6c;
}

