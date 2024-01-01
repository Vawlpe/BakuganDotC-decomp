#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f86dc(undefined4 param_1,int param_2)

{
  FUN_088fc500(param_1,0x3f800000,*(undefined4 *)(*(int *)(param_2 + 0x100) + 0x44),0x43c80000,
               0x44960000,param_2,param_2 + 0x60);
  *(undefined4 *)(*(int *)(param_2 + 4) + 0x24) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x54);
  *(undefined4 *)(*(int *)(param_2 + 4) + 0x20) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x50);
  if (*(char *)(*(int *)(param_2 + 4) + 0x4a) == '\0') {
    FUN_088fd4ec(param_1,param_2,param_2 + 0x130);
  }
  if (*(char *)(*(int *)(param_2 + 0x100) + 0x61) != '\0') {
    FUN_088fc7c0(param_1,param_2);
  }
  FUN_088fc600(param_1,param_2,param_2 + 0x60,param_2 + 0x20,param_2 + 0x30);
  FUN_088fd51c(param_2);
  return;
}

