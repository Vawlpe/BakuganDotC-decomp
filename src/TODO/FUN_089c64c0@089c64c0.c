#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c64c0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = -1;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  if (*(int *)(param_1 + 8) == 5) {
    iVar2 = FUN_089c7250(param_1);
  }
  if (-1 < iVar2) {
    iVar2 = FUN_089c61b8(param_1,param_2,0);
    if (-1 < iVar2) {
      uVar1 = FUN_089c6914(param_1,iVar2 << 0x1b | param_3 | param_2 << 0x14);
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return uVar1;
}

