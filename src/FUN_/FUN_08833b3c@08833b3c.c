#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08833b3c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    uVar1 = FUN_08833a6c();
    return uVar1;
  case 1:
    uVar1 = FUN_08833a88();
    return uVar1;
  case 2:
    uVar1 = FUN_08833aa4();
    return uVar1;
  case 3:
    uVar1 = FUN_08833ac0();
    return uVar1;
  case 4:
  case 0xb:
    return *(undefined4 *)(param_1 + 0x578);
  case 5:
  case 0xd:
    return *(undefined4 *)(param_1 + 0x57c);
  case 6:
    return *(undefined4 *)(param_1 + 0x580);
  case 7:
    uVar1 = *(undefined4 *)(param_1 + 0x584);
    break;
  case 8:
  case 9:
    uVar1 = FUN_08833adc();
    return uVar1;
  case 10:
    uVar1 = FUN_08833b04();
    return uVar1;
  case 0xc:
    uVar1 = FUN_08833b20();
    return uVar1;
  }
  return uVar1;
}

