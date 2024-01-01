#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895c6bc(int param_1)

{
  int iVar1;
  
  FUN_0895ac6c();
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      FUN_0895ad80(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      goto LAB_0895c7cc;
    }
  }
  else {
    if (iVar1 < 2) {
      DAT_08ac3410 = 1;
      DAT_08ac0e70 = 1;
      FUN_089bf6e8(0x12f,100);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      goto LAB_0895c7cc;
    }
    if (iVar1 < 3) {
      iVar1 = FUN_089bf93c(0x12f,1);
      if (iVar1 == 0) {
        DAT_08ac3410 = 0;
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
      goto LAB_0895c7cc;
    }
  }
  iVar1 = FUN_0890a5a8(param_1);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      FUN_0895ae70(param_1);
      *(char *)(param_1 + 0x4cdc) = *(char *)(param_1 + 0x4cdc) + -1;
      *(undefined4 *)(param_1 + 0x28) = 2;
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
  }
  else if (iVar1 < 2) {
    FUN_0895bcec(param_1,1);
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 7;
  }
LAB_0895c7cc:
  FUN_0895be84(param_1);
  FUN_0895c220(param_1);
  FUN_0895c44c(param_1);
  return;
}

