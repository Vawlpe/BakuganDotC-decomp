#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088608d8(float param_1,int param_2,int param_3,undefined param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_5 == '\0') && (iVar1 = FUN_088608b0(param_2,param_3), iVar1 != 0)) {
    return 0;
  }
  if (*(int *)(param_2 + 0x170) == 0) {
    iVar1 = *(int *)(param_2 + 8);
  }
  else {
    FUN_08854edc(*(int *)(param_2 + 0x170),param_3);
    iVar1 = *(int *)(param_2 + 8);
  }
  if ((iVar1 == 10) && (param_1 == 0.2)) {
    param_1 = 0.4;
  }
  uVar2 = FUN_089df400(param_1,param_2,*(undefined2 *)(*(int *)(param_2 + 0x164) + param_3 * 2),
                       param_4);
  return uVar2;
}

