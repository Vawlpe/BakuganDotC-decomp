#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c4d24(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_089bb728(*param_1);
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (100 < param_2) {
    param_2 = 100;
  }
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = param_2;
  piVar1 = (int *)FUN_089c59f0();
  iVar2 = ((param_3 * 0xac44) / 1000) / *piVar1;
  param_1[0x14] = iVar2;
  param_1[0x13] = iVar2;
  if (iVar2 == 0) {
    param_1[0x12] = param_2;
    param_1[0x11] = param_2;
  }
  FUN_089bb790(*param_1);
  return;
}

