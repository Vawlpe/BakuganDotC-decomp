#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d509c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af2e2c;
    iVar1 = *(int *)(param_1 + 0x174);
    *(undefined **)(param_1 + 0x160) = &DAT_08af2ecc;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x180);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
    iVar2 = 0;
    iVar1 = param_1;
    do {
      FUN_089d7a58(*(undefined4 *)(iVar1 + 0x184));
      *(undefined4 *)(iVar1 + 0x184) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < 3);
    if (((*(int *)(param_1 + 0x1e4) == 0) && (DAT_08b00bd4 == '\0')) && (DAT_08b00bd6 == '\0')) {
      FUN_08824658(DAT_08ac5c70,0x56,*(int *)(param_1 + 0x130) + 0xb0);
    }
    FUN_088d92c4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

