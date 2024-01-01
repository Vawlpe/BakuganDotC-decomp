#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089eda24(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac5da0 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(8,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5da0 = piVar2;
    memset_jak(piVar2,0,8);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x70,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089edf88(iVar3);
      iVar4 = iVar3;
    }
    *DAT_08ac5da0 = iVar4;
    FUN_089ed9a8();
    if (param_1 == 0) {
      DAT_08ac5da0[1] = *DAT_08ac5da0;
    }
    else {
      DAT_08ac5da0[1] = param_1;
    }
  }
  iVar4 = FUN_089bfa40(0x274c);
  if (iVar4 == 0) {
    FUN_089bf6e8(0x274c,100);
  }
  return DAT_08ac5da0[1];
}

