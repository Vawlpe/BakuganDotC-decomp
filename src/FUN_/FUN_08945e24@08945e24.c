#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08945e24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xec);
  if (iVar2 < 1) {
    if ((-1 < iVar2) && (-1 < *(int *)(param_1 + 0x74))) {
      uVar1 = FUN_089c2b48(0);
      FUN_089c357c(uVar1,0x24,1,0);
      *(undefined4 *)(param_1 + 0xec) = 1;
    }
  }
  else if ((iVar2 < 2) && (0x42fd < *(int *)(param_1 + 0x74))) {
    FUN_089c87e4(0);
    FUN_089c879c(0x3dcccccd,0);
    *(undefined4 *)(param_1 + 0xec) = 2;
  }
  return;
}

