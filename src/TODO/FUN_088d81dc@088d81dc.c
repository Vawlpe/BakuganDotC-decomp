#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d81dc(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af325c;
    *(undefined **)(param_1 + 0x160) = &DAT_08af3304;
    if (*(int *)(param_1 + 0x24c) != 0) {
      FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0x24c) + 0x214));
    }
    if (*(int *)(param_1 + 0x250) != 0) {
      FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0x250) + 0x214));
    }
    iVar1 = *(int *)(param_1 + 0x174);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    FUN_089de910(param_1);
    FUN_088d92c4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

