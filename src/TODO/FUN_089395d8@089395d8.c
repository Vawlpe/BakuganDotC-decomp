#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089395d8(int param_1)

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
    FUN_08817708(iVar2,0,0);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x638) = iVar3;
  FUN_08817a90(iVar3,3);
  *(undefined4 *)(*(int *)(param_1 + 0x638) + 0xa8) = 0x3f333333;
  *(undefined4 *)(*(int *)(param_1 + 0x638) + 0xe0) = 0x447a0000;
  *(undefined4 *)(*(int *)(param_1 + 0x638) + 0xdc) = 0x3f19999a;
  strcpy(param_1 + 0x640,&DAT_08a9c88c);
  *(undefined *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x750) = 0;
  return;
}

