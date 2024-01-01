#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894c214(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      if (iVar2 < 1) {
        iVar2 = FUN_0894b174(param_1,0);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x2c) = 1;
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
      }
      else {
        iVar2 = FUN_089495f4(param_1);
        if (iVar2 == 0) {
          if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
            iVar2 = FUN_089c59d4();
            if (iVar2 != 0) {
              uVar1 = FUN_089c59f0();
              FUN_089c6350(uVar1,2,0,0);
            }
            *(undefined4 *)(param_1 + 0x2c) = 3;
          }
        }
        else {
          FUN_0894b8f8(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 2;
        }
      }
    }
  }
  else if (iVar2 < 3) {
    iVar2 = FUN_0894bd48(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
  }
  else if ((iVar2 < 4) && (iVar2 = FUN_0894b174(param_1,1), iVar2 != 0)) {
    FUN_0894ac6c(param_1);
  }
  return;
}

