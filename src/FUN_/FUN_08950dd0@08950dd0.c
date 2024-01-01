#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08950dd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 2) {
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x28);
LAB_08950fb0:
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      return;
    }
    if (iVar2 < 1) {
      FUN_089c87e4(0);
      FUN_089c879c(0,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    iVar2 = FUN_089bf93c(0x2756,1);
    if (iVar2 != 0) {
      return;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else if (2 < iVar2) {
    if (3 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x28);
      goto LAB_08950fb0;
    }
    goto LAB_08950e78;
  }
  FUN_089c2bb4(0x1a);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
LAB_08950e78:
  iVar2 = FUN_089c2c54(0x1a);
  if (iVar2 != 0) {
    FUN_08909e8c(param_1,"title.fab",0);
    *(undefined *)(**(int **)(param_1 + 0x50) + 0x9c) = 0;
    *(undefined4 *)(**(int **)(param_1 + 0x50) + 0x98) = 0x41200000;
    uVar1 = FUN_089f889c(**(undefined4 **)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    FUN_08909e8c(param_1,"title_haikei.fab",1);
    *(undefined *)(*(int *)(*(int *)(param_1 + 0x50) + 4) + 0x9c) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 4) + 0x98) = 0x41000000;
    uVar1 = FUN_089f889c(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4));
    *(undefined4 *)(param_1 + 0xa0) = uVar1;
    FUN_08909e8c(param_1,"title_repert.fab",2);
    *(undefined *)(*(int *)(*(int *)(param_1 + 0x50) + 8) + 0x9c) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 8) + 0x98) = 0x41100000;
    uVar1 = FUN_089f889c(*(undefined4 *)(*(int *)(param_1 + 0x50) + 8));
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
    FUN_08909e8c(param_1,"title_logo.fab",3);
    *(undefined *)(*(int *)(*(int *)(param_1 + 0x50) + 0xc) + 0x9c) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 0xc) + 0x98) = 0x41300000;
    uVar1 = FUN_089f889c(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0xc));
    *(undefined4 *)(param_1 + 0xa8) = uVar1;
    FUN_089f8a28(param_1 + 0x54);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  return;
}

