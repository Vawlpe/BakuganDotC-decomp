#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08959bb0(int param_1)

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
    FUN_08817708(iVar2,0,&PTR_s_wd_font16_08ac3494);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x502c) = iVar3;
  FUN_08817a90(iVar3,1);
  *(undefined4 *)(*(int *)(param_1 + 0x502c) + 0xa8) = 0x3f666666;
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    *(undefined4 *)(*(int *)(param_1 + 0x502c) + 0xe0) = 0x43200000;
    iVar3 = *(int *)(param_1 + 0x502c);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x502c) + 0xe0) = 0x43200000;
    iVar3 = *(int *)(param_1 + 0x502c);
  }
  *(undefined4 *)(iVar3 + 0xdc) = 0x3f111111;
  strcpy(param_1 + 0x5050,&DAT_08a9d710);
  *(undefined *)(param_1 + 0x5109) = 0;
  *(undefined4 *)(param_1 + 0x50d4) = 0;
  *(undefined4 *)(param_1 + 0x50dc) = 0;
  *(undefined4 *)(param_1 + 0x50e4) = 0;
  return;
}

