#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b7fd8(undefined4 param_1,int param_2,int param_3,undefined param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_5 == '\0') && (iVar1 = FUN_088b7fb0(param_2,param_3), iVar1 != 0)) {
    return 0;
  }
  uVar2 = FUN_089df400(param_1,param_2,*(undefined2 *)(*(int *)(param_2 + 0x144) + param_3 * 2),
                       param_4);
  return uVar2;
}
