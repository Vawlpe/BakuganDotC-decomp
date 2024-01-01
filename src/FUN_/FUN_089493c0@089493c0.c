#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089493c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      if (iVar2 < 1) {
        FUN_08949144(param_1);
        FUN_0890a424(0x41a00000,0,0,param_1,"main_start.fab",1,0);
        *(undefined4 *)(param_1 + 0x2c) = 1;
      }
      else {
        iVar2 = FUN_0890a2c8(param_1,1);
        iVar1 = FUN_0890a310(param_1,1);
        if (iVar1 <= iVar2) {
          FUN_0890a274(param_1,1);
          FUN_0890a424(0x41a00000,0,0,param_1,"main_light.fab",1,1);
          FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
          FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
          FUN_089a4e08(0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0x128) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 2;
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
      }
    }
  }
  else if (iVar2 < 3) {
    iVar2 = FUN_08948b34(param_1,0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  else if (iVar2 < 4) {
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

