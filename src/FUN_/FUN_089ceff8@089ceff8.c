#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ceff8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x91) != '\0') {
    FUN_089cf114(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
  }
  uVar1 = FUN_089cec48(param_1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  FUN_089cec00(param_1);
  uVar1 = FUN_089cec74(param_1);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  iVar2 = FUN_089cc058();
  if (iVar2 != 0) {
    uVar1 = FUN_089cc080();
    FUN_089cc200(uVar1);
  }
  FUN_089cf0a0(param_1);
  FUN_089cec20(param_1);
  FUN_089f258c();
  FUN_089f26e4(param_1);
  return;
}

