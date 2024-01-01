#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884fbfc(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (DAT_08aba778 == 0) {
    if (0.005 < *(float *)(param_1 + 0x4fc)) {
      fVar2 = *(float *)(param_1 + 0x4fc) * 0.9;
    }
    else {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0x4fc) = fVar2;
    FUN_088b3d94();
    FUN_089e0f6c(*(undefined4 *)(param_1 + 0x45c));
    FUN_089e0f6c(*(undefined4 *)(param_1 + 0x468));
    FUN_089e0f6c(*(undefined4 *)(param_1 + 0x474));
    FUN_088a9578();
    FUN_08847334(param_1 + 0x20);
    FUN_089e32ac(DAT_08ac5c90);
    FUN_0884b7c4(param_1);
    FUN_089e2b14(DAT_08ac5c90,2);
    FUN_0888b778();
    FUN_08878dac();
    FUN_088b75fc();
    FUN_0889eed0();
    if (*(int *)(param_1 + 0x4d4) == 0) {
      iVar1 = *(int *)(param_1 + 0x4d8);
    }
    else {
      FUN_08823d74();
      iVar1 = *(int *)(param_1 + 0x4d8);
    }
    if (iVar1 != 0) {
      FUN_08823d74();
    }
    FUN_089f50bc(*(undefined4 *)(param_1 + 0x438));
    FUN_089f50bc(*(undefined4 *)(param_1 + 0x434));
    FUN_088259a4();
    return;
  }
  *(undefined4 *)(param_1 + 0x440) = 2;
  *(undefined4 *)(param_1 + 0x444) = 2;
  return;
}

