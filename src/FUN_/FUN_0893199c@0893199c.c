#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893199c(int param_1)

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
    FUN_08817708(iVar2,0,&PTR_s_wd_font16_08ac19e8);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0xed4) = iVar3;
  FUN_08817a90(iVar3,1);
  *(undefined4 *)(*(int *)(param_1 + 0xed4) + 0xa8) = 0x3f333333;
  *(undefined4 *)(*(int *)(param_1 + 0xed4) + 0xe0) = 0x42e80000;
  *(undefined4 *)(*(int *)(param_1 + 0xed4) + 0xdc) = 0x3eddddde;
  strcpy(param_1 + 0xef8,&DAT_08a9c740);
  *(undefined4 *)(param_1 + 0xed8) = 0;
  *(undefined4 *)(param_1 + 0xedc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xee0) = 0;
  return;
}

