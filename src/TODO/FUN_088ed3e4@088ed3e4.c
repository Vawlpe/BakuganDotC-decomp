#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ed3e4(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (param_2 & 0xff) * 100;
  if (*(int *)(*(int *)(param_1 + 0x30) + iVar1 + 0x30) != 0) {
    FUN_088ea52c();
    FUN_088ea570(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 + 0x30));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 + 0x30) = 0;
  }
  return;
}

