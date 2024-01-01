#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089cd848(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x40,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  iVar3 = 0;
  DAT_08ac5924 = iVar2;
  do {
    iVar4 = iVar4 + 1;
    *(undefined4 *)(DAT_08ac5924 + iVar3) = 0xffffffff;
    *(undefined4 *)(DAT_08ac5924 + iVar3 + 4) = 0;
    iVar3 = iVar3 + 8;
  } while (iVar4 < 8);
  *param_1 = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar2 = 0;
  if (iVar3 != 0) {
    FUN_089bb5dc(iVar3,"COModule",3);
    iVar2 = iVar3;
  }
  param_1[1] = iVar2;
  return param_1;
}

