#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d09dc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  iVar1 = *DAT_08ac5940;
  iVar2 = 0;
  if ((iVar1 == DAT_08ac5940[10]) && (iVar2 = iVar1, *(int *)(param_1 + 0x158) < iVar1)) {
    uVar3 = 1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return uVar3;
}

