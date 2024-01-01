#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889faf8(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af234c;
    iVar1 = *(int *)(param_1 + 0x174);
    *(undefined **)(param_1 + 0x160) = &DAT_08af23ec;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    if (*(char *)(param_1 + 0x2c1) == '\0') {
      iVar1 = *(int *)(param_1 + 0x2d4);
    }
    else {
      FUN_08824658(DAT_08ac5c70,0xe,*(int *)(param_1 + 0x130) + 0xb0);
      *(undefined *)(param_1 + 0x2c1) = 0;
      iVar1 = *(int *)(param_1 + 0x2d4);
    }
    if (iVar1 != 0) {
      FUN_089d7a58();
      *(undefined4 *)(param_1 + 0x2d4) = 0;
    }
    FUN_0889f960(param_1 + 0x200,2);
    FUN_088d92c4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

