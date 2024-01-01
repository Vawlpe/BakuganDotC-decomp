#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880ba0c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af161c;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_089eafac(*(int *)(param_1 + 0x24),3);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x50) + 8),3);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,1);
    if (iVar2 == 1) {
      FUN_088c2a5c(param_1);
    }
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

