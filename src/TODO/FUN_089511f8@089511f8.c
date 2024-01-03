#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089511f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_089f86e4(*(undefined4 *)(*(int *)(param_1 + 0x50) + 8));
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = FUN_089edb80();
    FUN_089ede1c(uVar1,1);
    uVar1 = FUN_089edb80();
    FUN_089edf24(uVar1,0xf);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    uVar1 = FUN_089edb80();
    iVar2 = FUN_089edf70(uVar1);
    if (iVar2 != 0) {
      uVar1 = DONE_Get_DAT_08AAC9E0();
      uVar3 = FUN_0880d0ac(uVar1,0);
      uVar1 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar1,0,uVar3 | 0x80000000);
      FUN_089c879c(0x3f000000,0);
      FUN_0890a598(param_1,2);
      *(undefined4 *)(param_1 + 0x28) = 6;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}

