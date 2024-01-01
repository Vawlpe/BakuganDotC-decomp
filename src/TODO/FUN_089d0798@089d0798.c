#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d0798(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x13c);
  *(char *)(param_1 + 0x1e) = (char)*(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x134);
  *(undefined *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x1d) = 0;
  uVar1 = *(uint *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (uVar1 != 0) {
    uVar3 = 0;
    puVar2 = *(undefined4 **)(param_1 + 0xf0);
    if (uVar1 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
        *(undefined4 *)(param_1 + 0x130) = *puVar2;
        puVar2 = puVar2 + 10;
      } while (uVar3 < uVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = **(undefined4 **)(param_1 + 0xf0);
    *(char *)(param_1 + 0x1c) = (char)*(undefined4 *)(param_1 + 0x144);
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return;
}

