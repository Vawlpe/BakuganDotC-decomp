#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089396cc(int param_1)

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
  *(int *)(param_1 + 0x63c) = iVar3;
  FUN_08817a90(iVar3,0);
  *(undefined4 *)(*(int *)(param_1 + 0x63c) + 0xa8) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x63c) + 0xe0) = 0x43940000;
  *(undefined4 *)(*(int *)(param_1 + 0x63c) + 0xdc) = 0x3f800000;
  strcpy(param_1 + 0x6c0,&DAT_08a9c88c);
  *(undefined *)(param_1 + 0x779) = 0;
  *(undefined4 *)(param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  return;
}

