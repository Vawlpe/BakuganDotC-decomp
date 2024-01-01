#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e1570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x3cc) != -1) {
    iVar1 = FUN_089c59d4();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
    }
    else {
      uVar2 = FUN_089c59f0();
      FUN_089c6588(uVar2,*(undefined4 *)(param_1 + 0x3cc));
      *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
    }
  }
  return;
}

