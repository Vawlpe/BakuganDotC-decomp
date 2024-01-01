#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088601c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0884c3d0(1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  else {
    uVar2 = FUN_08860188(*(undefined4 *)(param_1 + 0x3bc));
    *(undefined4 *)(param_1 + 0x3bc) = uVar2;
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  return;
}

