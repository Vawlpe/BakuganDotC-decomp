#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a7260(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      uVar1 = FUN_089edb80(param_1);
      iVar2 = FUN_089edf70(uVar1);
      if (iVar2 == 0) {
        return;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
  }
  else if (iVar2 < 2) {
    FUN_0890a424(0x42c80000,0,0,param_1,"main_start.fab",1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    return;
  }
  FUN_089a6e78(param_1,0);
  FUN_089a720c(param_1);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  FUN_089f74b4("main_bg00");
  FUN_089f74b4(&DAT_08a9f3fc);
  FUN_089f74b4("f0_z_sea01");
  FUN_089f74b4("worldmap");
  return;
}

