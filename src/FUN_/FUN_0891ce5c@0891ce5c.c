#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ce5c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      if (0 < iVar2) {
        iVar2 = FUN_089c2f34();
        if (iVar2 == 0) {
          return;
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        return;
      }
      iVar2 = FUN_089c2e90(0x6c);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        return;
      }
      iVar2 = FUN_089c2f78();
      if (iVar2 != 0) {
        return;
      }
      FUN_089c2ef0();
      return;
    }
  }
  else {
    if (iVar2 < 3) {
      FUN_0891cacc(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
    if (iVar2 < 4) {
      iVar2 = FUN_089edb80();
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x34) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0x3f800000;
      iVar2 = FUN_089edb80();
      *(undefined4 *)(iVar2 + 0x40) = 0;
      *(undefined4 *)(iVar2 + 0x44) = 0;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined4 *)(iVar2 + 0x4c) = 0;
      uVar1 = FUN_089edb80();
      FUN_089edf24(uVar1,0x10);
      iVar2 = FUN_0891ce08(param_1);
      if (iVar2 == 1) {
        FUN_089c8734(0,1,1,0);
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
  }
  iVar2 = FUN_089bf93c(0x2756,1);
  if ((iVar2 == 0) && (iVar2 = FUN_089c2c54(1), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

