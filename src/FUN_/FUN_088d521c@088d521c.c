#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d521c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    iVar1 = FUN_089c59d4();
    if (iVar1 != 0) {
      uVar2 = FUN_089c59f0();
      FUN_089c6350(uVar2,0x2c00037,0,0);
    }
    FUN_089df450(0,param_1);
    (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
              (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  return;
}

