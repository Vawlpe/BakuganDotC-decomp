#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f5270(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *ptr;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(param_2 * 0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined **)(param_1 + 8) = ptr;
  memset_jak(ptr,0,param_2 * 0x160);
  *(int *)(param_1 + 0xc) = param_2;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      FUN_089d8a9c(*(int *)(param_1 + 8) + iVar2);
      FUN_089f3b60(*(int *)(param_1 + 8) + iVar2);
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 + 0x124) = 1;
      *(int *)(*(int *)(param_1 + 8) + iVar2 + 8) = iVar3;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x160;
    } while (iVar3 < param_2);
  }
  return;
}

