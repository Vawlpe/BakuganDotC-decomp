#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f6810(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_088fc500(param_1,0x3f99999a,*(undefined4 *)(*(int *)(param_2 + 0x80) + 0x44),0x43c80000,
               0x44960000,param_2,param_2 + 0x60);
  *(undefined4 *)(*(int *)(param_2 + 4) + 0x24) = *(undefined4 *)(*(int *)(param_2 + 0x80) + 0x54);
  iVar1 = *(int *)(param_2 + 4);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(*(int *)(param_2 + 0x80) + 0x50);
  if (*(char *)(*(int *)(param_2 + 0x80) + 0x61) != '\0') {
    FUN_088fc7c0(param_1,param_2,iVar1,param_2 + 0x20);
  }
  FUN_088fc600(param_1,param_2,param_2 + 0x60,param_2 + 0x20,param_2 + 0x30);
  return;
}

