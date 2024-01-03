#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089bda88(int param_1,undefined4 param_2,undefined4 param_3,undefined param_4,undefined param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 1;
  }
  iVar1 = DONE_NotZero_DAT_08AC61E8();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = FUN_089fce94();
    iVar1 = FUN_089fd150(uVar2,param_1 + 0x2c,param_2,param_4,0,param_5);
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  if (iVar1 != 0) {
    FUN_089fbac8(iVar1,param_3);
    *(undefined *)(param_1 + 0x29) = 0;
    *(undefined *)(param_1 + 0x2a) = 0;
    *(undefined *)(param_1 + 0x28) = 0;
    return 1;
  }
  return 0;
}

