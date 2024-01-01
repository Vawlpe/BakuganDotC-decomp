#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890f62c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af48bc;
    *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = *(undefined *)(param_1 + 0x78);
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x10) = 0x469c4000;
    FUN_088d4534();
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

