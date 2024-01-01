#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08905660(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af46a4;
  FUN_089055fc(param_1);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  if ((param_4 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    uVar1 = FUN_089ded60(param_4,"sphere01");
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0x1f:
  case 0x23:
  case 0x27:
  case 0x2f:
  case 0x33:
  case 0x37:
  case 0x3f:
  case 0x43:
  case 0x47:
  case 0x4b:
  case 0x4f:
  case 0x57:
  case 0x5f:
  case 99:
    *(undefined *)(param_1 + 0x6c) = 1;
  }
  return param_1;
}

