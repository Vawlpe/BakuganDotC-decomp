#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f75b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_089cecb8(DAT_08ac5934,*(undefined4 *)(param_1 + 0x114));
  FUN_089cecb8(DAT_08ac5934,*(undefined4 *)(param_1 + 0x118));
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  uVar1 = FUN_089f70c4(param_1);
  uVar1 = FUN_089f7194(param_1,uVar1);
  uVar2 = FUN_089f70d0(param_1);
  uVar2 = FUN_089f7194(param_1,uVar2);
  FUN_089f7ce8(param_1,uVar1,uVar2);
  return;
}

