#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08929ff4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined *)(param_1 + 0x708)) {
  case 0:
    FUN_08929ee4(param_1);
    FUN_08929cd0(param_1,0);
    *(char *)(param_1 + 0x708) = *(char *)(param_1 + 0x708) + '\x01';
    break;
  case 1:
    iVar2 = FUN_08929d2c(param_1,0);
    if (iVar2 == 1) {
      *(undefined *)(param_1 + 0x708) = 2;
    }
    break;
  case 2:
    *(undefined2 *)(param_1 + 0x4ba) =
         *(undefined2 *)(param_1 + (uint)*(byte *)(param_1 + 0x709) * 2 + 0x704);
    FUN_089298dc(param_1,0,0x14);
    *(char *)(param_1 + 0x708) = *(char *)(param_1 + 0x708) + '\x01';
    break;
  case 3:
    iVar2 = FUN_08929ae0(param_1,0);
    if (iVar2 == 1) {
      *(undefined *)(param_1 + 0x708) = 4;
    }
    break;
  case 4:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
      iVar2 = DONE_NotZero_DAT_08AC5874();
      if (iVar2 != 0) {
        uVar1 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar1,0,0,0);
      }
      FUN_08929fc4(param_1);
      *(undefined *)(param_1 + 0x708) = 5;
    }
    break;
  case 5:
    FUN_089298dc(param_1,1,0x14);
    *(char *)(param_1 + 0x708) = *(char *)(param_1 + 0x708) + '\x01';
    break;
  case 6:
    iVar2 = FUN_08929ae0(param_1,1);
    if (iVar2 == 1) {
      *(undefined *)(param_1 + 0x708) = 7;
    }
    break;
  case 7:
    FUN_08929cd0(param_1,1);
    *(char *)(param_1 + 0x708) = *(char *)(param_1 + 0x708) + '\x01';
    break;
  case 8:
    iVar2 = FUN_08929d2c(param_1,1);
    if (iVar2 == 1) {
      *(undefined *)(param_1 + 0x708) = 9;
    }
    break;
  default:
    return 1;
  }
  return 0;
}

