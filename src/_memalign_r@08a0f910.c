#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint _memalign_r(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 0x11) {
    uVar5 = _malloc_r(param_1,param_3);
    return uVar5;
  }
  if (param_2 < 0x10) {
    param_2 = 0x10;
  }
  uVar5 = 0x10;
  if (0x1e < (int)(param_3 + 0x13U)) {
    uVar5 = param_3 + 0x13U & 0xfffffff0;
  }
  uVar1 = _malloc_r(param_1,param_2 + uVar5 + 0x10);
  if (uVar1 == 0) {
    return 0;
  }
  FUN_089b9a68(param_1);
  iVar2 = uVar1 - 8;
  uVar4 = *(uint *)(uVar1 - 4) & 0xfffffffc;
  iVar6 = iVar2;
  if (uVar1 % param_2 != 0) {
    iVar6 = ((uVar1 + param_2) - 1 & -param_2) - 8;
    if (iVar6 - iVar2 < 0x10) {
      iVar6 = iVar6 + param_2;
    }
    uVar4 = uVar4 - (iVar6 - iVar2);
    *(uint *)(iVar6 + 4) = uVar4 | 1;
    iVar3 = iVar6 + uVar4;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 1;
    *(uint *)(uVar1 - 4) = *(uint *)(uVar1 - 4) & 1 | iVar6 - iVar2;
    _free_r(param_1,uVar1);
    uVar1 = iVar6 + 8;
    uVar4 = *(uint *)(iVar6 + 4) & 0xfffffffc;
  }
  if (0xf < (int)(uVar4 - uVar5)) {
    *(uint *)(iVar6 + uVar5 + 4) = uVar4 - uVar5 | 1;
    *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) & 1 | uVar5;
    _free_r(param_1,iVar6 + uVar5 + 8);
  }
  FUN_089b9aa4(param_1);
  return uVar1;
}

