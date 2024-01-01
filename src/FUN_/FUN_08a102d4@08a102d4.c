#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a102d4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar1 = FUN_08a101ac(param_3);
    iVar2 = FUN_08a101d0(iVar1);
    iVar1 = (param_2 * 4 + iVar1) * 4 + param_1;
    uVar3 = (param_4 + iVar2) - 1U & -iVar2;
    iVar2 = *(int *)(iVar1 + 0x3c);
    if (uVar3 <= *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar1 + 0x3c) = iVar2 + uVar3;
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) - uVar3;
      FUN_08a10298(param_1,param_2,iVar2);
      return iVar2;
    }
  }
  return 0;
}

