#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1c9d8(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 == param_1) || ((param_3 & 0x201) == 0)) {
      return 1;
    }
    uVar2 = 0x10;
    uVar1 = 0x40;
    if (*(int *)(param_2 + 0xc) == 0) {
      uVar1 = 0;
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      uVar2 = 0;
    }
    FUN_08a12d94(param_4,0,0x40,uVar1);
    FUN_08a12d94(param_4,0,0x10,uVar2);
    uVar1 = 1;
  }
  return uVar1;
}

