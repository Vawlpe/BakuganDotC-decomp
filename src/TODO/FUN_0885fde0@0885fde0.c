#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885fde0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x578) = 0;
    }
    if (param_2 == 2) {
      FUN_088865ac(param_1 + 0x434,0x12);
    }
    if (param_2 == 3) {
      FUN_088865ac(param_1 + 0x434,0x13);
    }
    if ((param_2 == 4) || (param_2 == 7)) {
      FUN_088865ac(param_1 + 0x434,1);
    }
    if ((param_2 == 5) || (param_2 == 7)) {
      FUN_088865ac(param_1 + 0x434,3);
    }
    if ((param_2 == 6) || (param_2 == 7)) {
      FUN_088865ac(param_1 + 0x434,5);
    }
    return;
  }
  iVar1 = param_1 + 0x434;
  FUN_088865ac(iVar1,0x12);
  FUN_088865ac(iVar1,0x13);
  FUN_088865ac(iVar1,1);
  FUN_088865ac(iVar1,3);
  FUN_088865ac(iVar1,5);
  *(undefined4 *)(param_1 + 0x578) = 0;
  return;
}

