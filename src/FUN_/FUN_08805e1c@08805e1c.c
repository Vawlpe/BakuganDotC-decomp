#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08805e1c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x89) == '\x01') {
    *(undefined *)(param_1 + 0x89) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != 0xa0) {
      if (iVar2 == 0x78) {
        *(undefined4 *)(param_1 + 0x84) = 0x50;
      }
      else if (iVar2 == 0x50) {
        *(undefined4 *)(param_1 + 0x84) = 0x78;
      }
      else if (iVar2 == 0x28) {
        *(undefined4 *)(param_1 + 0x84) = 0;
      }
      else if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x84) = 0x28;
      }
    }
  }
  FUN_08805ab4();
  iVar2 = FUN_089c59d4();
  if (iVar2 != 0) {
    uVar1 = FUN_089c59f0();
    FUN_089c6350(uVar1,6,0,0);
  }
  return;
}

