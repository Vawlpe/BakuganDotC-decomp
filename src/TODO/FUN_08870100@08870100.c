#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08870100(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af212c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 4);
  DAT_08aba910 = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x44,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar2 = 0;
  if (iVar3 != 0) {
    FUN_089bd9b4(iVar3);
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0x24) = iVar2;
  return param_1;
}

