#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088335e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_08833568();
  param_1 = param_1 + param_2 * 4;
  if ((*(int *)(param_1 + 0x568) < 99) && (iVar2 = *(int *)(param_1 + 0x540), iVar2 != iVar1)) {
    *(int *)(param_1 + 0x540) = iVar1;
    iVar1 = (iVar1 - iVar2) + *(int *)(param_1 + 0x578);
    *(int *)(param_1 + 0x568) = iVar1;
    if (99 < iVar1) {
      *(int *)(param_1 + 0x540) = (*(int *)(param_1 + 0x540) - iVar1) + 99;
      *(undefined4 *)(param_1 + 0x568) = 99;
    }
    uVar3 = 1;
  }
  return uVar3;
}

