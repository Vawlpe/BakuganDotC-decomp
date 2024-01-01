#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897c534(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + (param_3 & 0xff) * 8;
  iVar1 = (param_2 & 0xff) * 4;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x60) =
       *(undefined4 *)(iVar2 + 0xca8);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 100) = *(undefined4 *)(iVar2 + 0xcac)
  ;
  return;
}

