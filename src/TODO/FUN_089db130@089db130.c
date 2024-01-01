#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089db130(int *param_1,int *param_2,uint *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
  }
  if (iVar1 == 0) {
    *param_1 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = -4;
    if (param_3 != (uint *)0x0) {
      iVar2 = iVar1 + (*param_3 & 0xfffffffc);
    }
    *param_1 = iVar1;
  }
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = param_4;
  return;
}

