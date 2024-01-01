#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882f184(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (999 < param_2) {
    param_2 = 999;
  }
  iVar1 = (int)((float)param_3 * 1.666667);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (99 < iVar1) {
    iVar1 = 99;
  }
  iVar2 = (param_2 / 100) % 10;
  FUN_089f4a90((float)(iVar2 / 5),(float)(iVar2 % 5),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc)
              );
  iVar2 = ((param_2 % 100) / 10) % 10;
  FUN_089f4a90((float)(iVar2 / 5),(float)(iVar2 % 5),
               *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10));
  iVar2 = ((param_2 % 100) % 10) % 10;
  FUN_089f4a90((float)(iVar2 / 5),(float)(iVar2 % 5),
               *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14));
  iVar2 = (iVar1 / 10) % 10;
  FUN_089f4a90((float)(iVar2 / 5),(float)(iVar2 % 5),
               *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c));
  iVar1 = (iVar1 % 10) % 10;
  FUN_089f4a90((float)(iVar1 / 5),(float)(iVar1 % 5),
               *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20));
  return;
}

