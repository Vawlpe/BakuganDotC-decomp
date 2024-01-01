#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089f9f98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x44));
  if (*(char *)(param_1 + 8) != '\0') {
    iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x34) * 4 + 0x38);
    if (param_2 < 0) {
      iVar2 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x38) != 0) {
          *(undefined4 *)(*(int *)(iVar1 + 0x38) + 0x2c) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < 2);
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      uVar3 = 1;
    }
    else if (*(int *)(iVar1 + 0x2c) == 2) {
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      iVar1 = *(int *)(param_1 + 0x34) + 1;
      *(int *)(param_1 + 0x34) = iVar1;
      if (1 < iVar1) {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      uVar3 = 1;
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x44));
  return uVar3;
}

