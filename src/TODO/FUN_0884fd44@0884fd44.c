#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884fd44(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x448);
  if (iVar2 == 0xb) {
LAB_0884fdd4:
    iVar2 = FUN_0882c220(0xb);
    if (iVar2 == 0) goto LAB_0884fe18;
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  }
  else {
    if (iVar2 == 10) {
LAB_0884fdc8:
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
      goto LAB_0884fdd4;
    }
    if (iVar2 == 1) {
LAB_0884fdbc:
      *(undefined4 *)(param_1 + 0x448) = 10;
      *(undefined4 *)(param_1 + 0x4e0) = 0;
      goto LAB_0884fdc8;
    }
    if (iVar2 == 0) {
      FUN_0884b444(1);
      iVar2 = FUN_0882c13c();
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x448);
      }
      else {
        uVar1 = FUN_0882c15c();
        FUN_0882d014(uVar1);
        iVar2 = *(int *)(param_1 + 0x448);
      }
      *(undefined4 *)(param_1 + 0x4e0) = 0;
      *(int *)(param_1 + 0x448) = iVar2 + 1;
      goto LAB_0884fdbc;
    }
  }
  iVar2 = *(int *)(param_1 + 0x44c);
  *(undefined *)(param_1 + 0x55a) = 1;
  *(int *)(param_1 + 0x440) = iVar2;
  *(int *)(param_1 + 0x444) = iVar2;
  *(undefined4 *)(param_1 + 0x448) = 0;
  if (iVar2 != 6) {
    FUN_0884b444(0);
  }
LAB_0884fe18:
  FUN_0884bcc0(param_1);
  return;
}

