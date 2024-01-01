#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089da8fc(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_08ac5c40 != 0) && (iVar3 = *DAT_08ac5c38, param_1 < (uint)(DAT_08ac5c3c - iVar3))) {
    iVar2 = DAT_08ac5c40 + iVar3;
    *DAT_08ac5c38 = iVar3 + (param_1 + 0xf & 0xfffffff0);
    return iVar2;
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(param_1,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  return iVar3;
}

