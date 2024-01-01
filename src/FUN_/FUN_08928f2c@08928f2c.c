#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08928f2c(int param_1)

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
    FUN_08817708(iVar2,0,&PTR_s_wd_font16_08ac1330);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x4c0) = iVar3;
  FUN_08817a90(iVar3,0);
  *(undefined4 *)(*(int *)(param_1 + 0x4c0) + 0xa8) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x4c0) + 0xe0) = 0x43800000;
  *(undefined4 *)(*(int *)(param_1 + 0x4c0) + 0xdc) = 0x3f800000;
  strcpy(param_1 + 0x4e4,&DAT_08a9c254);
  *(undefined4 *)(param_1 + 0x4c8) = 0x3f800000;
  return;
}

