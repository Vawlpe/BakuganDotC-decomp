#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08948fe0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      FUN_0890a274(param_1,1);
      FUN_0890a424(0x41a00000,0,0,param_1,"main_finish.fab",1,0);
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089a4e08(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 1;
      return;
    }
  }
  else {
    if (iVar1 < 2) {
      iVar1 = FUN_08948b34(param_1,1);
      if (iVar1 == 0) {
        return;
      }
      FUN_08948378(0x41400000,&DAT_08ac3400,&DAT_08ac33f0);
      *(undefined4 *)(param_1 + 0x2c) = 2;
      return;
    }
    if (iVar1 < 3) {
      iVar1 = FUN_089483d4();
      if (iVar1 == 0) {
        return;
      }
      FUN_08909a94(param_1);
      DAT_08ac0e70 = 0;
      *(undefined4 *)(param_1 + 0x2c) = 3;
      return;
    }
  }
  iVar1 = FUN_089bf93c(0x140,1);
  if (iVar1 == 0) {
    FUN_0890a598(param_1,0);
    *(undefined *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 6;
  }
  return;
}

