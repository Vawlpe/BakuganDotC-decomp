#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b40e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x74);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      return;
    }
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar2 = FUN_089d7d74(0x194,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),uVar2,0x36);
    FUN_089b32a8(param_1);
    FUN_089b36c8(param_1);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  else if (1 < iVar3) {
    return;
  }
  iVar3 = FUN_089b2d74(param_1 + 0x88,param_1 + 0x78,param_1 + 0x7c);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

