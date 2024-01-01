#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894da84(int param_1)

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
  *(int *)(param_1 + 0x2dc) = iVar3;
  FUN_08817a90(iVar3,1);
  *(undefined4 *)(*(int *)(param_1 + 0x2dc) + 0xa8) = 0x3f4ccccd;
  *(undefined4 *)(*(int *)(param_1 + 0x2dc) + 0xe0) = 0x447a0000;
  *(undefined4 *)(*(int *)(param_1 + 0x2dc) + 0xdc) = 0x3f088889;
  strcpy(param_1 + 0x308,&DAT_08a9d3b0);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  return;
}

