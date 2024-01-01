#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896d2d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xf0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08817708(iVar2,0,&PTR_s_wd_font16_08ac34a8);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x2a88) = iVar3;
  FUN_08817a90(iVar3,0);
  *(undefined4 *)(*(int *)(param_1 + 0x2a88) + 0xa8) = 0x3f333333;
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    *(undefined4 *)(*(int *)(param_1 + 0x2a88) + 0xe0) = 0x42f00000;
    iVar3 = *(int *)(param_1 + 0x2a88);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x2a88) + 0xe0) = 0x430c0000;
    iVar3 = *(int *)(param_1 + 0x2a88);
  }
  *(undefined4 *)(iVar3 + 0xdc) = 0x3e999999;
  strcpy(param_1 + 0x2aac,&DAT_08a9d9d8);
  *(undefined *)(param_1 + 0x2b65) = 0;
  *(undefined4 *)(param_1 + 0x2b30) = 0;
  *(undefined4 *)(param_1 + 0x2b40) = 0;
  return;
}

