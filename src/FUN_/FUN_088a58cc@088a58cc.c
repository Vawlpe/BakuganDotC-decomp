#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a58cc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) < 5) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < 1) {
      if (((-1 < iVar1) && (*(char *)(param_1 + 0x38) != '\0')) &&
         (iVar1 = *(int *)(param_1 + 0x34) + -1, *(int *)(param_1 + 0x34) = iVar1, iVar1 < 1)) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        iVar1 = FUN_088a56d0(param_1);
        if (iVar1 < 1) {
          *(undefined4 *)(param_1 + 0x30) = 1;
          FUN_088a57b0(param_1);
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 5;
        }
      }
    }
    else if (iVar1 < 2) {
      iVar1 = *(int *)(param_1 + 0x34) + -1;
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        iVar1 = FUN_088a56d0(param_1);
        if (iVar1 < 1) {
          *(undefined4 *)(param_1 + 0x30) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 5;
        }
      }
    }
    else if (((iVar1 < 3) && (*(char *)(param_1 + 0x38) != '\0')) &&
            (iVar1 = *(int *)(param_1 + 0x34) + -1, *(int *)(param_1 + 0x34) = iVar1, iVar1 < 1)) {
      iVar1 = FUN_088a56d0(param_1);
      if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x30) = 1;
        FUN_088a57b0(param_1);
      }
      else {
        *(undefined4 *)(param_1 + 0x34) = 0x96;
      }
    }
  }
  return;
}

