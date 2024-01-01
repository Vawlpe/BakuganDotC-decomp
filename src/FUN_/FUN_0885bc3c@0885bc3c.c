#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0885bc3c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_088998f0();
  *(undefined **)(param_1 + 0x14) = &DAT_08af1c94;
  iVar2 = param_2 + -0x15;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xb < iVar2) {
    iVar2 = 0xb;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x14) = (&DAT_08a675f0)[iVar2];
  FUN_08886c58(0x43480000,param_1 + 0x434);
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x6d4) = 0;
  if (param_2 == 0x15) {
    uVar1 = FUN_089ded10(param_1,1);
    *(undefined4 *)(param_1 + 0x3ac) = uVar1;
  }
  *(undefined *)(param_1 + 0x6d8) = 0;
  return param_1;
}

