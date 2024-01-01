#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a10200(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar2 = FUN_08a101ac(param_3);
    iVar3 = FUN_08a101d0(iVar2);
    param_1 = (param_2 * 4 + iVar2) * 4 + param_1;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + ((param_4 + iVar3) - 1U & -iVar3);
    uVar1 = 1;
  }
  return uVar1;
}

