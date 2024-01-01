#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089d9690(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x24,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089d8b38(iVar2,0);
    iVar3 = iVar2;
  }
  DAT_08ac5bcc = iVar3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[4] = 0;
  *(undefined *)(param_1 + 3) = 0;
  return param_1;
}

