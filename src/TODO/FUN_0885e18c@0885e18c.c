#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0885e18c(int param_1)

{
  int iVar1;
  
  FUN_089de298();
  *(undefined **)(param_1 + 0x14) = &DAT_08af1fa4;
  *(undefined **)(param_1 + 0x274) = &DAT_08af5624;
  *(undefined **)(param_1 + 0x284) = &DAT_08af5564;
  *(undefined4 *)(param_1 + 0x280) = 2;
  *(undefined4 *)(param_1 + 0x270) = 4;
  *(undefined **)(param_1 + 0x2c4) = &DAT_08af55c4;
  *(undefined4 *)(param_1 + 0x2c0) = 3;
  FUN_0888670c(param_1 + 0x434);
  FUN_0885df0c(param_1);
  *(undefined4 *)(param_1 + 8) = 9999;
  iVar1 = DAT_08aba804 + 1;
  *(int *)(param_1 + 0xc) = DAT_08aba804;
  DAT_08aba804 = iVar1;
  FUN_0885e168(param_1,0x15);
  *(undefined4 *)(param_1 + 0x17c) = 0x42c80000;
  FUN_089de88c(param_1,"TargetPoint");
  FUN_089d8984(param_1,DAT_08aba808);
  return param_1;
}

