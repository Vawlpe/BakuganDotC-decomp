#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e0f48(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x418);
    *(undefined **)(param_1 + 0x14) = &DAT_08af38e4;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      *(undefined4 *)(param_1 + 0x418) = 0;
    }
    if (*(int *)(param_1 + 0x4a4) != 0) {
      FUN_088b7a88(*(int *)(param_1 + 0x4a4),3);
      *(undefined4 *)(param_1 + 0x4a4) = 0;
    }
    FUN_088dca30(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

