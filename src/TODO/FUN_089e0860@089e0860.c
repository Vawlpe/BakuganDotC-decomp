#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0860(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x13d) == '\0') &&
     (*(undefined *)(param_1 + 0x13d) = 1, DAT_08ac5c64 != '\0')) {
    if (*(int *)(param_1 + 0x11c) == 0) {
      FUN_089da8d4(*(undefined4 *)(param_1 + 0x118),param_1 + 0x124,0x2000);
      iVar2 = *(int *)(param_1 + 0xf4);
    }
    else {
      FUN_089da8d4(*(int *)(param_1 + 0x11c),param_1 + 0x124,*(undefined4 *)(param_1 + 0x120));
      iVar2 = *(int *)(param_1 + 0xf4);
    }
    if (0 < iVar2) {
      *(undefined *)(param_1 + 0x13c) = 1;
    }
    if (iVar2 == 0) {
      uVar1 = FUN_08a14624(3);
      *(undefined4 *)(*(int *)(param_1 + 0x130) + 0x14) = uVar1;
      *(undefined2 *)(*(int *)(param_1 + 0x130) + 0x20) = 3;
      *(undefined *)(param_1 + 0x13c) = 1;
    }
    FUN_089da8d4(0,0,0x2000);
  }
  return;
}

