#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884dd94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089c9b48(0x22,DAT_08ac58c8);
  if (iVar1 != 0) {
    FUN_0884b444(0);
  }
  FUN_088474a0(param_1 + 0x20,0);
  DAT_08ac601c = 1;
  FUN_0889d9e4();
  uVar2 = 1;
  if (DAT_08aba778 == 0) {
    *(undefined4 *)(param_1 + 0x440) = 1;
  }
  else {
    uVar2 = 2;
    *(undefined4 *)(param_1 + 0x440) = 2;
  }
  *(undefined4 *)(param_1 + 0x444) = uVar2;
  return;
}

