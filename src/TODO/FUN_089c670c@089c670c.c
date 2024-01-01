#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c670c(float param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  FUN_089bb728(*(undefined4 *)(param_2 + 0x8bd4));
  if (*(int *)(param_2 + 8) == 5) {
    iVar3 = FUN_089c7250(param_2);
  }
  if (-1 < iVar3) {
    iVar2 = param_2 + iVar3 * 4;
    *(undefined4 *)(iVar2 + 0x20) = 0xfffffffb;
    iVar1 = (int)(param_1 * 64.0) + 0x40;
    iVar3 = 0;
    if ((-1 < iVar1) && (iVar3 = iVar1, 0x7f < iVar1)) {
      iVar3 = 0x7f;
    }
    *(int *)(iVar2 + 0x120) = iVar3;
    *(undefined4 *)(iVar2 + 0xa0) = param_3;
  }
  FUN_089bb790(*(undefined4 *)(param_2 + 0x8bd4));
  return;
}

