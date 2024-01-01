#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089de940(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_089d86f4(&DAT_08b02150,param_1);
  if (iVar1 == 0) {
    FUN_089d8870(param_1);
    FUN_089d8984(param_1,&DAT_08b02150);
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  return;
}

